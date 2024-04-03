class Solution {
    bool helper(vector<vector<char>>& board, string word, int i, int j, vector<vector<bool>>& visited){
        bool up,left,down,right;
        // base condition
        if(word[0] != board[i][j]){
            return false;
        }
        visited[i][j] = true;
        //cout<<"We found "<<word[0]<<" at "<<i<<","<<j<<"\n";
        if(word.size() == 1){
        //    cout<<"We found the whole string yooooo";
            return true;
        }

        // loop condition
        if(i > 0 && !visited[i-1][j]){      // checking for up
            if(helper(board, word.substr(1,word.size()-1), i-1, j, visited)){
                return true;
            }
        }
        if(j > 0 && !visited[i][j-1]){      // checking for left
            if(helper(board, word.substr(1,word.size()-1), i, j-1, visited)){
                return true;
            }
        }
        if(i < board.size()-1 && !visited[i+1][j]){      // checking for down
            if(helper(board, word.substr(1,word.size()-1), i+1, j, visited)){
                return true;
            }
        }
        if(j < board[0].size()-1 && !visited[i][j+1]){      // checking for right
            if(helper(board, word.substr(1,word.size()-1), i, j+1, visited)){
                return true;
            }
        }
        //cout<<"aww shook, stuck now\n\n";
        visited[i][j] = false;

        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j] == word[0]){
                    if(helper(board, word, i, j, visited)){
                        return true;
                    }
                }
            }
        }

        return false;
    }
};
