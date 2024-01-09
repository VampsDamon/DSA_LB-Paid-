/*

! 85. Maximal Rectangle
Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.



Example 1:


Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.
Example 2:

Input: matrix = [["0"]]
Output: 0
Example 3:

Input: matrix = [["1"]]
Output: 1


Constraints:

rows == matrix.length
cols == matrix[i].length
1 <= row, cols <= 200
matrix[i][j] is '0' or '1'.
*/

class Solution
{
    vector<int> prevSmallest(vector<int> &heights)
    {
        vector<int> ans(heights.size());
        stack<int> st;
        st.push(-1);
        for (int i = 0; i < heights.size(); i++)
        {
            while (st.top() != -1 && heights[i] <= heights[st.top()])
                st.pop();
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }
    vector<int> nextSmallest(vector<int> &heights)
    {
        vector<int> ans(heights.size());
        stack<int> st;
        st.push(-1);
        for (int i = heights.size() - 1; i >= 0; i--)
        {
            while (st.top() != -1 && heights[i] <= heights[st.top()])
                st.pop();
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }
    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> next = nextSmallest(heights);
        vector<int> prev = prevSmallest(heights);

        int maxArea = INT_MIN;
        for (int i = 0; i < heights.size(); i++)
        {
            int len = heights[i];
            if (next[i] == -1)
                next[i] = heights.size();
            int width = next[i] - prev[i] - 1;

            int area = len * width;

            maxArea = max(area, maxArea);
        }
        return maxArea;
    }

public:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        vector<vector<int>> v;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++)
        {
            vector<int> t;
            for (int j = 0; j < m; j++)
            {
                t.push_back(matrix[i][j] - '0');
            }
            v.push_back(t);
        }
        int area = largestRectangleArea(v[0]);
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j])
                    v[i][j] += v[i - 1][j];
                else
                    v[i][j] = 0;
            }
            area = max(area, largestRectangleArea(v[i]));
        }
        return area;
    }
};