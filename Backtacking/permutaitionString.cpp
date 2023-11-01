#include<bits/stdc++.h>
using namespace std;
void printPermutation(string &str,int i){
    if(i>=str.length()){
        cout<<str<<"    ";
        return;
    }

    for(int j=i;j<str.length();j++){

        //Swap 
        swap(str[i],str[j]);
        //Recursive call
        printPermutation(str,i+1);
        //Backtracking to recreate original string
        swap(str[i],str[j]);
    }
}
int main()
{
    int i=0;
    string str="abc";
    printPermutation(str,i);
    return 0;
}