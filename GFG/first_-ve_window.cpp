//link:- https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
/*
First negative in every window of size k
Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

Note: If a window does not contain a negative integer, then return 0 for that window.

Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
Output: [-8, 0, -6, -6]
Explanation:
Window [-8, 2] First negative integer is -8.
Window [2, 3] No negative integers, output is 0.
Window [3, -6] First negative integer is -6.
Window [-6, 10] First negative integer is -6.

Input: arr[] = [12, 1, 3, 5] , k = 3
Output: [0, 0] 
Explanation:
Window [12, 1, 3] No negative integers, output is 0.
Window [1, 3, 5] No negative integers, output is 0.

Constraints:
1 <= arr.size() <= 106
-105 <= arr[i] <= 105
1 <= k <= arr.size()
*/
/*
The function firstNegInt is designed to find the first negative integer in every contiguous subarray (window) of size k within a given integer
array arr. The logic uses a queue to keep track of indices of negative numbers in the current window. Initially, the function scans the first k
elements and pushes indices of any negative numbers into the queue. If the queue is not empty, it means there is at least one negative number in 
the window, and the value at the front of the queue (the first negative) is printed. Otherwise, 0 is printed to indicate no negative numbers.

For the rest of the array, it slides the window forward by one element at a time. Before processing a new window, it removes from the queue any
indices that have fallen out of the current window (q.front() <= i - k). It then checks whether the current element is negative and, if so, adds
its index to the queue. Again, if the queue has any entries, the front index corresponds to the first negative number in the current window and 
is printed; otherwise, 0 is printed.

However, since the function is declared to return a vector<int>, the use of cout inside the function is incorrect and should be replaced with 
adding elements to a result vector, which should be returned at the end.
*/
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int>q;
        for(int i=0;i<k;i++)
        {
            if(arr[i]<0)
            q.push(i);
        }
        if (!q.empty())
        cout << arr[q.front()] << " ";
        else
        cout << "0 ";
        
        for (int i = k; i < arr.size(); i++)
        {
            while (!q.empty() && q.front() <= i - k)
            q.pop();
            
            if (arr[i] < 0)
            q.push(i);
            
            if (!q.empty())
            cout << arr[q.front()] << " ";
            else
            cout << "0 ";
        }
    }
};