class Solution {
    void replace(string& str, char ch, char to){
        for(char& c : str){
            if(c == ch){
                c = to;
            }
        }
    }
public:
    int maxDiff(int num) {
        string str = to_string(num);
        string temp = to_string(num);

        // Calculating maxValue
        size_t index = str.find_first_not_of('9');
        if (index != string::npos) {
            replace(str, str[index], '9');
        } 
        int maxValue = stoi(str);
        str = temp;

        // Calculating minValue without leading zeros
        if(str[0] == '1'){
            index = str.find_first_not_of("01");
            if (index != string::npos) {
                replace(str, str[index], '0');
            }
        } else {
            replace(str, str[0], '1');
        }
        int minValue = stoi(str);

        return maxValue - minValue;
    }
};