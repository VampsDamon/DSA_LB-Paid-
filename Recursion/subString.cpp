#include<bits/stdc++.h>
using namespace std;
void subString(string &str,int i,string output){
    if(i>=str.length()){
        cout<<output<<endl;
        return ;
    }
    //Exclude
    subString(str,i+1,output);
    //Include
    output.push_back(str[i]);
    subString(str,i+1,output);

}
int main()
{
    string str="xyz";
    string output=" ";
    subString(str,0,output);
    return 0;
}