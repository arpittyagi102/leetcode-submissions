class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> mapA(n+1,0);
        vector<int> mapB(n+1,0);
        vector<int> C(n);
        int count = 0;

        for(int i=0; i<n; i++) {
            mapA[A[i]]++;
            mapB[B[i]]++;

            if(A[i] == B[i]) {
                count++;
            } else {
                if(mapA[B[i]])
                    count++;
                if(mapB[A[i]])
                    count++;
            }

            C[i] = count;
        }

        return C;
    }
};