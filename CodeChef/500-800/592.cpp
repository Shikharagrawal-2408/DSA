/*
Sasta Shark Tank
Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs
pitch their ideas to investors hoping to get investment in return).

He was offered deals from two investors. The first investor offers A dollars for 10% of his company and the second investor offers B dollars for
20% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will 
Devendra accept or if both the offers are equally good.

For example, if the first investor offers 300 dollars for 10% of the company, then the first investor's valuation of the company is 3000 dollars
since 10% of 3000=300. If the second investor offers 500 dollars for 20% of the company, then the second investor's valuation of the company is 
2500 dollars since 20% of 2500=500.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers A and B - the amount offered by first investor for 10% of Devendra's company and
the amount offered by second investor for 20% of Devendra's company respectively.

Output Format
For each test case, Output FIRST if Devendra should accept the first investor's deal, output SECOND if he should accept the second investor's 
deal, otherwise output ANY if both deals are equally good.

Constraints
1≤T≤100
100≤A,B≤10000

Input
3
100 200
200 100
200 500

Output
ANY
FIRST
SECOND
Explanation:
Test case 1: First investor's valuation of Devendra's company was 1000 since 10% of 1000=100 which is the amount he offered for 10% of the 
company. Second investor's valuation of Devendra's company was also 1000 since 20% of 1000=200 which is the amount he offered for 20% of the 
company. Therefore he can accept any of the deal.
Test case 2: First investor offered a better deal as he valued Devendra's company at 2000 dollars (since 10% of 2000=200) compared to the second
 investor who valued Devendra's company at 500 dollars (since 20% of 500=100).
Test case 3: Second investor offered a better deal as he valued Devendra's company at 2500 dollars compared to the first investor who valued
 Devendra's company 2000 dollars.
*/
/*
This program is designed to compare two values based on different multipliers. It starts by reading the number of test cases t. For each test
case, two integers a and b are input. Then the program compares a*10 and b*5. If a*10 is greater, it prints "First" indicating that the first 
option is better. If b*5 is greater, it prints "Second" indicating the second option is preferable. If both are equal, it prints "Any", meaning
either choice would yield the same result. This logic is repeated for all test cases.
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
	    
	    if(a*10>b*5)
	    cout<<"First\n";
	    else if(b*5>a*10)
	    cout<<"Second\n";
	    else
	    cout<<"Any\n";
	}
}