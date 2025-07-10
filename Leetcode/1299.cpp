/*
1299. Replace Elements with Greatest Element on Right Side
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element
with -1.

After doing so, return the array.

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
Explanation: 
- index 0 --> the greatest element to the right of index 0 is index 1 (18).
- index 1 --> the greatest element to the right of index 1 is index 4 (6).
- index 2 --> the greatest element to the right of index 2 is index 4 (6).
- index 3 --> the greatest element to the right of index 3 is index 4 (6).
- index 4 --> the greatest element to the right of index 4 is index 5 (1).
- index 5 --> there are no elements to the right of index 5, so we put -1.

Input: arr = [400]
Output: [-1]
Explanation: There are no elements to the right of index 0.
 
Constraints:

1 <= arr.length <= 104
1 <= arr[i] <= 105
*/
/*
The replaceElements function replaces each element in the input array arr with the greatest element among the elements to its right, and the
last element is replaced with -1 as there is no element to its right. This is efficiently done using a right-to-left traversal of the array.

The algorithm maintains a variable maxa, initialized to -1, to keep track of the maximum value seen so far to the right of the current element.
Starting from the last element and moving backward, for each index i, it stores the current value temporarily in curr, updates arr[i] with the 
current maxa (i.e., the best seen so far to the right), and then updates maxa with the maximum of maxa and curr. This ensures that every element
is updated correctly with the maximum of all elements to its right in a single pass through the array.

This approach runs in O(n) time and uses O(1) extra space (in-place), making it optimal and elegant.
*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxa=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            int curr=arr[i];
            arr[i]=maxa;
            maxa=max(maxa,curr);
        }
        return arr;
    }
};