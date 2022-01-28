class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(10,0));
        vector<vector<int>> col(9, vector<int>(10,0));
        vector<vector<int>> grid(9, vector<int>(10,0));
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                else{
                    
                    int val = board[i][j] - '0';
                    
                    // marking row values
                    if(row[i][val] == 1) return false;
                    else row[i][val] = 1;
                    
                    // marking column
                    if(col[j][val] == 1) return false;
                    else col[j][val] = 1;
                    
                    // marking grid
                    if(grid[i/3 + (j/3)*3][val] == 1) return false;
                    else grid[i/3 + (j/3)*3][val] = 1;
                }
            }
        }
        
        return true;
    }

};