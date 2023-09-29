class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()==1){
            cout<<nums[0]<<" ";
            return nums;
        }

        int n = nums.size()/2;
        vector<int> first{nums.begin(),nums.begin()+n};
        vector<int> second{nums.begin()+n,nums.end()};

        first = sortArray(first);
        second = sortArray(second);

        vector<int> hello(first.size()+second.size());
        merge(first.begin(),first.end(),second.begin(),second.end(),hello.begin());

        return hello;
    }
};