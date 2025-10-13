class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        int balloons = INT_MAX;

        for(char c: text){
            freq[c]++;
        }

        balloons = min(balloons, freq['b']);
        balloons = min(balloons, freq['a']);
        balloons = min(balloons, freq['l']/2);
        balloons = min(balloons, freq['o']/2);
        balloons = min(balloons, freq['n']);

        return balloons;
    }
};