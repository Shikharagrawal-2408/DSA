/*      Decrement OR Increment
Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

Input Format
First line will contain a number N.

Output Format
Output a single line, the new value of the number.

Constraints
0≤N≤1000

Input
5

Output
4
Explanation:
Since 5 is not divisible by 4 hence, its value is decreased by 1.
*/
/*
This program reads an integer N and applies a simple conditional check: if N is divisible by 4 (i.e., N % 4 == 0), it increments N by 1; 
otherwise, it decrements N by 1. The logic is implemented using an if-else statement. First, it checks if N is not divisible by 4 using 
n % 4 != 0. If true, it decreases the value of n by 1 using the pre-decrement operator --n. If false (meaning N is divisible by 4), it 
increases n by 1 using the pre-increment operator ++n. Finally, the modified value is printed. For example, 
if the input is 5, it is not divisible by 4, so the output is 4. If the input is 8, which is divisible by 4, the output would be 9.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	if(n%4!=0)
	cout<<--n;
	
	else
	cout<<++n;
	
	cout<<endl;
}