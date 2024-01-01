class Solution {
public:
    bool isValidSudokuLine(vector<char>& line){
        unordered_map<char,int> mp;

        for(int i=0; i<line.size(); i++){
            if(line[i]=='.'){
                continue;
            }
            else if(line[i]>'9' || line[i]<'1' || mp.count(line[i])){
                return false;
            }
            mp[line[i]] = i;
        }
        
        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> vec;
        int a=0, b=0;

        for(auto line : board){
            if(!isValidSudokuLine(line)){
                return false;
            }
        }

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board.size(); j++){
                vec.push_back(board[j][i]);
            }
            if(!isValidSudokuLine(vec)){
                return false;
            }
            vec.clear();
        }

        for(int a=0; a<7; a+=3){
            for(int b=0; b<7; b+=3){
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        vec.push_back(board[a+i][b+j]);
                    }
                }
                if(!isValidSudokuLine(vec)){
                    return false;
                }
                vec.clear();
            }
        }            
        return true;
    }
};