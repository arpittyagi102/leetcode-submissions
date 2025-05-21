class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> zeroRows(m,false);
        vector<bool> zeroCols(n,false);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    zeroRows[i] = true;
                    zeroCols[j] = true;
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(zeroRows[i] || zeroCols[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};