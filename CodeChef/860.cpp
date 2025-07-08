/*
Chef prepared a problem. The admin has rated this problem for x points.

A problem is called :

Easy if 1≤x<100
Medium if 100≤x<200
Hard if 200≤x≤300

Find the category to which Chef’s problem belongs.

Input Format
The first line contains T denoting the number of test cases. Then the test cases follow.
The first and only line of each test case contains a single integer x.

Output Format
For each test case, output in a single line the category of Chef's problem, i.e whether it is an Easy, Medium or Hard problem. The output is case sensitive.

Constraints
1≤T≤50
1≤x≤300

Input
Output
3
50
172
201
Easy
Medium
Hard
*/
/*
This program classifies a problem's difficulty level based on a given integer input x, which likely represents a score or difficulty rating. It
processes multiple test cases, where for each test case, the integer x is read.

The difficulty level is determined using simple conditional checks:
If x is less than 100, the output is "Easy".
If x is between 100 (inclusive) and 199 (inclusive), the output is "Medium".
If x is 200 or more, the output is "Hard".

The program uses a straightforward if-else if-else ladder to evaluate these conditions and prints the corresponding difficulty level. This type 
of logic is commonly used in coding platforms or online judges to categorize problems based on their rating or performance metrics.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    if(x<100)
	    cout<<"Easy\n";
	    
	   else if( x<200)
	    cout<<"Medium\n";
	    
	    else
	    cout<<"Hard\n";
	}
}