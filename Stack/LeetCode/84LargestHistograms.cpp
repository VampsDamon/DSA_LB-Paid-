/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.



Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4

*/

class Solution
{
public:
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
};