class Solution {
public:

    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int max = 0;
        int area;

        while(i != j){
            area = min(height[i],height[j]) * (j-i);
            max = area > max ? area : max;
            //cout<<height[i]<<" and "<<height[j]<<" -> "<<area<<endl;

            if(height[i] > height[j]){
                j--;
            }
            else
                i++;
        }

        
        return max;
    }
};