class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(begin(nums), end(nums));   
        vector<int> ans;

        for(int i=1; i<=size(nums); i++){
            if(!s.count(i)){                
                ans.push_back(i);
            } 
        }  

        return ans;
    }
};