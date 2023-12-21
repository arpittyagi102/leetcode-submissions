class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int m = INT_MIN;

        sort(points.begin(), points.end(), [](vector<int> A, vector<int> B){
            return A[0] < B[0]; 
        });

        for(int i=0; i<points.size()-1; i++){
            if((points[i+1][0] - points[i][0]) > m){
                m = points[i+1][0] - points[i][0];
            }
        }

        return m;
    }
};