class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }   

        for(auto i : mp){
            cout<<i.first<<" "<<i.second<<endl;
        }

        for(int i=1; i<=nums.size(); i++){
            if(!mp.count(i))
                ans.push_back(i);
        }

        return ans;
    }
};