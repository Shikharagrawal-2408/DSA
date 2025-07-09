/*
Balanced and Unique Arrays
For a positive, even integer N, we call a pair of arrays A and B to be interesting if they satisfy the following conditions :
∣A∣=∣B∣=N/2 i.e. the length of array A is equal to the length of array B.
Each integer from 1 to N occurs exactly once in exactly one of the arrays.
The ith prefix sum of A is not equal to ith prefix sum of B for all 1≤i≤N/2−1.
Sum of all elements in A is equal to sum of all elements in B

You are given a positive, even integer N. If there exists an interesting pair of arrays, then print "YES" followed by an interesting pair for this 
given N. If there exists multiple interesting pairs of arrays for given N, you can print any. Print "NO" in a single line if no such pair exists.

Input Format
First line of input will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, the integer N.

Output Format
For each test case, if there exists an interesting pair of arrays, say (A,B), then in the first line print "YES", in the second line print array
A separated by spaces, and in third line print array B separated by spaces. Print "NO" in a single line if no such pair exists. If there are
multiple answers, print any of them.

Constraints
1≤T≤10 
1≤N≤10 
N is guaranteed to be even.
Sum of N over all test cases doesn't exceed 10^6

Input
2
2
4

Output
NO
YES
1 4
2 3

Test case 2: Consider 
A=[1,4] and B=[2,3]. Every integer from 1 to 4 occurs exactly once in exactly one of the arrays. Also, 1st prefix sum of A is not equal to 1st
prefix sum of B(1≠2). And sum of the elements is equal to 5 for both arrays. So, (A,B) is an interesting pair.
*/
/*
This program processes multiple test cases to find the maximum sum of elements along any diagonal (from top-left to bottom-right) in a square 
matrix.

For each test case: The program reads an integer n, which is the size of the n × n matrix.
It then reads the matrix elements into a 2D array arr[n][n].

To find the maximum diagonal sum, it performs the following:
It iterates through each cell (i, j) in the matrix as a potential starting point of a diagonal.
From each (i, j), it follows the diagonal by increasing both row (i + l) and column (j + l) indices simultaneously, while staying within bounds.

As it traverses the diagonal, it accumulates the sum (sec) and compares it to the current maximum (maxa), updating maxa whenever a higher sum is
found. Once all diagonals have been considered, it prints the highest diagonal sum found.
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
	    
	    if(n%4!=0)
	    cout<<"No\n";
            
	    else
	    {
	        cout<<"YES\n";
	        for(int i=1;i<=n/4;i++)
	        cout<<i<<" ";

	        for(int i=3*n/4+1;i<=n;i++)
	        cout<<i<<"\n";

	        for(int i=n/4+1;i<=3*n/4;i++)
	        cout<<i<<" ";
	    }
	}
}