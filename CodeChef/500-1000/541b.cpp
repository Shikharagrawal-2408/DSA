/*
Sale Season
It's the sale season again and Chef bought items worth a total of X rupees. The sale season offer is as follows:
if X≤100, no discount.
if 100<X≤1000, discount is 25 rupees.
if 1000<X≤5000, discount is 100 rupees.
if X>5000, discount is 500 rupees.
Find the final amount Chef needs to pay for his shopping.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of single line of input containing an integer X.

Output Format
For each test case, output on a new line the final amount Chef needs to pay for his shopping.

Constraints
1≤T≤100
1≤X≤10000

Input
4
15
70
250
1000

Output
15
70
225
975
Explanation:
Test case 1: Since X≤100, there is no discount.
Test case 3: Here, X=250. Since 100<250≤1000, discount is of 25 rupees. Therefore, Chef needs to pay 250−25=225 rupees.
*/
/*
This C++ program calculates the net amount a person has to pay after applying a discount based on the value of x, where x represents the total
amount. The logic is based on a tiered discount system: if x is less than or equal to 100, no discount is applied; if it is between 101 and 1000
(inclusive), a discount of 25 is applied; if it lies between 1001 and 5000 (inclusive), a discount of 100 is applied; and for values greater 
than 5000, a discount of 500 is applied. The conditionals are implemented using a nested ternary operator for conciseness. The program processes
multiple test cases, and for each value of x, it prints the final amount to be paid after applying the appropriate discount.
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
	    
	   // if(x<=100)
	   // cout<<x<<endl;
	   // else if(x<=1000)
	   // cout<<x-25<<endl;
	   // else if(x<=5000)
	   // cout<<x-100<<endl;
	   // else
	   // cout<<x-500<<endl;
	    
	    cout << ((x <= 100) ? x : 
         (x <= 1000) ? (x - 25) :
         (x <= 5000) ? (x - 100) :
         (x - 500)) << endl;
	}
}