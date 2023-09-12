class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int num = x;

        while(x >0){
            rev *= 10; rev += x%10;
            x /= 10;
        }

        return rev==num;
    }
};