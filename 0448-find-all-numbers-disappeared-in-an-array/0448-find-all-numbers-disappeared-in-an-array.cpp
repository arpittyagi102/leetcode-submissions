class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> appearedNumbers;
        vector<int> dissappearedNumbers;

        for(int num: nums)
            appearedNumbers.insert(num);
        
        for(int i=1; i<=nums.size(); i++)
            if(appearedNumbers.find(i) == appearedNumbers.end())
                dissappearedNumbers.push_back(i);
        
        return dissappearedNumbers;
    }
};