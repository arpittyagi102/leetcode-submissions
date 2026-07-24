class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sk;
        int q[2] = {0, 0};

        for(int student : students)
            q[student]++;
        
        for (int s : sandwiches)
            if (q[s] == 0)
                break;
            else 
                q[s]--;

        return q[0] + q[1];
    }
};