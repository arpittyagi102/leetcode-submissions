class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> vec(n);
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            vec[i] = to_string(i+1);
        }

        sort(vec.begin(), vec.end());

        for(int i=0; i<n; i++){
            ans[i] = stoi(vec[i]);
        }

        return ans;
    }
};