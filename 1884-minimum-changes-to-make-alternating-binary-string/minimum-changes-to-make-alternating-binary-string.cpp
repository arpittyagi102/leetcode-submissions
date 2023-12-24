class Solution {
public:
    int minOperations(string s) {
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(i%2==0 && s[i]=='0'){
                count++;
            } 
            else if(i%2==1 && s[i]=='1') {
                count++;
            }
        }

        return min(count, (int) s.size()-count); 
    }
};