class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size()-1;
        int temp;

        for(int i=0; i<(n+1)/2; i++){
            for(int j=i; j<n-i; j++){
                temp = matrix[n-j][i];
                matrix[n-j][i] = matrix[n-i][n-j];
                matrix[n-i][n-j] = matrix[j][n-i];
                matrix[j][n-i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }
};