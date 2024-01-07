class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, long> mp;
        double ratio;
        long long ans = 0;

        for(vector<int> rect: rectangles){
            ratio = (double)rect[0]/rect[1];
            mp[ratio]++;
        }

        for(auto m: mp){
            ans += (m.second*(m.second-1))/2;
        }

        return ans;
    }
};