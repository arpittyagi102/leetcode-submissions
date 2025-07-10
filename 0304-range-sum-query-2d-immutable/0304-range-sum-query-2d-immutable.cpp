class NumMatrix {
    vector<vector<int>> prefixSum;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        prefixSum = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size()));

        prefixSum[0][0] = matrix[0][0];
        for(int j=1; j<matrix[0].size(); j++) {
            prefixSum[0][j] = matrix[0][j] + prefixSum[0][j-1];
        }

        for(int i=1; i<matrix.size(); i++) {
            prefixSum[i][0] = matrix[i][0] + prefixSum[i-1][0];
            for(int j=1; j<matrix[i].size(); j++) {
                prefixSum[i][j] = matrix[i][j] + prefixSum[i][j-1] + prefixSum[i-1][j] - prefixSum[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ii = (row1 > 0 && col1 > 0) ? prefixSum[row1-1][col1-1] : 0;
        int ij = (row1 > 0) ? prefixSum[row1-1][col2] : 0;
        int ji = (col1 > 0) ? prefixSum[row2][col1-1] : 0;
        int jj = prefixSum[row2][col2];

        return jj - ij - ji + ii;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */