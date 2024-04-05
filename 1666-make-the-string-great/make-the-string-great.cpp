class Solution {
public:
    string makeGood(string s) {
        if(s.size() < 2){
            return s;
        }

        for(int i=0; i<s.size()-1; i++){
            if(abs(s[i]-s[i+1]) == 32){
                s.erase(i,2);
                return makeGood(s);
            }
        } 

        return s;
    }
};