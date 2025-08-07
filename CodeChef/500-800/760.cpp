/*      Small Factorial
Write a program to find the factorial value of any number entered by the user.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

Output Format
For each test case, display the factorial of the given number N in a new line.

Constraints
1 ≤ T ≤ 1000
0 ≤ N ≤ 20

Input
3 
3 
4
5

Output
6
24
120
*/
/*
The program calculates the factorial of a number for multiple test cases. It starts by taking the number of test cases t as input. Then, for 
each test case, it reads an integer n and computes its factorial. The factorial is calculated by initializing a variable p to 1 and multiplying 
it by every number from 1 to n using a for loop. The result p stores the running product, which becomes the factorial of n. After calculating 
the factorial, it prints the result. Since the maximum possible value for n is 20, using a long long type ensures the result won't overflow. 
This process repeats for each of the t test cases, printing the factorial of each n on a new line.
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
	    
	    long long p=1;
	    for(int i=1;i<=n;i++)
	        p*=i;
	    cout<<p<<endl;
	}
}