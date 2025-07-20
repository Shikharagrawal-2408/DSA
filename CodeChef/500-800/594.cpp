/*
Qualify the round
In a coding contest, there are two types of problems:

Easy problems, which are worth 1 point each
Hard problems, which are worth 2 points each
To qualify for the next round, a contestant must score at least X points. Chef solved A Easy problems and B Hard problems. Will Chef qualify or 
not?

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input containing three space-separated integers — X,A, and B.

Output Format
For each test case, output a new line containing the answer — Qualify if Chef qualifies for the next round, and NotQualify otherwise.

Constraints
1≤T≤100
1≤X≤100
0≤A,B≤100

Input
3
15 9 3
5 3 0
6 2 8

Output
Qualify
NotQualify
Qualify

Test Case 1: Chef solved 9 easy problems and 3 hard problems, making his total score 9⋅1+3⋅2=15. He needs at least 15 points to qualify, which 
he has and hence he qualifies.
Test Case 2: Chef solved 3 easy problems and 0 hard problems, making his total score 3⋅1+0⋅2=3. He needs at least 5 points to qualify, which he 
doesn't have and hence doesn't qualify.
Test Case 3: Chef solved 2 easy problems and 8 hard problems, making his total score 2⋅1+8⋅2=18. He needs at least 6 points to qualify, which he 
has and hence he qualifies.
*/
/*
This C++ program determines whether a candidate qualifies based on their performance scores. It starts by taking the number of test cases t. For
each test case, it reads three integers: x, a, and b. Here, x represents the minimum score required to qualify, a is the score from section A, 
and b is the score from section B which is weighted double (i.e., 2 * b). The total effective score is calculated as a + 2 * b. If this total 
score is greater than or equal to x, the program prints "Qualify". Otherwise, it prints "NotQualify". This check is repeated for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    
	    if(a+(2*b)>=x)
	    cout<<"Qualify\n";
	    
	    else
	    cout<<"NotQualify\n";
	}
}