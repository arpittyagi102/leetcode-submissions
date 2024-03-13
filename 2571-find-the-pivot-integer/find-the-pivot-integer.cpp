class Solution {
public:
    int pivotInteger(int n) {
        int s1 = n;
        int s2 = n * (n + 1) / 2;
        n--;
        
        while(s2 >= s1){
            if(s2==s1){
                return n+1;
            } else {
                s2 -= n+1;
                s1 += n--;
            }
        }

        return -1;
    }
};