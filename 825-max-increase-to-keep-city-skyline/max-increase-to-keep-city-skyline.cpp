class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> row(grid.size());
        vector<int> col(grid[0].size());
        for(int i=0; i<grid.size(); i++){
            int m1 = 0,m2 = 0;
            for(int j=0; j<grid.size(); j++){
                m1 = max(m1, grid[i][j]);
                m2 = max(m2, grid[j][i]);
            }
            row[i] = m1;
            col[i] = m2;
        }

        int ans = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                ans += min(row[i],col[j]) - grid[i][j];
            }
        }

        return ans;
    }
};