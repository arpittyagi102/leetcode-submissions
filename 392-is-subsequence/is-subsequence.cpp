class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p = -1;

        for(int i=0; i<s.size(); i++){
            cout<<"finding "<<s[i]<<" after "<<p<<endl;
            p = t.find(s[i],p+1);
            if(p == string::npos){
                return false;
            }
            cout<<"found at "<<p<<endl;
        }

        return true;
    }
};