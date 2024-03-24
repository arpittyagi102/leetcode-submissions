class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        int secondSlow = nums[0];

        while(secondSlow != slow){
            slow = nums[slow];
            secondSlow = nums[secondSlow];
        }

        return slow;
    }
};