class Solution {
    void printHeap(priority_queue<int> heap) {
        while(!heap.empty()) {
            cout<<heap.top()<<" ";
            heap.pop();
        }
        cout<<endl;
    }
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap(stones.begin(), stones.end());

        while(heap.size() > 1) {
            int s1 = heap.top();
            heap.pop();
            int s2 = heap.top();
            heap.pop();

            int s3 = s1 - s2;
            if(s3) {
                heap.push(s3);
            }
            printHeap(heap);
        }

        return heap.empty() ? 0 : heap.top();
    }
};