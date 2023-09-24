class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max = arr[n-1];
        vector<int> res;

        for(int i=n-1; i>0; i--){
            if(arr[i] > max)
                max = arr[i];
            cout<<max<<" ";
            res.push_back(max);
        }

        reverse(res.begin(),res.end());
        res.push_back(-1);

        return res;
    }
};