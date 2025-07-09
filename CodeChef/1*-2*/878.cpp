/*
Richie Rich
Chef aims to be the richest person in Chefland by his new restaurant franchise. Currently, his assets are worth A billion dollars and have no 
liabilities. He aims to increase his assets by X billion dollars per year.
Also, all the richest people in Chefland are not planning to grow and maintain their current worth.

To be the richest person in Chefland, he needs to be worth at least B billion dollars. How many years will it take Chef to reach his goal if his
value increases by X billion dollars each year?

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers A, B, X.

Constraints
1≤T≤21 000
100≤A<B≤200
1≤X≤50
X divides B−A

Input
3
100 200 10
111 199 11
190 200 10

Output
10
8
1

Test Case 1: Chef needs to increase his worth by 200−100=100 billion dollars and his increment per year being 10 billion dollars, so it will 
take him 100 /10=10 years to do so.
*/
/*
This program calculates how many steps of a fixed size are required to go from a starting point a to an endpoint b. It processes multiple test
 cases, and for each test case, it reads three integers: a, b, and x. Here, a is the starting value, b is the final value, and x is the size of
each step or increment.

The core logic is based on the assumption that we move from a to b in equal jumps of size x. Therefore, the number of steps required to go from 
a to b is calculated using the formula:

(b - a) / x
This result is directly printed for each test case. It is assumed that b is always greater than or equal to a, and the difference between them 
is divisible by x, ensuring the result is an integer.

This type of calculation is commonly seen in problems involving uniform progression, travel time with constant speed, or consistent step 
intervals.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,x;
	    cin>>a>>b>>x;
	    
	    cout<<(b-a)/x<<"\n";
	}

}
