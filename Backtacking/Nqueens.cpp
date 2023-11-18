#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<char>> &board,int n){
    // cout<<"Printing : "<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<"  ";
        }
        cout<<endl;
        
    }
    cout<<endl<<endl;
    
}

bool isSafe(vector<vector<char>> &board,int n,int row,int col){

    int i=row;
    int j=col;


    while(j>=0){
        if(board[i][j]=='Q')
         return false;
        j--; 
    }
    
    i=row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q')
         return false;
        i--;
        j--; 
    }


    i=row;
    j=col;
    while(j>=0 && i<n){
        if(board[i][j]=='Q')
         return false;
        i++;
        j--; 
    }

    return true;
}

void solve(vector<vector<char>> &board,int n,int col){
    // !Base Case
    if(col>=n){
        // cout<<"working"<<endl;
        print(board,n);
        return ;
    } 

    for(int row=0;row<n;row++){
      //Check is it safe to placed or not 
        if(isSafe(board,n,row,col)){
        //Mark col with 1 where queen placed    
        board[row][col]='Q';
        //Recursive solution
        solve(board,n,col+1);
        //Backtracking  
        board[row][col]='_';
        }
    }

}
int main()
{
    int n=5;
    int col=0;
    vector<vector<char>> board(n,vector<char>(n,'_'));
    cout<<endl<<endl;
   // print(board,n);
    solve(board,n,col);
    
    return 0;
}