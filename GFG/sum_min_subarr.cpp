//link:- https://www.geeksforgeeks.org/problems/sum-of-subarray-minimum/1
/*
Sum of subarray minimum
Given an array arr[] of positive integers, find the total sum of the minimum elements of every possible subarrays.

Input: arr[] = [3, 1, 2, 4]
Output: 17
Explanation: Subarrays are [3], [1], [2], [4], [3, 1], [1, 2], [2, 4], [3, 1, 2], [1, 2, 4], [3, 1, 2, 4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1. Sum of all these is 17.
Input: arr[] = [71, 55, 82, 55]
Output: 593
Explanation: The sum of the minimum of all the subarrays is 593.
Constraints:
1 ≤ arr.size() ≤ 3*104
1 ≤ arr[i] ≤ 103
*/
/*
This class Solution implements a method sumSubMins that computes the sum of the minimum values of all subarrays of a given array arr, modulo 
10^9+7. The main idea is to use monotonic stacks to efficiently compute, for each element in the array, the number of subarrays in which it is 
the minimum element.

The leftSmaller() function calculates the Nearest Smaller to Left (NSL) for each element. For each index i, it returns the index of the closest
smaller element to the left (or -1 if there is none). It uses a stack to keep track of indices and maintains a monotonic increasing stack from 
left to right.

Similarly, rightSmaller() calculates the Nearest Smaller to Right (NSR) for each element. For each index i, it returns the index of the closest 
smaller element to the right (or n if there is none). This function also uses a monotonic increasing stack, but scans from right to left.

Using NSL and NSR, the main function sumSubMins() calculates how many subarrays each element is the minimum in. For each index i, the number of
such subarrays is:(i - NSL[i]) * (NSR[i] - i)
Each of these subarrays contributes arr[i] to the total, so the total contribution of arr[i] is: arr[i] * (i - NSL[i]) * (NSR[i] - i)
The code adds this contribution to a running total m, applying modulo 10^9+7 to avoid overflow.
In the end, it returns the total sum of minimums for all subarrays.
*/

class Solution {
  public:
vector<int> leftSmaller(vector<int> arr) {
        // code here
        stack<int> st;
        int n = arr.size();
        vector<int> res(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                res[i] = st.top();
            } else {
                res[i] = -1;
            }
            st.push(i);
        }
        return res;
    }
    vector<int> rightSmaller(vector<int> arr) {
        // code here
        stack<int> st;
        int n = arr.size();
        vector<int> res(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty()){
                res[i] = st.top();
            } else {
                res[i] = n;
            }
            st.push(i);
        }
        return res;
    }
    int sumSubMins(vector<int> &arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        vector<int> NSL = leftSmaller(arr);
        vector<int> NSR = rightSmaller(arr);
        long long m = 0;
        for(int i = 0; i < n; i++){
            long long left = i - NSL[i];
            long long right = NSR[i] - i;
            m += ((1LL * arr[i] * left) * right) % MOD;
        }
        return (int)m;
    }
};