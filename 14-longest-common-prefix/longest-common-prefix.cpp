class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        sort(strs.begin(), strs.end());
        if(strs.size() == 1){
            return strs[0];
        }

        for(int i=0; i<strs[0].size() && i<strs[strs.size()-1].size(); i++){
            if(strs[0][i] == strs[strs.size()-1][i]){
                res += strs[0][i];
            }
            else{
                return res;
            }
        }

        return res;
    }
};