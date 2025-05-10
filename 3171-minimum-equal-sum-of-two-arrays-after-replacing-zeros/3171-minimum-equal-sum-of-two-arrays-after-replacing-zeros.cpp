class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0;
        long long zero1 = 0;
        long long sum2 = 0;
        long long zero2 = 0;

        for(int num: nums1){        // O(n) time
            sum1 += num;
            if(num == 0){
                zero1++;
            }
        }

        for(int num: nums2){        // O(m) time
            sum2 += num;
            if(num == 0){
                zero2++;
            }
        }

        long long total1 = sum1 + zero1;
        long long total2 = sum2 + zero2;

        if(zero1 == 0 && total2 > total1){
            return -1;
        } else if(zero2 == 0 && total1 > total2){
            return -1;
        }

        return max(total1, total2);
    }
};