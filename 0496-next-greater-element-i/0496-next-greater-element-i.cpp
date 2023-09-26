class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int ek = -1;

        for(int i=0; i<nums1.size(); i++){
            cout<<"Finding "<<nums1[i]<<"..."<<endl;
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    cout<<"Found at position : "<<j<<endl;
                    for(int k=j+1; k<nums2.size(); k++){
                        if(nums2[k] > nums2[j]){
                            ek = nums2[k];
                            cout<<"Next greater element is "<<nums2[k]<<endl;
                            break;
                        }
                    }
                    arr.push_back(ek);
                    ek = -1;
                    cout<<endl;
                    continue;
                }
            }
        }
        

        return arr;
    }

};