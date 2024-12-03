class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string newString(s.size() + spaces.size(), ' ');
        unordered_set<int> st{spaces.begin(), spaces.end()};
        int count = 0;
        
        for(int i=0; i<s.size(); i++){
            if(st.find(i) != st.end()){
                newString[i+count+1] = s[i];
                count++;
            } else {
                newString[i+count] = s[i];
            }
        }

        return newString;
    }
};