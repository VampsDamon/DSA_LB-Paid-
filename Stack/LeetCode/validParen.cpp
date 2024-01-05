/*
20 Valid Parenthesis
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false


*/

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> paren;
        paren['('] = ')';
        paren['{'] = '}';
        paren['['] = ']';
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                // Push Opening Brackets
                st.push(s[i]);
            }
            else
            { // Closing Brakcts
                if (!st.empty())
                { // It's measns stack is not empty must some opening brakets inserted
                    if (paren[st.top()] == s[i])
                    {
                        // Pair opening barack found thne poped it
                        st.pop();
                    }
                    else
                    {
                        // Pair opening brcks not found so return false
                        return false;
                    }
                }
                else
                {
                    // it means insert closing brckets without inserting opening
                    return false;
                }
            }
        }
        // If stack is empty it means all pairs found so return true else return false
        return st.empty();
    }
};