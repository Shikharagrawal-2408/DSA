/*      Finding Square Roots
Assume that you happen to hear the above words and you want to give a try in finding the square root of any given integer using in-built 
functions. So here's your chance.

Input
The first line of the input contains an integer T, the number of test cases. T lines follow. Each line contains an integer N whose square root 
needs to be computed.

Output
For each line of the input, output the square root of the input integer, rounded down to the nearest integer, in a new line.

Constraints
1<=T<=20
1<=N<=10000

Input
3
10
5
10000

Output
3
2
100
*/
/*
In this problem, we are asked to compute the square root of a given integer N for multiple test cases. However, instead of the 
actual square root value, we need to round it down to the nearest whole number. This is known as the floor of the square root. For example, 
the square root of 10 is approximately 3.16, but when rounded down, it becomes 3. The program reads the number of test cases T, and for 
each test case, it uses the built-in sqrt() function to compute the square root and then applies the floor() function to round it down to 
the nearest integer. The result is printed for each input number on a new line.
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
	    
	    cout<<floor(sqrt(n))<<endl;   
	}
}