/*
Pseudo Sorted Array
An array A of length N is said to be pseudo-sorted if it can be made non-decreasing after performing the following operation at most once.

Choose an i such that 1≤i≤N−1 and swap Ai and Ai+1.
 
Given an array A, determine if it is pseudo-sorted or not.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers 

Output Format
For each testcase, output YES if the array A is pseudo-sorted, NO otherwise.

Constraints
1≤T≤1000
2≤N≤10 

Input
3
5
3 5 7 8 9
4
1 3 2 3
3
3 2 1

Output
YES
YES
NO

Test case 1: The array is already sorted in non-decreasing order.
Test case 2: We can choose i=2 and swap A2 and A3. The resulting array will be [1,2,3,3], which is sorted in non-decreasing order.
Test case 3: It can be proven that the array cannot be sorted in non-decreasing order in at most one operation.
*/
/*
This program checks whether a given array of integers can be sorted by performing at most one adjacent swap. For each test case, it reads the
size of the array n and then reads the n elements into the array arr.

The core idea is to simulate a single pass of adjacent comparisons, similar to one round of bubble sort:
The program goes through the array from left to right and swaps any two adjacent elements where the left one is greater than the right.

It keeps a count of how many such swaps were performed.
After this pass, it checks whether the resulting array is sorted:
If the array is fully sorted and at most one swap was performed (count <= 1), it prints "Yes" (i.e., the array can be sorted with one or zero 
adjacent swaps).
Otherwise, it prints "No".
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int temp,count=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	        {
	            temp=arr[i];
	            arr[i]=arr[i+1];
	            arr[i+1]=temp;
	            count++;
	        }
	    }
	    
	    bool sort=true;
	    for(int i=0;i<n-1;++i)
	    {
	        if(arr[i]>arr[i+1])
	        {
	            sort=false;
	            break;
	        }
	    }
	    if(count<=1 && sort)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
return 0;
}