class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n != original.size()){
            return {};
        }

        vector<vector<int>> ans(m);
        int k=0;

        for(int i=0; i<m; i++){
            vector<int> row(n);
            for(int j=0; j<n; j++){
                row[j] = original[k++];
            }
            ans[i] = row;
        }

        return ans;
    }
};