#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 22, 11, 30, 12};
    vector<int> nextSmall(arr.size());
    stack<int> st;

    st.push(-1);

    for (int i =0; i<arr.size() ;i++)
    {
        while (arr[i] <= st.top())
            st.pop();

        nextSmall[i] = st.top();
        st.push(arr[i]);
    }

    for (int i = 0; i < nextSmall.size(); i++)
    {
        cout << nextSmall[i] << "  ";
    }
    cout << endl;

    return 0;
}