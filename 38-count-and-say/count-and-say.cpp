class Solution {
    string rle(string str){
        string ans = "";
        int count = 1;

        for(int i=1; i<str.size(); i++){
            if(str[i-1] == str[i]){
                count++;
            } else {
                ans += to_string(count);
                ans += str[i-1];
                count = 1;
            }
        }
        ans += to_string(count);
        ans += str[str.size()-1];

        return ans;
    }
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }

        string str = countAndSay(n-1);

        return rle(str);
    }
};