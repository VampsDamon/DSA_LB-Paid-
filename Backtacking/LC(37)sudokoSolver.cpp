class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int cur_row,int cur_col,int value){
        int n=board.size();
        for(int i=0;i<n;i++){
           //To Check on row side
           if(board[cur_row][i]==value)
             return false;
           //To Check on row side  
           if(board[i][cur_col]==value)
             return false;

            //To Check 3X3 matrix
            if(board[3*(cur_row/3)+(i/3)][3*(cur_col/3)+(i%3)]==value)
             return false; 

        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        int n=board.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.'){
                    for(char value='1';value<='9';value++){
                        if(isSafe(board,i,j,value)){
                           board[i][j]=value;
                           bool nextSolution=solve(board); 
                           if(nextSolution)
                            return true;
                           else{
                               //Backtracking
                               board[i][j]='.';
                           } 
                        }
                    }
                        return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
       solve(board); 
    }
};