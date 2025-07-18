/*
Reverse The Number
Given an Integer N, write a program to reverse it.

Input:- The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output:- For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Sample 1:
Input
4
12345
31203
2123
2300

Output
54321
30213
3212
32
*/
/*
This program reads an integer t representing the number of test cases. For each test case, it reads an integer n and calculates its reverse. The
reversal is done using a while loop that runs until n becomes zero. In each iteration, the last digit d of n is obtained using n % 10 and 
appended to rev by multiplying rev by 10 and adding d. The original number n is then reduced by dividing it by 10. After the loop ends, the 
reversed number rev is printed. This process is repeated for every test case.
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
	    int rev=0;
	    while(n!=0)
	    {
	        int d=n%10;
	        rev=rev*10+d;
	        n/=10;
	    }
	    cout<<rev<<endl;
	}
}