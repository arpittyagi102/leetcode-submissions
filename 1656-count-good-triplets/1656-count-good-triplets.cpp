class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                for(int k=j+1; k<arr.size(); k++){
                    int x = abs(arr[i] - arr[j]);
                    int y = abs(arr[k] - arr[j]);
                    int z = abs(arr[i] - arr[k]);

                    if(x<=a && y<=b && z<=c){
                        //cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                        count++;
                    }
                }
            }
        }

        return count;
    }
};