class Solution {
    bool areEqual(unordered_map<char,int> mp1, unordered_map<char,int> mp2){  
        for (const auto& pair : mp1) {
            auto it = mp2.find(pair.first); 
            if (it == mp2.end() || it->second != pair.second) 
                return false;
        }

        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        if(s1.size() > s2.size()){
            return false;
        }

        for(int i=0; i<s1.size(); i++){
            mp1[s1[i]]++;
        }

        for(int i=0; i<s1.size(); i++){
            mp2[s2[i]]++;
        }

        for(int i=0; i<s2.size()-s1.size()+1; i++){
            if(areEqual(mp1, mp2)){
                return true;
            }
            mp2[s2[i]]--;
            mp2[s2[i+s1.size()]]++;
        }

        return false;
    }
};