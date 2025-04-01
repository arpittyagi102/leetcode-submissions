class Solution {
    long long helper(vector<vector<int>>& questions, int currentIndex, vector<long long>& memo){
        if(currentIndex >= questions.size()){
            return 0;
        } 
        if(memo[currentIndex] > -1){
            return memo[currentIndex];
        }

        int points = questions[currentIndex][0];
        int brainpower = questions[currentIndex][1];

        long long skip = helper(questions, currentIndex + 1, memo);
        long long solve = helper(questions, currentIndex + brainpower+1, memo) + points;

        memo[currentIndex] = max(skip, solve);
        return memo[currentIndex];
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> memo(questions.size(), -1);

        return helper(questions, 0, memo);
    }
};