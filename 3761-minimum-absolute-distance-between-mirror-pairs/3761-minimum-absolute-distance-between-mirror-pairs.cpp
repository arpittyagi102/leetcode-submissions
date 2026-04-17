class Solution {
    int reverse(int num) {
        int reversedNum = 0;

        while(num > 0){
            reversedNum *= 10;
            reversedNum += num % 10;
            num /= 10;
        }

        return reversedNum;
    }
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int minDistance = n + 1;

        for (int i = 0; i < n; ++i) {
            int x = nums[i];
            if (mp.count(x)) {
                minDistance = min(minDistance, i - mp[x]);
            }
            mp[reverse(x)] = i;
        }

        return minDistance == n + 1 ? -1 : minDistance;
    }
};