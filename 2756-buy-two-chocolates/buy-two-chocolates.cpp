class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int first=INT_MAX;
        int second = INT_MAX;

        for(int i : prices){
            if(i < first){
                second = first;
                first = i;
            }
            else if(i < second){
                second = i;
            }
        }

        int left = money - first - second;
        if(left >= 0){
            return left;
        }
        else 
            return money;
    }
};