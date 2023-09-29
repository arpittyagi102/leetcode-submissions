class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> mp;
        vector< vector<int>> arr[n];
        int max=0;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(int i=0; i<k; i++){
            int max = 0;
            int num;
            auto it = mp.begin();
            while(true){
                if(it->second > max){
                    max = it->second;
                    num = it->first;
                }
                if(++it == mp.end())
                    break;
            }
            ans.push_back(num);
            mp.erase(num);
        }

        return ans;
    }
};