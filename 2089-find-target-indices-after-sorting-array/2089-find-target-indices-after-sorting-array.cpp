class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smallerThanTarget = 0;
        int numberOfTarget = 0;

        for(int num : nums) {
            if(num < target)
                smallerThanTarget++;
            else if(num == target)
                numberOfTarget++;
        }

        vector<int> indices(numberOfTarget);

        for(int i=0; i<numberOfTarget; i++)
            indices[i] = smallerThanTarget+i;

        return indices;
    }
};