/*
Monopoly
There are 4 companies in the markets of Chefland, A, B, C, and D.
This year,

Company A made a profit of P lakh rupees,
Company B made a profit of Q lakh rupees,
Company C made a profit of R lakh rupees,
Company D made a profit of S lakh rupees.
There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other 
companies. Determine if there is a monopoly in the market or not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line and only line of each test case contains four space-separated integers P, Q, R and S — the profits made by companies A, B, C and 
D respectively.

Output Format
For each test case, output YES if there is a monopoly in the market. Otherwise, output NO.

Constraints
1≤T≤5000
1≤P,Q,R,S≤100

Input
4
1 1 1 10
30 20 6 4
100 90 3 4
14 15 16 17

Output
YES
NO
YES
NO

Test Case 1: Here, company D's profit (10) is greater than the sum of profits of all other companies (1+1+1=3).
Test Case 2: Here, no company's profit is strictly greater than the sum of profits of all other companies.
Test Case 3: Here, company A's profit (100) is greater than the sum of profits of all other companies (90+3+4=97).
*/
/*
This program determines whether the maximum among four given numbers is greater than the sum of the remaining three.

For each test case, the user inputs four integers: p, q, r, and s. The program first identifies the largest of these four using max(max(p, q), 
max(r, s)) and stores it in the variable maxa. Then, it calculates the sum of the remaining three numbers by subtracting maxa from the total sum
of all four numbers.

The condition if(maxa > sum) checks whether this largest number is strictly greater than the combined total of the other three. If true, it 
prints "yes" — otherwise, it prints "no".

This logic could represent a scenario like balancing forces, weights, or values, where one element must not outweigh the rest combined.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int p,q,r,s;
	    cin>>p>>q>>r>>s;
	    
	    int maxa = max(max(p, q), max(r, s));
	    int sum=p+q+r+s-maxa;
        
        if(maxa>sum)
        cout<<"yes\n";
        
        else
        cout<<"no\n";
	}
}