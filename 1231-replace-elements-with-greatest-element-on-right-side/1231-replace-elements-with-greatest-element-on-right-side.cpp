class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxnum = -1;
        vector<int> res(n);

        for(int i=n-1; i>=0; i--){
            res[i] = maxnum;
            maxnum = max(arr[i],maxnum);
        }

        return res;
    }
};