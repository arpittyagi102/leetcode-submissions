class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1, max = 0;
        if(nums.size()==0) return 0;

        set<int> st;
        for(int i : nums){
            st.insert(i);
        }
        nums.clear();
        for(int i : st){
            nums.push_back(i);
        }

        for(int i=1; i<nums.size(); i++){
            cout<<nums[i]<<" : ";
            if(nums[i-1] != nums[i]-1){
                count = 1;
            }
            else{
                count++;
                if(max < count)
                    max = count;
            }
            cout<<count<<endl;
        }

        return max==0 ? 1 : max;
    }
};