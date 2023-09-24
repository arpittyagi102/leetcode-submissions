class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> myset;

        for(string i : emails){
            string j = i.substr(i.find('@'));
            i = i.substr(0,i.find('@'));
            while(i.find('.') != string::npos){
                i.erase(i.find('.'),1);
            }

            if(i.find('+') != string::npos){
                i.erase(i.find('+'));
            }

            myset.insert(i+j);
        }

        return myset.size();
    }
};