#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,4,1,3,1,6};
    vector<int>nextGreatest(arr.size());
    stack<int>st2;
    st2.push(-1);
    for(int i=arr.size()-1;i>=0;i--){
        
        while(arr[i]>=st2.top() && st2.top()!=-1)
         st2.pop();

        nextGreatest[i]=st2.top();
        st2.push(arr[i]);
    }

    for (int i = 0; i < nextGreatest.size(); i++)
    {
        cout << nextGreatest[i] << "  ";
    }
    cout << endl;

    return 0;

}