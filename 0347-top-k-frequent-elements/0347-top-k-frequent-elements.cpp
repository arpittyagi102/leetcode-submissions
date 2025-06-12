class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Frequency Map : num => (frequency of num)
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }

        // Reverse Frequency Map : (frequency) => [num, num1, num2] 
        vector<vector<int>> reverseFreq(nums.size()+1);
        for(const auto& [key, value] : freq){
            reverseFreq[value].push_back(key);
        }

        // Top K frequent Elements
        vector<int> ans;

        // iterate reversely putting the highest freq elements in ans untill its full with k
        for(int i=reverseFreq.size()-1; i>=0; i--){
            if(ans.size() >= k){
                break;
            }

            for (int j = 0; j < reverseFreq[i].size(); ++j) {
                ans.push_back(reverseFreq[i][j]);
            }
        }

        return ans;
    }
};