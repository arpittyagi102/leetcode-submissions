class Solution {
public:
    int myAtoi(string s) {
        bool positive = true;
        long ans = 0;
        int i = 0;

        while(s[i++]==' ');
        --i;

        if(s[i]=='+'){
            i++;
        } else if(s[i]=='-') {
            positive = false;
            i++;
        }

        for(int j=i; j<s.size(); j++){
            if(s[j]>='0' && s[j]<='9'){
                ans*=10;
                ans+=s[j]-'0';
                if(ans > INT_MAX){
                    return positive ? INT_MAX : INT_MIN;
                }
            }
            else{
                return positive ? ans : -ans;
            }
        }

        return positive ? ans : -ans;
    }
};