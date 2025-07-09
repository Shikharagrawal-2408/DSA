/*
Trace of Matrix
Chef is learning linear algebra. Recently, he learnt that for a square matrix M, trace(M) is defined as the sum of all elements on the main 
diagonal of M (an element lies on the main diagonal if its row index and column index are equal).

Now, Chef wants to solve some excercises related to this new quantity, so he wrote down a square matrix A with size N×N. A square submatrix of A
with size 
l×l is a contiguous block of l×l elements of A. Formally, if B is a submatrix of A with size l×l, then there must be integers 
r and c (1≤r,c≤N+1−l) such that 
Bi,j=A r+i−1,c+j−1 for each 1≤i,j≤l.

Help Chef find the maximum trace of a square submatrix of A.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
N lines follow. For each i (1≤i≤N), the i-th of these lines contains N space-separated integers A1,A2....An. denoting the i-th row of the matrix A.

Output
For each test case, print a single line containing one integer — the maximum possible trace.

Constraints
1≤T≤100
2≤N≤100

Input
1
3
1 2 5
6 3 4
2 7 1

Output
13
Example case 1: The submatrix with the largest trace is
6 3
2 7
which has trace equal to 6+7=13. (This submatrix is obtained for r=2,c=1,l=2.)
*/
/*
This program processes multiple test cases to find the maximum sum of elements along any diagonal (from top-left to bottom-right) in a square matrix.

For each test case:

The program reads an integer n, which is the size of the n × n matrix.

It then reads the matrix elements into a 2D array arr[n][n].

To find the maximum diagonal sum, it performs the following:

It iterates through each cell (i, j) in the matrix as a potential starting point of a diagonal.

From each (i, j), it follows the diagonal by increasing both row (i + l) and column (j + l) indices simultaneously, while staying within bounds.

As it traverses the diagonal, it accumulates the sum (sec) and compares it to the current maximum (maxa), updating maxa whenever a higher sum is found.

Once all diagonals have been considered, it prints the highest diagonal sum found.

This type of approach is useful in matrix-related problems involving pattern recognition or optimization, especially in image processing, board games, or DP-based grid traversals.
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
	    
	    int arr[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        cin>>arr[i][j];
	    }
	    int maxa=0;;
	    for(int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            int sec=0;
	            for (int l = 0; i + l < n && j + l < n; l++)
	            {
                    sec += arr[i + l][j + l];
                    if(sec>maxa)
                    maxa=sec;
                }
            }
        }
	    cout<<maxa<<endl;
	}
}