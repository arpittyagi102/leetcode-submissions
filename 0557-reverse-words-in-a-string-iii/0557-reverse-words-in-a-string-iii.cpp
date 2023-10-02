class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string one,ans;

        while(ss>>one){
            reverse(one.begin(),one.end());
            ans += one + " ";
        }   ans.pop_back();

        return ans;
    }
};