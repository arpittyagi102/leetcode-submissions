class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> appearedNumbers(nums.begin(), nums.end());
        vector<int> dissappearedNumbers;

        for(int i=1; i<=nums.size(); i++)
            if(appearedNumbers.find(i) == appearedNumbers.end())
                dissappearedNumbers.push_back(i);
        
        return dissappearedNumbers;
    }
};