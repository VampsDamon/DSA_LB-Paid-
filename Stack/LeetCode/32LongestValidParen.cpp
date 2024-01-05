//! 32 Longest Valid Parenthesis
/*
Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses
substring
.



Example 1:

Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
Example 2:

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
Example 3:

Input: s = ""
Output: 0
*/

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st;
        st.push(-1);
        int maxLen = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '('){
       
                st.push(i);
            }
            else
            {
                st.pop();
                if (st.empty())
                {
                    //? Stack empty it's mean -1 is Poped out 
                    //! It show that closing brackets foud without it's opening brackets
                    st.push(i);
                    //! Push index of that closing Barckets cause longest valid paren. bbreaks and now it's start from that closing brackets and we calculate length from that. so we push there index
                }
                else
                {
                    //! It's is use to calculate length
                    int len = i - st.top();
                    maxLen = max(maxLen, len);
                }
            }
        }

        return maxLen;
    }
};