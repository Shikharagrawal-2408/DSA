/*      Chef And Operators
Chef has just started Programming, he is in first year of Engineering. Chef is reading about Relational Operators.
Relational Operators are operators which check relationship between two values. Given two numerical values A and B you need to help chef in 
finding the relationship between them that is,

First one is greater than second or, First one is less than second or, First and second one are equal.
 

Input
First line contains an integer T, which denotes the number of testcases. Each of the T lines contain two integers A and B.

Output
For each line of input produce one line of output. This line contains any one of the relational operators
'<' , '>' , '='.

Constraints
1 ≤T≤ 10000 1 ≤A,B≤ 1000000001

Input
3
10 20
20 10
10 10

Output
<
>
=

In this example 1 as 10 is lesser than 20
*/
/*
The program determines the relationship between two integers using relational operators. It begins by reading an integer t, representing the 
number of test cases. For each test case, it reads two integers a and b. The program then compares the two numbers: if a is less than b, it 
prints "<"; if a is greater than b, it prints ">"; otherwise, when both values are equal, it prints "=". 
This process repeats for all t test cases, ensuring each comparison result is output on its own line.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    if(a<b)
	    cout<<"<\n";
	    
	    else if(a>b)
	    cout<<">\n";
	    
	    else
	    cout<<"=\n";
	}
}