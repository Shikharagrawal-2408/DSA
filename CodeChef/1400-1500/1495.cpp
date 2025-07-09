/*
Exactly N plus 1 Values
You are given a positive integer N. You have to print exactly N+1 positive integers satisfying the following conditions:

Exactly one value should appear twice, all the remaining values should appear only once.
Sum of all these values should be equal to 2^N. 
You have to print the values in non-decreasing order. If there are multiple solutions, you can print any of them.

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output Format
For each test case, print a single line containing N+1 positive integers in non-decreasing order that satisfy the given conditions. 
If there are multiple solutions, you may print any of them.

Constraints
1≤T≤60
1≤N≤60
*/
/*
This program handles multiple test cases. For each test case, it reads an integer n, and if n lies between 1 and 60 (inclusive), it generates 
and prints a specific sequence of numbers. The first number printed is always 1, followed by n powers of 2, starting from 2^0 up to 2^n−1.

To compute each power of 2 efficiently, the code uses bitwise left shift:((long long)1 << i)
This shifts the number 1 to the left by i positions, which is equivalent to computing 2^i. The typecast to long long 
ensures that the computed values fit within a large integer range, especially since powers up to 2^59 can get quite large.

The output for each test case is a space-separated sequence of n + 1 integers starting with 1, followed by the next n powers of 2. This pattern
is often used in problems involving subsets, binary representations, or constructing arrays with distinct properties like unique subset sums.
*/

#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n>=1&&n<=60)
	    {
	    cout<<"1 ";
	    for (int i=0;i<n;++i)
	    {
	        cout<<((long long)1<<i)<<" ";
	    }
	    cout<<endl;
	    }
	}
}