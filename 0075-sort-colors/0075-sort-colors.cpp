class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i : nums){
            mp[i]++;
        }

        nums.clear();

        for(int j=0; j<3; j++){
            for(int i=0; i<mp[j]; i++){
                nums.push_back(j);
            }
        }
    }
};