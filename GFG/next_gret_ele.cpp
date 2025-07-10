//link:- https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
/*
Next Greater Element
Given an array arr[ ] of integers, the task is to find the next greater element for each element of the array in order of their appearance in 
the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the 
last element is always -1.

Examples

Input: arr[] = [1, 3, 2, 4]
Output: [3, 4, 4, -1]
Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4, since it doesn't exist, it is -1.
Input: arr[] = [6, 8, 0, 1, 3]
Output: [8, -1, 1, 3, -1]
Explanation: The next larger element to 6 is 8, for 8 there is no larger elements hence it is -1, for 0 it is 1 , for 1 it is 3 and then
for 3 there is no larger element on right and hence -1.

Input: arr[] = [10, 20, 30, 50]
Output: [20, 30, 50, -1]
Explanation: For a sorted array, the next element is next greater element also except for the last element.

Input: arr[] = [50, 40, 30, 10]
Output: [-1, -1, -1, -1]
Explanation: There is no greater element for any of the elements in the array, so all are -1.
Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 109
*/
/*
This function nextLargerElement returns a vector containing the Next Greater Element (NGE) for every element in the given array. For each 
element arr[i], it finds the first element to its right that is greater than it. If no such element exists, the value -1 is used.

The approach uses a monotonic stack to efficiently compute the answer in O(n) time:
The stack stores potential "next greater elements" while iterating from the end to the beginning of the array.
For each element arr[i], the algorithm pops elements from the stack until a greater element is found or the stack becomes empty.
If the stack is not empty after popping, the top of the stack is the next greater element for arr[i], and it's stored in res[i].
Finally, the current element arr[i] is pushed onto the stack as a potential "next greater" for earlier elements.

This strategy ensures that each element is pushed and popped at most once, resulting in linear time complexity. It's a classic problem solved
using monotonic decreasing stacks.
*/
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> res(arr.size(),-1);
        stack<int>st;
        
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st.empty()&&arr[i]>=st.top())
            st.pop();
            
            if(!st.empty())
            res[i]=st.top();
            
            st.push(arr[i]);
        }
        return res;
    }
};