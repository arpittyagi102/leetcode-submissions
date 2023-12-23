class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        unordered_set<string> st;

        st.insert(to_string(x)+','+to_string(y));

        for (int i = 0; i < path.size(); i++) {
            if (path[i] == 'N') {
                y++;
            } else if (path[i] == 'S') {
                y--;
            } else if (path[i] == 'W') {
                x--;
            } else if (path[i] == 'E') {
                x++;
            }
            if (st.find(to_string(x)+','+to_string(y)) != st.end()) {
                return true;
            }
            st.insert(to_string(x)+','+to_string(y));
        }

        return false;
    }
};
