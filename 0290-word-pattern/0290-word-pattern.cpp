class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> vec;
        stringstream ss(s);
        string word;
        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;

        while (getline(ss, word, ' ')) {
            vec.push_back(word);
        }

        if(pattern.size() != vec.size()){
            return false;
        }

        for(int i=0; i<pattern.size(); i++){
            if(mp.count(pattern[i]) || mp2.count(vec[i])){
                if (mp[pattern[i]]!=vec[i] || mp2[vec[i]]!=pattern[i]){
                    return false;
                }
            }
            else {
                mp[pattern[i]] = vec[i];
                mp2[vec[i]] = pattern[i];
            }
        }

        return true;
    }
};