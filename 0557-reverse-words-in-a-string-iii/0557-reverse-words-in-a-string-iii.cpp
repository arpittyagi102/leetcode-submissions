class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        int i = 0;

        while(true){
            i = s.find(' ');
            if(i == string::npos || i == -1){
                break;
            }
            vec.push_back(s.substr(0,i));
            s.erase(0,++i);
        }
            vec.push_back(s.substr(0,i));
            s.erase(0,++i);

        for(int i=0; i<vec.size(); i++){
            reverse(vec[i].begin(),vec[i].end());
        }

        s.clear();

        for(int i=0; i<vec.size(); i++){
            s += vec[i];
            s.push_back(' ');
        }   s.pop_back();

        return s;
    }
};