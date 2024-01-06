
/*
! GFG Count the Reverse or Minimum brackets reversal
Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
A reversal means changing '{' to '}' or vice-versa.

Example 1:

Input:
S = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
Example 2:

Input:
S = "{{}{{{}{{}}{{"
Output: -1
Explanation: There's no way we can balance
this sequence of braces.
Your Task:
You don't need to read input or print anything. Your task is to complete the function countRev() which takes the string S as the input parameter and returns the minimum number of reversals required to balance the bracket sequence. If balancing is not possible, return -1.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countRev(string s);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << countRev(s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends

int countRev(string s)
{
    // your code here
    stack<int> st;

    //! Edge casae that is if string length is odd then fefinetly a brackets that have not make any pai so return -1
    if (s.length() % 2 != 0)
        return -1;
    // Check for valid Paren and poped out
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{')
            st.push(s[i]);
        else
        {
            if (st.empty() || st.top() != '{')
                st.push(s[i]);
            else
                st.pop();
        }
    }

    int count = 0;

    //! Remainig invalid parenthesis if {{ count as 1 cause {} 1 reverse
    //! If }{  count as 2 cause both reverse {}
    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        if (st.empty())
            break;
        char b = st.top();
        st.pop();

        if (a == b)
            count += 1;
        else
            count += 2;
    }
    return count;
}