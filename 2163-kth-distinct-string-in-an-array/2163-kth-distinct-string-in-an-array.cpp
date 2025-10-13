class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> myMap;

        for(string str: arr){
            myMap[str]++;
        }

        for(string str: arr){
            if(myMap[str] == 1){
                k--;
            }
            if(k == 0){
                return str;
            }
        }

        return "";
    }
};