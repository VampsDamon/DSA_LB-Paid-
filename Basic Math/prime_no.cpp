#include<bits/stdc++.h>
using namespace std;


//Using Nive Approach
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
         return false;
    }
    return true;
}

// Using Sieve of Eruthenes Theorm
vector <bool> Seive(int num){

    vector <bool> seive(1,num+1);
    seive[0]=seive[1]=0;
    for(int i=2;i<sqrt(num);i++){
        int j=i*i;
        while(j<num){
            seive[j]=0;
            j+=i;
        }
    }
    return seive;
}

int main()
{
    int num=25;

    // Method 1
    // for(int i=2;i<=25;i++){
    //     if(isPrime(i))
    //      cout<<i<<"   ";
    // }
    // cout<<endl;
    



// Method 2
    vector<bool>s=Seive(num);
    for(int i=0;i<num;i++){
       if(s[i]==1)
       cout<<i<<"  ";
    }
    return 0;
}




