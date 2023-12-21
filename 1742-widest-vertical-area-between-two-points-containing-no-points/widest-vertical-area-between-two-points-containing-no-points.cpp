class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](vector<int> A, vector<int> B){
            return A[0] < B[0]; 
        });

        //for(auto point : points){
        //    cout<<point[0]<<" ";
        //}   cout<<endl;

        vector<int> diff(points.size()-1);
        int m = INT_MIN;

        for(int i=0; i<points.size()-1; i++){
            diff[i] = points[i+1][0] - points[i][0];
            if(diff[i] > m){
                m = diff[i];
            }
        }

        //for(auto i : diff){
        //    cout<<i<<" ";
        //}   cout<<endl;

        return m;
    }
};