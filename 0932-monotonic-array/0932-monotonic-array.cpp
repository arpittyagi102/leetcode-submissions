class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> a = nums;
        vector<int> d = nums;
        
        sort(a.begin(),a.end());
        sort(d.begin(),d.end(), [](int a, int b){
            return a>b;
        });

        return nums==a || nums==d;
    }
};