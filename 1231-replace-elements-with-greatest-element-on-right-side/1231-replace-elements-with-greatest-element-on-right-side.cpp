class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxnum = arr[n-1];

        for(int i=n-1; i>0; i--){
            maxnum = max(arr[i],maxnum);
            arr[i] = maxnum;
        }

        arr.erase(arr.begin());
        arr.push_back(-1);

        return arr;
    }
};