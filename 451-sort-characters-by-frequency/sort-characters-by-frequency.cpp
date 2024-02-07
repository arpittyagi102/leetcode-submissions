class Solution {
    static bool sortfn(auto one, auto two){
        return one.second > two.second;
    }
public:
    string frequencySort(string s) {
        map<char, int> mp;
        string ans = "";

        for(char c: s){
            mp[c]++;
        }

        vector<pair<char,int>> mp2(mp.begin(), mp.end());
        sort(mp2.begin(),mp2.end(),[](auto a, auto b){
            return a.second > b.second;
        });

        for(auto one: mp2){
            for(int i=0; i<one.second; i++){
                ans += one.first;
            }
        }

        return ans;
    }
};