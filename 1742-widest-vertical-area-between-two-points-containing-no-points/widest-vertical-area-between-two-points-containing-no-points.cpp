class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int m = INT_MIN;

        sort(points.begin(), points.end(), [](const auto& A, const auto& B){
            return A[0] < B[0]; 
        });

        for(int i=0; i<points.size()-1; i++){
            m = max(m,points[i+1][0] - points[i][0]);           
        }

        return m;
    }
};