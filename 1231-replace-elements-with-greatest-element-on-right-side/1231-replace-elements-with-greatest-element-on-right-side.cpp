class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res(arr.size());
        int maxnum = -1;

        for(int i=arr.size()-1; i>=0; i--){
            res[i] = maxnum;
            maxnum = max(maxnum,arr[i]);
        }

        return res;
    }
};