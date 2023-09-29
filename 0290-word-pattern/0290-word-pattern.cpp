class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> vec;
        int j = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                vec.push_back(s.substr(j,i-j));
                j=i+1;
            }
        }
        vec.push_back(s.substr(j,s.size()-j));  
        if(vec.size() != pattern.size())  
            return false;
        // converted the string into array of words

        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;

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