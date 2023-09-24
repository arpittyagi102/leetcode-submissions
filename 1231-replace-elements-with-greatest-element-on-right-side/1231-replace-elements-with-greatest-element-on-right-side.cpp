class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxnum = -1;
        vector<int> res(arr.size());

        for(int i=arr.size()-1; i>=0; i--){
            res[i] = maxnum;
            maxnum = max(arr[i],maxnum);
        }

        return res;
    }
};