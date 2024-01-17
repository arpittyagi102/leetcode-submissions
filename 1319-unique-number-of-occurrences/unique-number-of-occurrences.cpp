class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> st;

        for(int i: arr){
            mp[i]++;
        }

        for(auto i: mp){
            if(!st.insert(i.second).second)
                return false;
        }

        return true;
    }
};