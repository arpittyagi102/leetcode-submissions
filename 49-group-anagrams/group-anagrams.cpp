class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector< vector<string>> ans;

        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }

        for(auto x: mp){
            ans.push_back(x.second);
        }

        return ans;
    }
};