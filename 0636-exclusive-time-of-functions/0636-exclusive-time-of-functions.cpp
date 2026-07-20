class Solution {
    vector<string> split(const string& s) {
        size_t first = s.find(':');
        size_t second = s.find(':', first + 1);

        return {
            s.substr(0, first),
            s.substr(first + 1, second - first - 1),
            s.substr(second + 1)
        };
    }

public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n, 0);
        stack<int> st;
        int prevTime = 0;

        for (const string& log : logs) {
            auto parts = split(log);

            int id = stoi(parts[0]);
            int time = stoi(parts[2]);

            if (parts[1] == "start") {
                if (!st.empty())
                    ans[st.top()] += time - prevTime;

                st.push(id);
                prevTime = time;
            } else {
                ans[st.top()] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1;
            }
        }

        return ans;
    }
};