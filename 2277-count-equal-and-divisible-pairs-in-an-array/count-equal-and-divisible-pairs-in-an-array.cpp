class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        for(auto pair: mp){
            //cout<<pair.first<<" : ";

            for(int i=0; i<pair.second.size()-1; i++){
                for(int j=i+1; j<pair.second.size(); j++){
                    //cout<<"["<<pair.second[i]<<","<<pair.second[j]<<"] ";

                    if((pair.second[i] * pair.second[j])%k == 0){
                        count++;
                    }
                }
            }
            //cout<<endl;
        }

        return count;
    }
};