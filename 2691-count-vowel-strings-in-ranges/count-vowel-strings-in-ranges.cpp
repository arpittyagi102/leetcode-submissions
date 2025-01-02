class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> arr(words.size(),0);
        unordered_set<char> vowels{'a','e','i','o','u'};
        vector<int> ans(queries.size(),0);

        for(int i=0; i<words.size(); i++){
            if((vowels.find(words[i][0]) != vowels.end()) && 
               (vowels.find(words[i][words[i].size()-1]) != vowels.end())) {
                arr[i] = 1;
            }
        }

        // converting arr into preSum
        int sum = arr[0];

        for(int i=1; i<arr.size(); i++){
            arr[i] += sum;
            sum = arr[i];
        }

        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            if (l == 0) {
                ans[i] = arr[r];
            } else {
                ans[i] = arr[r] - arr[l - 1];
            }
        }

        return ans;
    }
};