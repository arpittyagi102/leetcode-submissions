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
        unordered_map<int, int> mp;
        int mx = 0;
        int count = 0;

        for(int i=1; i<=n; i++){
            mp[sumOfDigits(i)]++;
            mx = max(mx, mp[sumOfDigits(i)]);
        }

        for(auto pair: mp){
            if(pair.second == mx){
                count++;
            }
        }

       return count;
    }
};