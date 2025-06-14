class Solution {
    vector<int> getDigits(int num){
        vector<int> digitsArray;

        while(num > 0){
            digitsArray.insert(digitsArray.begin(), num % 10);
            num /= 10;
        }

        return digitsArray;
    }
    int getNum(vector<int> digits){
        int num = 0;

        for(int digit : digits){
            num = (num*10) + digit;
        }

        return num;
    }
public:
    int minMaxDifference(int num) {
        vector<int> digits = getDigits(num);
        vector<int> digitsCopy = digits;

        int digitToMax = -1;
        int digitToMin = digits[0];

        for(int i=0; i<digits.size(); i++){
            if(digitToMax == -1){
                if(digits[i] != 9){
                    digitToMax = digits[i];
                    digits[i] = 9;
                }

            } else {
                if(digits[i] == digitToMax){
                    digits[i] = 9;
                }
            }

            if(digitsCopy[i] == digitToMin){
                digitsCopy[i] = 0;
            }
        }

        int maxValue = getNum(digits);
        int minValue = getNum(digitsCopy);

        return maxValue - minValue;
    }
};