class Solution {
    int sumOfDigits(int n){
        int sum = 0;

        while(n){
            sum += n%10;
            n = n/10;
        }

        return sum;
    }
public:
    int countLargestGroup(int n) {
        vector<int> map(99,0);
        int maxValue = 0;
        
        for(int i=1; i<=n; i++){
            map[sumOfDigits(i)]++;
            maxValue = max(maxValue, map[sumOfDigits(i)]);
        }

        int count = 0;
        for(int value: map){
            if(value == maxValue){
                count++;
            }
        }

       return count;
    }
};