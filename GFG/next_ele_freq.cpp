//link:- https://www.geeksforgeeks.org/problems/next-element-with-greater-frequency--170637/1
/*
Next element with greater frequency
Given an array arr[] of integers, for each element, find the closest (distance wise) to its right that has a higher frequency than the current 
element.
If no such element exists, return -1 for that position.

Examples:

Input: arr[] = [2, 1, 1, 3, 2, 1]
Output: [1, -1, -1, 2, 1, -1]
Explanation: Frequencies: 1 → 3 times, 2 → 2 times, 3 → 1 time.
For arr[0] = 2, the next element 1 has a higher frequency → 1.
For arr[1] and arr[2], no element to the right has a higher frequency → -1.
For arr[3] = 3, the next element 2 has a higher frequency → 2.
For arr[4] = 2, the next element 1 has a higher frequency → 1.
For arr[5] = 1, no elements to the right → -1.
Input: arr[] = [5, 1, 5, 6, 6]
Output: [-1, 5, -1, -1, -1]
Explanation: Frequencies: 1 → 1 time, 5 → 2 times, 6 → 2 times.
For arr[0] and arr[2], no element to the right has a higher frequency → -1.
For arr[1] = 1, the next element 5 has a higher frequency → 5.
For arr[3] and arr[4], no element to the right has a higher frequency → -1.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
*/
/*
The findGreater function computes, for each element in the array arr, the next element to the right that has a higher frequency than the current
element. If no such element exists, it returns -1 for that position. This is a variation of the Next Greater Element problem, but instead of
comparing actual values, the function compares frequencies of the elements.

To achieve this, it first constructs a frequency map (freq) using an unordered map, where freq[x] gives the number of times element x appears in
the array. Then, it uses a monotonic stack from right to left to keep track of potential candidates for the "next greater frequency" element.

For each element arr[i], it pops from the stack until it finds an element whose frequency is strictly greater than that of arr[i]. If the stack
is not empty after this, the top of the stack is the desired element, and it is stored in res[i]. The current element is then pushed onto the 
stack for future comparisons.

This ensures a time-efficient solution of O(n), as each element is pushed and popped from the stack at most once. The algorithm is particularly
useful in problems where relative frequency comparisons are needed instead of simple numerical comparisons.


*/
class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        vector<int>res(arr.size(),-1);
        stack<int>st;
         unordered_map<int, int> freq;
        
        for (int num : arr)
        freq[num]++;
    
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st.empty()&&freq[st.top()]<=freq[arr[i]])
            st.pop();
        
            if(!st.empty())
            res[i]=st.top();
            
            st.push(arr[i]);
        }
        return res;
    }
};

/*concept to next greatest wala hi hai but isma hashmap use karke freq nikal li 
hai aur phir usko compare kiya hai while loop ma as understood the core concept.
*/