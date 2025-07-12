/*
907. Sum of Subarray Minimums

Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large,
return the answer modulo 109 + 7.

Input: arr = [3,1,2,4]
Output: 17
Explanation: 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.

Input: arr = [11,81,94,43,3]
Output: 444

Constraints:
1 <= arr.length <= 3 * 104
1 <= arr[i] <= 3 * 104
*/
/*
This C++ solution calculates the sum of minimum elements of all subarrays in a given array using a monotonic stack-based approach. The main 
function sumSubarrayMins calls two helper functions — leftSmaller and rightSmaller — to compute the Next Smaller to Left (NSL) and Next Smaller 
to Right (NSR) indices for each element in the array. These indices determine the boundaries within which each element is the minimum in all 
possible subarrays.

The leftSmaller function returns an array where each index holds the position of the nearest previous element smaller than the current one. If 
no such element exists, it stores -1. This helps determine how far to the left an element can extend as a subarray minimum. Similarly, 
rightSmaller computes for each index the nearest next element smaller than or equal to it; if not found, it stores n (array size). This defines
the right boundary of influence.

Using these boundaries, the sumSubarrayMins function calculates how many subarrays have a given element as their minimum. Specifically, for each
element arr[i], it contributes (i - NSL[i]) * (NSR[i] - i) * arr[i] to the total sum. This is computed under modulo 1e9 + 7 to avoid overflow. 
The total contribution from all elements is then returned as the result.
*/
class Solution {
public:
    vector<int> leftSmaller(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> res(n);
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            res[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return res;
    }

    vector<int> rightSmaller(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> res(n);
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            res[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return res;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        vector<int> NSL = leftSmaller(arr);
        vector<int> NSR = rightSmaller(arr);
        long long m = 0;
        for(int i = 0; i < n; i++){
            long long left = i - NSL[i];
            long long right = NSR[i] - i;
            m = (m + (arr[i] * left % MOD) * right % MOD) % MOD;
        }
        return (int)m;
    }
};