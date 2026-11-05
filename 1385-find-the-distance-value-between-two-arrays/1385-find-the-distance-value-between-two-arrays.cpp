class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;

        for(int n1 : arr1) {
            bool shouldCount = true;
            
            for(int n2 : arr2) {
                if(abs(n1 - n2) <= d) {
                    shouldCount = false;
                    break;
                }
            }

            if(shouldCount) {
                count++;
            }
        }

        return count;
    }
};