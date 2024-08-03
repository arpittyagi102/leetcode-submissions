class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> arrMap;
        unordered_map<int,int> targetMap;

        for(int i: arr){
            arrMap[i]++;
        }
        for(int t: target){
            targetMap[t]++;
        }

        if(arrMap.size() != targetMap.size()){
            return false;
        }

        for(const auto& pair: arrMap){
            if(pair.second != targetMap[pair.first]){
                return false;
            }
        }

        return true;
    }
};