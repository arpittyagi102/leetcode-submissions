class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, long> mp;
        double ratio;
        long long ans = 0;

        for(vector<int> rect: rectangles){
            ratio = (double)rect[0]/rect[1];
            if(mp.find(ratio)!=mp.end()){
                ans += mp[ratio];
            }
            mp[ratio]++;
        }

        return ans;
    }
};