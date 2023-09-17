class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        bool carry = false;
 
        digits[n-1]++;
        for(int i=n-1; i>=0; i--){
            if(carry){                
                digits[i]++;
                carry = false;
            }
            if(digits[i] == 10){
                carry = true;
                digits[i] = 0;
            }
            else
                break;
        }
        if(carry){
            digits.insert(digits.begin(),1);
        }
        
        return digits;
    }
};