class NumMatrix {
    vector<vector<int>> prefixSum;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        prefixSum = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size()));

        for(int i=0; i<matrix.size(); i++) {
            prefixSum[i][0] = matrix[i][0];
            for(int j=1; j<matrix[i].size(); j++) {
                prefixSum[i][j] = matrix[i][j] + prefixSum[i][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;

        for(int i=row1; i<=row2; i++){
            if (col1 == 0){
                sum += prefixSum[i][col2];
            } else {
                sum += prefixSum[i][col2] - prefixSum[i][col1 - 1];
            }
        }

        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */