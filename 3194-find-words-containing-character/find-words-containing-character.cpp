class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        
        for(int i=0; i<words.size(); i++){
            int pos = words[i].find(x);
            if(pos != string::npos){
                ans.push_back(i);
            }
        }

        return ans;
    }
};