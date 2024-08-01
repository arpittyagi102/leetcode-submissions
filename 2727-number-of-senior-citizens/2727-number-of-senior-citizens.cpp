class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;

        for(string detail: details){
            if(detail[11] > '6' || (detail[11] == '6' && detail[12] != '0')){
                ans++;
            }
        }

        return ans;
    }
};