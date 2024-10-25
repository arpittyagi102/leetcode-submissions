class Solution {
    string removeLastFolder(string& str){
        while(str[str.size()-1] != '/'){
            str.pop_back();
        }
        str.pop_back();

        return str;
    }
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> st{folder.begin(),folder.end()};
        vector<string> listToRemove;

        for(const auto& str : st){
            string temp = str;
            removeLastFolder(temp);

            while(temp.size() > 1){
                if(st.count(temp) > 0){
                    listToRemove.push_back(str);
                    break;
                }

                removeLastFolder(temp);
            }
        }

        for(string str: listToRemove){
            st.erase(str);
        }

        return {st.begin(), st.end()};
    }
};