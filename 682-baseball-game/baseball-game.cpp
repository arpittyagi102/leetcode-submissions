class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        int sumOfScores = 0;

        for(string operation: operations){
            if(operation == "+"){
                scores.push_back(scores[scores.size()-1] + scores[scores.size()-2]);
            } else if(operation == "D"){
                scores.push_back(2 * scores[scores.size()-1]);
            } else if(operation == "C"){
                scores.pop_back();
            } else {
                scores.push_back(stoi(operation));
            }
        }

        for(int score: scores){
            sumOfScores += score;
        }

        return sumOfScores;
    }
};