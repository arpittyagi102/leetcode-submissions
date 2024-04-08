class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circle = 0;
        int square = 0;
        int remaining = students.size();

        for(int st: students){
            if(st==0)
                circle++;
            else
                square++;
        }

        for(int sa: sandwiches){
            if(sa == 0){
                if(circle > 0){
                    circle--;
                } else {
                    return square;
                }
            }
            if(sa == 1){
                if(square > 0){
                    square--;
                } else {
                    return circle;
                }
            }
        }

        return circle;
    }
};