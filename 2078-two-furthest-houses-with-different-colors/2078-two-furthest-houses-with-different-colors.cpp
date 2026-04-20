class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int first = colors[0];
        int last = colors[colors.size()-1];
        int n = colors.size();

        for(int i=0; i<(n/2+1); i++)
            if(last != colors[i] || first != colors[n-i-1])
                return n-i-1;

        return 0;
    }
};