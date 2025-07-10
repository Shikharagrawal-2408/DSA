//link:-https://www.naukri.com/code360/problems/next-greater-element_1112581?leftPanelTabValue=PROBLEM

/*
 Next Smaller Element
You are given an array 'ARR' of integers of length N. Your task is to find the next smaller element for each of the array elements.

Next Smaller Element for an array element is the first element to the right of that element which has a value strictly smaller than that element.

If for any array element the next smaller element does not exist, you should print -1 for that array element.

For Example:

If the given array is [ 2, 3, 1], we need to return [1, 1, -1]. Because for  2, 1 is the Next Smaller element.
For 3, 1 is the Next Smaller element and for 1, there is no next smaller element hence the answer for this element is -1.

Constraints:
1 <= T <= 10
1 <= N <= 10 ^ 5
0 <= ARR [i] <= 10 ^ 9

Sample Input 1:
2
4
2 1 4 3
3
1 3 2
Sample Output 1:
1 -1 3 -1
-1 2 -1
Explanation for Sample Input 1:
For the first test case : 
1) For ARR [1] = 2 ,  the next smaller element is 1. 
2) For ARR [2] = 1 ,  the next smaller element is -1 as no element in the array has value smaller than 1.
3) For ARR [3] = 4 ,  the next smaller element is 3.
4) For ARR [4] = 3 ,  the next smaller element is -1 as no element exists in the right of it.
Hence, we will return the array [ 1, -1, 3, -1] in this case.

For the second test case :
1) For ARR [1] = 1 ,  the next smaller element is -1 as no element in the array has value smaller than 1.
2) For ARR [2] = 3 ,  the next smaller element is 2.
3) For ARR [3] = 2 ,  the next smaller element is -1 as no element exists in the right of it.
Hence we will return the array [ -1, 2, -1 ] in this case.
Sample Input 2:
2
4
1 2 3 4
2
5 0
Sample Output 2:
-1 -1 -1 -1
 0 -1
*/
/*
The nextSmallerElement function computes, for each element in the given array arr, the Next Smaller Element (NSE) to its right. This means for
 every arr[i], it finds the first element to its right that is strictly smaller than arr[i]. If there is no such element, it keeps -1 as the 
 result for that index.

The solution uses a monotonic increasing stack to solve the problem efficiently in O(n) time. It iterates from right to left since we're 
interested in future (right-side) elements. For each element arr[i], it pops from the stack until it finds a smaller element. If the stack is
not empty after popping, the top of the stack is the next smaller element, which gets stored in res[i]. Regardless of whether a smaller element
is found, the current element is then pushed onto the stack to act as a possible NSE for earlier elements.

This approach ensures each element is pushed and popped from the stack at most once, leading to an efficient and clean implementation.
*/
#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int>res(n,-1);

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty()&&arr[i]<=st.top())
        st.pop();

        if(!st.empty())
        res[i]=st.top();

        st.push(arr[i]);
    }
    return res;
}