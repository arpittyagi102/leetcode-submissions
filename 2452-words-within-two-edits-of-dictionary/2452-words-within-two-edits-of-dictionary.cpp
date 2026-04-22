class Solution {
    bool compare(string one, string two) {
        int differences = 0;

        for(int i=0; i<one.size(); i++) {
            if(one[i] != two[i]) {
                differences++;
                if(differences > 2)
                    return false;
            } 
        }

        return true;
    }
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;

        for(string query : queries) {
            for(string word : dictionary) {
                if(compare(query, word)) {
                    ans.push_back(query);
                    break;
                }
            }  
        }

        return ans;
    }
};