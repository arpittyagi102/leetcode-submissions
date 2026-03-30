class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char, int> mapEven;
        unordered_map<char, int> mapOdd;

        for(int i=0; i<s1.size(); i++)
            if(i%2)
                mapOdd[s1[i]]++;
            else
                mapEven[s1[i]]++;

        for(int i=0; i<s2.size(); i++)
            if(i%2)
                mapOdd[s2[i]]--;
            else
                mapEven[s2[i]]--;

        for(auto pair: mapOdd)
            if(pair.second)
                return false;
        
        for(auto pair: mapEven)
            if(pair.second)
                return false;

        return true;       
    }
};