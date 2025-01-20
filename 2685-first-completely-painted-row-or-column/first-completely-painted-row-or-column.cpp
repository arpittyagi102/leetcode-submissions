class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int> rows(mat.size(), mat[0].size());
        vector<int> cols(mat[0].size(), mat.size());

        unordered_map<int, pair<int,int>> mp;

        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                mp[mat[i][j]] = make_pair(i,j);
            }
        }

        for(int i=0; i<arr.size(); i++){
            int a = mp[arr[i]].first;
            int b = mp[arr[i]].second;

            rows[a]--;
            cols[b]--;

            if(rows[a] == 0 || cols[b] == 0){
                return i;
            }
        }

        return 0;
    }
};