class Solution {
    static bool compare(string str1, string str2){
        return str1.size() < str2.size();
    }
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        sort(words.begin(), words.end(), compare);

        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                if(words[j].find(words[i]) != string::npos){
                    ans.push_back(words[i]);
                    break;
                }
            }
        }

        return ans;
    }
};