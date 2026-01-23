//LINK:- https://www.naukri.com/code360/problems/bubble-sort_980524?interviewProblemRedirection=true&attempt_status=COMPLETED
/*       Bubble Sort    
Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array 
if they are not in sorted order.

You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in 
non-decreasing order using the Bubble Sort algorithm.

For Example:
Bubble Sort implementation for the given array:  {6,2,8,4,10} is shown below :-

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 1000

Where 'T' represents the number of test cases, 
'N' represents the size of the array, and Arr[i] represents the elements of the array.

Sample Input 1:
1
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10
Sample Input 2:
2
2
1 2
4
4 3 2 1
Sample Output 2:
1 2
1 2 3 4
*/
/*
This implementation follows the standard Bubble Sort logic with a small but important optimization. The outer 
loop represents each pass over the array, and after every pass, the largest unsorted element is guaranteed to 
“bubble up” to its correct position at the end, which is why the inner loop runs only up to n - i. Inside the 
inner loop, adjacent elements are compared and swapped if they are in the wrong order. The boolean flag swapa 
tracks whether any swap occurred during a pass; if no swaps happen, the array is already sorted and the 
algorithm terminates early instead of performing unnecessary passes. This improves the best-case performance to 
O(n), while the average and worst-case time complexity remain O(n²), with constant extra space.
*/
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++)
    {
        bool swapa=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapa=true;
            }
        }
        if(!swapa)
        break;
    }
}