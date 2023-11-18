#include<bits/stdc++.h>
using namespace std;


bool isSafe(vector<vector<bool>>& visited,int maze[][3],int row,int col,int R,int C){
     if((
    (R<row && R>=0) && (C<col  && C>=0)) &&
     (maze[R][C]==1) && 
     (!visited[R][C])){
        return true;
     }
     else
     return false;
}
void mazeSolve(int maze[][3],int row,int col,int R,int C,vector<string>&path,string output,vector<vector<bool>>& visited){
    //!Base Case 
    if(R==row-1 && C==col-1){
        //+Path Recived
        path.push_back(output);
        return ;
    }

    //-Move Down   R+1,C
    if(isSafe(visited,maze,row,col,R+1,C)){
        visited[R+1][C]=true;
       
        mazeSolve(maze,row,col,R+1,C,path, output+"D",visited);
        visited[R+1][C]=false;
    }


    //-Move Left   R,C-1

    if(isSafe(visited,maze,row,col,R,C-1)){
        visited[R][C-1]=true;
        
        mazeSolve(maze,row,col,R,C-1,path,output+"L",visited);
        visited[R][C-1]=false;
    }

    //-Move Right  R,C+1

    if(isSafe(visited,maze,row,col,R,C+1)){
        visited[R][C+1]=true;
        
        mazeSolve(maze,row,col,R,C+1,path,output+"R",visited);
        visited[R][C+1]=false;
    }

    //-Move Up     R-1,C

    if(isSafe(visited,maze,row,col,R-1,C)){
        visited[R-1][C]=true;
        mazeSolve(maze,row,col,R-1,C,path, output+"U",visited);
        visited[R-1][C]=false;
    }

}

int main()
{
    int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
    int row=3;
    int col=3;
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    visited[0][0]=true;
    vector<string>path;
    string output="";
    mazeSolve(maze,row,col,0,0,path,output,visited);

    for(auto p :path){
        cout<<p<<endl;
    }

    return 0;
}