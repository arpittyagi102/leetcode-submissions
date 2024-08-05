class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;

        for(string str: arr){
            mp[str]++;
        }

        for(string str: arr){
            if(mp[str] == 1){
                if(k != 1){
                    k--;
                } else {
                    return str;
                }
            }
        }

        return "";
    }
};