#include<bits/stdc++.h>
using namespace std;
vector <bool> Seive(int num){
    vector <bool> seive(num+1,1);
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


vector<bool> segSieve(int L ,int R){
    vector<bool>seudoSive=Seive(sqrt(R));
    vector<int>basePrime;

    //Mark for BasePrime
    for(int i=0;i<seudoSive.size();i++){
        if(seudoSive[i]){
        basePrime.push_back(i);
        }

    }
cout<<endl;

   vector<bool> segsieve(R-L+1,true);
   if(L==0 || L==1)
    segsieve[L]=0;

    for(auto prime :basePrime){
        int firstElement=(L/prime)*prime;
        if(firstElement<L)
        firstElement+=prime;

        int j=max(firstElement,prime*prime);
        while(j<=R){
            segsieve[j-L]=0;
            j+=prime;
        } 
    }
        return segsieve;

}

int main()
{
    int L=100;
    int R=130;
    vector<bool>ans=segSieve(L,R);
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i])
        cout<<i+L<<"  ";
    }
    return 0;
}