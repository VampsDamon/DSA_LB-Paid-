#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int matrix[3][3]={
        {1,2,3},
        {5,6,7},
        {9,10,11}
    };
    for(int j=0;j<3;j++)
    {
        if(j%2==0)
        {
        for(int i=0;i<3;i++)
        cout<<matrix[i][j]<<" ";

        }
        else{
        for(int i=2;i>=0;i--)
        cout<<matrix[i][j]<<" ";    
        }
        
    }
    
    return 0;
}