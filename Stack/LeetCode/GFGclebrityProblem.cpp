// ! GFG The Celebrity Problem
/*
A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
Follow Up: Can you optimize it to O(N)


Example 1:

Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0},
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity.

Example 2:

Input:
N = 2
M[][] = {{0 1},
         {1 0}}
Output: -1
Explanation: The two people at the party both
know each other. None of them is a celebrity.

Your Task:
You don't need to read input or print anything. Complete the function celebrity() which takes the matrix M and its size N as input parameters and returns the index of the celebrity. If no such celebrity is present, return -1.


Expected Time Complexity: O(N^2)
Expected Auxiliary Space: O(1)
*/

// User function template for C++

class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        // code here
        //! Step1 : Push all the people in the stack
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            st.push(i);
        }

        //! Step2 : run Discard method to get a mightBeCleb
        while (st.size() != 1)
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            //! If a knows b then dicard a and push b
            if (M[a][b])
                st.push(b);
            else
                st.push(a);
        }

        // ! Step3 : Now only 1 element is left in the stack it might be cleb or not now chek
        // ! for it

        int mightCleb = st.top();
        st.pop();

        // ! chekc is a know  anyone or not

        for (int i = 0; i < n; i++)
        {
            if (M[mightCleb][i] != 0)
                return -1;
        }
        // ! chekc is a known by   Everyone or not

        for (int i = 0; i < n; i++)
        {
            if (M[i][mightCleb] == 0 && i != mightCleb)
                return -1;
        }

        // Step 4: mightClb is the Cleb
        return mightCleb;
    }
};

