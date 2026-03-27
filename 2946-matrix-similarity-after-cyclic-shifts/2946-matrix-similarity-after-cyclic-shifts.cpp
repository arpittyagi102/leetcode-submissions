class Solution {
    bool leftShift(vector<int>& arr, int k) {
        int n = arr.size();
        k %= n;

        for (int i = 0; i < n; i++) {
            int newIndex = (i - k + n) % n;
            if(arr[newIndex] != arr[i]){
                return false;
            }
        }

        return true;
    }
    bool rightShift(vector<int>& arr, int k) {
        int n = arr.size();
        k %= n;

        for (int i = 0; i < n; i++) {
            int newIndex = (i + k + n) % n;
            if(arr[newIndex] != arr[i]){
                return false;
            }
        }

        return true;
    }
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        for(int i=0; i<mat.size(); i++){
            if(i%2){
                if(!rightShift(mat[i],k)) return false;
            } else {
                if(!leftShift(mat[i],k)) return false;
            }
        }

        return true;
    }
};