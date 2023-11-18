/*
Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy all of the following rules:

Each of the digits 1-9 must occur exactly once in each row.
Each of the digits 1-9 must occur exactly once in each column.
Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
The '.' character indicates empty cells.

 

Example 1:


Input: board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
Output: [["5","3","4","6","7","8","9","1","2"],["6","7","2","1","9","5","3","4","8"],["1","9","8","3","4","2","5","6","7"],["8","5","9","7","6","1","4","2","3"],["4","2","6","8","5","3","7","9","1"],["7","1","3","9","2","4","8","5","6"],["9","6","1","5","3","7","2","8","4"],["2","8","7","4","1","9","6","3","5"],["3","4","5","2","8","6","1","7","9"]]
Explanation: The input board is shown above and the only valid solution is shown below:


*/


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