class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //cout<<"---------\n";
        int left = 0;
        int right = 0;
        int sum = nums[0];
        int len = 1;
        int ans = INT_MAX;

        while(left < nums.size()){
            //cout<<"l="<<left<<" r="<<right<<" sum="<<sum<<endl;
            if(sum < target){
            //    cout<<"increasing window sum < target\n";
                if(right+1 == nums.size()){
                    return 0;
                }
                right++;
                sum += nums[right];
            } else {
                ans = min( ans, right-left+1 );
                if((sum - nums[left]) < target){
                    if(right+1 == nums.size()){
                        return ans;
                    }
            //        cout<<"increasing window cant decrease\n"; 
                    right++;
                    sum += nums[right];
                } else {
            //        cout<<"decreasing window coz why not\n";
                    sum -= nums[left];
                    left++;
                }
            }
        }

         ans = min( ans, right-left+1 );

        return ans;
    }
};