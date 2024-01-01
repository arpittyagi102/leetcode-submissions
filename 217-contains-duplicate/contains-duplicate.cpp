class Solution
{
public:
    bool containsDuplicate(vector<int>& nums)
    {  
       unordered_set<int> sett;
       for(int i:nums)
       {
          sett.insert(i);
          
       }
      
        return nums.size()!=sett.size();
       
    }
};