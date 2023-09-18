class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<int> newvec;

        if(numRows > 0){
            temp.push_back(1);
            res.push_back(temp);
            temp.clear();   
        }
        
        if(numRows > 1){
            temp.push_back(1);
            temp.push_back(1);
            res.push_back(temp);
        }

        for(int i=0; i<numRows-2; i++){
            newvec.push_back(1);
            for(int i=0; i<temp.size()-1; i++){
                newvec.push_back(temp[i] + temp[i+1]);
            }
            newvec.push_back(1);
            temp = newvec;
            newvec.clear();
            res.push_back(temp);
        }

        return res;
    }
};