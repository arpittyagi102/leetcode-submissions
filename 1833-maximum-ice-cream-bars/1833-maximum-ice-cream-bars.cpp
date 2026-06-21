class Solution {
    vector<int> countingSort(vector<int>& arr) {
        vector<int> sorted(arr.size());
        map<int,int> freq;

        for(int i=0; i<arr.size(); i++)
            freq[arr[i]]++;

        int i=0;
        for(const auto& [num, f] : freq) {
            for(int j=0; j<f; j++) {
                sorted[i] = num;
                i++;
            }
        }

        return sorted;
    }
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum = 0;

        costs = countingSort(costs);

        for(int i=0; i<costs.size(); i++) {
            sum += costs[i];

            if(coins < sum) {
                return i;
            }
        }

        return costs.size();
    }
};