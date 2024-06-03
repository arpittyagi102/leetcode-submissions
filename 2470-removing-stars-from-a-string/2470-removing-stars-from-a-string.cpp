class Solution {
public:
    string removeStars(string s) {
        string sk;

        for(char c: s)
            if(c=='*')
                sk.pop_back();
            else
                sk.push_back(c);


        return sk;
    }
};