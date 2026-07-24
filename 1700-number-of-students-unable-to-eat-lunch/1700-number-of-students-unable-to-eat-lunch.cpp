class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sk;
        queue<int> q;

        for(int student : students)
            q.push(student);

        for(int i=sandwiches.size()-1; i>=0; i--)
            sk.push(sandwiches[i]);

        int size = q.size();
        
        while(!sk.empty()) {
            if(sk.top() == q.front()) {
                sk.pop();
                q.pop();
                size = q.size();
            }
            else {
                if(size == 0) {
                    return q.size();
                }

                int front = q.front();
                q.pop();
                q.push(front);
                size--;
            }
        }

        return q.size();
    }
};