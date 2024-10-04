class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int sumOfAllPairs = skill[0] + skill[skill.size()-1];
        long long sumOfProducts = skill[0] * skill[skill.size()-1];

        for(int i=1; i<skill.size()/2; i++){
            if(skill[i]+skill[skill.size()-1-i] != sumOfAllPairs){
                return -1;
            }
            sumOfProducts += skill[i]*skill[skill.size()-1-i];
        }

        return sumOfProducts;
    }
};