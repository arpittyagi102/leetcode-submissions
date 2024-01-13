class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows < 2){
            return s;
        }

        string ans;

        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.size(); j += (2 * numRows - 2)) {
                ans += s[j];

                if (i != 0 && i != numRows - 1) {
                    int k = j + (2 * numRows - 2 * i - 2); 
                    if (k < s.size()) {
                        ans += s[k];
                    }
                }
            }
        }

        return ans;
    }
};