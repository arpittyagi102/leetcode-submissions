class Solution {
public:
    vector<int> minOperations(string boxes) {
        unordered_set<int> filledBoxesPositions;
        vector<int> ans(boxes.size());

        for(int i=0; i<boxes.size(); i++){
            if(boxes[i] == '1'){
                filledBoxesPositions.insert(i);
            }
        }

        for(int i=0; i<boxes.size(); i++){
            int diff = 0;

            for(int pos: filledBoxesPositions){
                diff += pos > i ? pos-i : i-pos;
            }
            
            ans[i] = diff;
        }

        return ans;
    }
};