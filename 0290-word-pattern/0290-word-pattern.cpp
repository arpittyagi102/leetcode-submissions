class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words = split(s);
        unordered_map<string, char> patternMap;
        unordered_map<char, string> wordMap;

        if(words.size() != pattern.size())
            return false;

        for(int i=0; i<words.size(); i++){
            if(patternMap[words[i]]){
                if(patternMap[words[i]] != pattern[i]){
                    return false;
                }
            } else {
                if(wordMap.count(pattern[i])){
                    return false;
                }

                patternMap[words[i]] = pattern[i];
                wordMap[pattern[i]] = words[i];
            }
        }

        return true;
    }

    vector<string> split(string s){
        istringstream stream(s);
        string word;
        vector<string> words;

        while (stream >> word) {
            words.push_back(word);
        }

        return words;
    }
};