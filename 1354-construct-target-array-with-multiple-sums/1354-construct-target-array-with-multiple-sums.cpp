class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> heap;
        long long sum = 0;

        for (int t : target) {
            sum += t;
            heap.push(t);
        }

        while (!heap.empty()) {
            int top = heap.top();
            heap.pop();

            if (top == 1) return true;

            long long restSum = sum - top;

            if (restSum == 1) return true;

            if (top <= restSum || restSum == 0) return false;

            int newTop = top % restSum;
            if (newTop == 0) newTop = restSum;

            heap.push(newTop);
            sum = restSum + newTop;
        }

        return true;
    }
};