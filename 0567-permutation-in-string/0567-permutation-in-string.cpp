class Solution {

    void printMp(unordered_map<char,int> mp){
        for(auto const& [k,v]: mp){
            cout<<k<<" : "<<v<<endl;
        }
        cout<<endl;
    }

    bool helper(string s, unordered_map<char,int> mp){
//        cout<<"The string is "<<s<<endl;
//        printMp(mp);
        for(char c: s){
            mp[c]--;
            if(mp[c]==0){
                mp.erase(c);
            }
//            printMp(mp);
        }

        return mp.size()==0;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }

        unordered_map<char, int> main;

        for(char c: s1){
            main[c]++;
        }

        for(int i=0; i<s2.size() - s1.size() + 1; i++){
            if(main[s2[i]] > 0){
                if(helper(s2.substr(i,s1.size()), main)){
                    return true;
                }
            } else {
                main.erase(s2[i]);
            }
        }

        return false;
    }
};