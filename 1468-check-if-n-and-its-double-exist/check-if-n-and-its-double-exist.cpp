class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }

        for(const auto& pair: mp){
            if(mp.find(pair.first*2)!=mp.end()){
                if(pair.first == 0 && pair.second < 2){
                    // do nothing
                } else {
                    return true;
                }
            }
        }

        return false;
    }
};