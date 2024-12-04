class Solution {
    char inc(char c){
        return c == 'z' ? 'a' : ++c;
    }
public:
    bool canMakeSubsequence(string str1, string str2) {
        int sIndex = 0;

        for(int i=0; i<str1.size(); i++){
            if(str1[i] == str2[sIndex] || inc(str1[i]) == str2[sIndex]){
                sIndex++;
            }
        }

        return sIndex == str2.size();
    }
};