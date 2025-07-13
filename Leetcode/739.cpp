/*
739. Daily Temperatures
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you 
have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]

Input: temperatures = [30,60,90]
Output: [1,1,0]
 
Constraints:
1 <= temperatures.length <= 105
30 <= temperatures[i] <= 100
*/
/*
The goal of the program is to find, for each day, how many days one has to wait until a warmer temperature occurs. To do this efficiently, the 
algorithm processes the input temperature list in reverse (from the last day to the first) using a stack to keep track of indices of future days
with warmer temperatures. For each day, it compares the current temperature with the temperature at the top of the stack. If the stack’s top 
represents a day with a temperature less than or equal to the current day’s temperature, that day is no longer useful, so it gets popped off the
stack. This continues until a warmer day is found or the stack becomes empty. If a warmer future day is found, the difference between their 
indices is stored in the result array. Finally, the current day is pushed onto the stack for future comparisons. This method ensures that each 
temperature is pushed and popped from the stack at most once, leading to an efficient O(n) solution.
*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size(),0);
        stack<int>st;

        for(int i=temp.size()-1;i>=0;i--)
        {
            while(!st.empty()&& temp[i]>=temp[st.top()])
            st.pop();

            if(!st.empty())
            ans[i]=st.top()-i;

            st.push(i);
        }
        return ans;
    }
};