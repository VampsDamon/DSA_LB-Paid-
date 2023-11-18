#include<bits/stdc++.h>
using namespace std;
void mazeSolve(int maze[][3],int row,int col,int R,int C,vector<string>&path,string output){
   cout<<"hii"<<endl;
    //Safe Check
    if(R<0 && R>=row && C<0 && C>=col && maze[R][C]==0)
     return;

   //Base Case
   if(R==row-1 && C==col-1){
        //+Path Recived
        path.push_back(output);
        cout<<output<<endl;
        return ;
    }

    maze[R][C]==0;
    mazeSolve(maze,row,col,R+1,C,path,output+"D");
    mazeSolve(maze,row,col,R,C-1,path,output+"L");
    mazeSolve(maze,row,col,R,C+1,path,output+"R");
    mazeSolve(maze,row,col,R-1,C,path,output+"U");
    maze[R][C]==1;

    return;
}

int main()
{
    int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
    int row=3;
    int col=3;
    vector<string>path;
    string output="";
    mazeSolve(maze,row,col,0,0,path,output);

    for(auto p :path){
        cout<<p<<endl;
    }

    return 0;
}