class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> prefixgreat(arr.size());
        int maxhere = -1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            prefixgreat[i] = maxhere;
            maxhere = max(maxhere,arr[i]);
        }
        return prefixgreat;
    }
};