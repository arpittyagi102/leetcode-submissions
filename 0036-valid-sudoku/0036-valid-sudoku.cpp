class Solution {
public:
    bool isValidSudokuLine(vector<char>& line){
        unordered_map<char,int> mp;
        cout<<"We are checking a Line\n";

        for(int i=0; i<line.size(); i++){
            cout<<"\tThe charactor we got is : "<<line[i]<<endl;
            if(line[i]=='.'){
                cout<<"\tAs it is a dot we will continue\n";
                continue;
            }
            else if(line[i]>'9' || line[i]<'1' || mp.count(line[i])){
                cout<<"\tThis is a Invalid Number\n";
                return false;
            }
            mp[line[i]] = i;
            cout<<"\tThis is a valid number, added to map\n";
        }

        /*for(auto i : mp){
            cout<<i.first<<" "<<i.second<<endl;
        }*/
        
        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> vec;
        int a=0, b=0;

        for(auto line : board){
            for(auto i : line){
                cout<<i<<" ";
            }
            if(isValidSudokuLine(line)){
                cout<<" true\n";
            }
            else{
                cout<<" false\n";
                return false;
            }
        }

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board.size(); j++){
                vec.push_back(board[j][i]);
            }
            if(isValidSudokuLine(vec)){
                cout<<"T ";
            }
            else{
                cout<<"F ";
                return false;
            }
            vec.clear();
        }
        cout<<"\n\nttttttttttttttttttttttttttt\n\n";

        for(int a=0; a<7; a+=3){
            for(int b=0; b<7; b+=3){
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        vec.push_back(board[a+i][b+j]);
                    }
                }
                if(isValidSudokuLine(vec)){
                    cout<<"T ";
                }
                else{
                    cout<<"F ";
                    return false;
                }
                vec.clear();
            }
        }            
        return true;
    }
};