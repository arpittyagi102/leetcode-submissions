class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> mapA;
        unordered_map<int, int> mapB;
        int count = 0;
        vector<int> C(A.size());

        for(int i=0; i<A.size(); i++) {
            mapA[A[i]]++;
            mapB[B[i]]++;

            if(A[i] == B[i]) {
                count++;
            } else {
                if(mapA.find(B[i]) != mapA.end()) {
                    mapA[B[i]]--;
                    count++;
                }
                if(mapB.find(A[i]) != mapB.end()) {
                    mapB[A[i]]--;
                    count++;
                }
            }

            C[i] = count;
        }

        return C;
    }
};