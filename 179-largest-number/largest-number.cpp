class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strNums(nums.size());
        string ans = "";
        bool allZero = true;

        for(int i=0; i<nums.size(); i++){
            strNums[i] = to_string(nums[i]);
        }

        sort(strNums.rbegin(), strNums.rend(), [](const std::string& a, const std::string& b) {
            string one = a+b;
            string two = b+a;
            return one < two;
        });

        for(string s: strNums){
            if(s!="0"){
                allZero = false;
            }
            ans += s;
        }

        return allZero ? "0" : ans;
    }
};