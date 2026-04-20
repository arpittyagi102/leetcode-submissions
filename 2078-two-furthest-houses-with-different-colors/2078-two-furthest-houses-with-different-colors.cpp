class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int first = colors[0];
        int last = colors[colors.size()-1];
        int n = colors.size();
        int ans = 0;

        for(int i=0; i<n; i++) {
            if(last != colors[i]) {
                ans = max(ans, n-i-1);
                break;
            }
        }

        for(int i=n-1; i>=0; i--) {
            if(first != colors[i]) {
                ans = max(ans, i);
                break;
            }
        }

        return ans;
    }
};