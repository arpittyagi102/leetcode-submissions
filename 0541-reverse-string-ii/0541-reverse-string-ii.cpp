class Solution {
public:
    string reverseStr(string s, int k) {

        for(int i=0;i<s.size();i=i+k+k)
            if(i+k<s.size())
                reverse(s.begin()+i,s.begin()+i+k);
            else if(i+k>=s.size())
                reverse(s.begin()+i,s.end());  
                  
        return s;
    }
};