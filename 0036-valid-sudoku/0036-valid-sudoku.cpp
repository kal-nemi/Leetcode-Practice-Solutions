class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                string number(1,board[i][j]);                            
                if(board[i][j] != '.'){
                    string row = number+"_R_"+to_string(i);
                    string col = number+"_C_"+to_string(j);
                    string box = number+"_B_"+to_string(i/3)+"_"+to_string(j/3);

                    if(seen.find(row)!=seen.end() || seen.find(col)!=seen.end() ||seen.find(box)!=seen.end()){
                        return false;
                    }
                    else{
                        seen.insert(row);
                        seen.insert(col);
                        seen.insert(box);
                    }
                }
            }
        }
        return true;
        
    }
};