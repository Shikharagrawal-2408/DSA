//link:- https://www.geeksforgeeks.org/problems/smallest-number-on-left3403/1
/*
Smaller on Left
Given an array arr[] of integers, for each element in the array, find the nearest smaller element on its left. If there is no such smaller
element, return -1 for that position.

Input: arr[] = [1, 6, 2]
Output: [-1, 1, 1]
Explaination: 
There is no number to the left of 1, so we return -1. 
After that, the number is 6, and the nearest smaller number on its left is 1. 
Next, the number is 2, and the nearest smaller number on the left is also 1.
Input: arr[] = [1, 5, 0, 3, 4, 5]
Output: [-1, 1, -1, 0, 3, 4]
Explaination: 
There is no number to the left of 1,  so we return -1. 
After that, the number is 5,  and the nearest smaller number on its left is 1. 
 Next, the number is 0, and there is no smaller number on the left, so we return -1.
Then comes 3, and the nearest smaller number on its left is 0.
After that, the number is 4, and the nearest smaller number on the left is 3. 
Finally, the number is 5, and the nearest smaller number on its left is 4
.
Constraints:
1 ≤ arr.size()≤ 106
1 ≤ arr[i] ≤ 103 
*/
/*
The leftSmaller function computes, for each element in the array arr, the Nearest Smaller Element to the Left (NSL). That is, for every arr[i],
it finds the closest smaller element to its left, or returns -1 if no such element exists.

To solve this efficiently in O(n) time, it uses a monotonic increasing stack (st), which maintains a stack of elements in increasing order from
bottom to top. The array res is initialized with -1 assuming that no smaller element exists.

The algorithm processes each element from left to right:
While the top of the stack is greater than or equal to the current element arr[i], it pops elements — since they can’t be the "nearest smaller 
to left".
If the stack is not empty after popping, the top of the stack is the nearest smaller element for arr[i], and is stored in res[i].
Then it pushes the current element onto the stack to be used for the next iterations.

This method ensures that each element is pushed and popped at most once, giving a time-efficient solution for finding left-side smaller elements.


*/
class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        vector<int> res(arr.size(),-1);
        stack<int>st;
        for(int i=0;i<arr.size();i++)
        {
            while(!st.empty()&&arr[i]<=st.top())
            st.pop();
            
            if(!st.empty())
            res[i]=st.top();
            
            st.push(arr[i]);
        }
        return res;
    }
};