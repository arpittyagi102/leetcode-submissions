class Solution {
public:
    int n(char c){
        if(c=='I'){
            return 1;
        }
        else if(c=='V'){
            return 5;
        }
        else if(c=='X'){
            return 10;
        }     
        else if(c=='L'){
            return 50;
        }
        else if(c=='C'){
            return 100;
        }
        else if(c=='D'){
            return 500;
        }
        else if(c=='M'){
            return 1000;
        }
        else{
            return 0;
        }
    }
    int romanToInt(string s) {
        int ans=0;
        int length = s.length();

        for(int i=0; i<length; i++){
            if(n(s[i]) < n(s[i+1]) && i!=length-1){
                ans -= n(s[i]);
                cout<<"\n Subtracting "<<n(s[i]);
                continue;
            }
            ans+=n(s[i]);
            cout<<"\n Adding "<<n(s[i]);
        }
        return ans;
    }
};