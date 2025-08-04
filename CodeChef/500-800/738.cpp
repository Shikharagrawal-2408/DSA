/*      Too many items
Chef bought N items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items.
1 polybag can contain at most 10 items. What is the minimum number of polybags needed by Chef?

Input Format
The first line will contain an integer T - number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - the number of items bought by Chef.

Output Format
For each test case, output the minimum number of polybags required.

Constraints
1≤T≤1000
1≤N≤1000

Input
3
20
24
99

Output
2
3
10

Test case-1: Chef will require 2 polybags. Chef can fit 10 items in the first and second polybag each.
Test case-2: Chef will require 3 polybags. Chef can fit 10 items in the first and second polybag each and fit the remaining 
4 items in the third polybag.
*/
/*
In this problem, Chef buys a certain number of items, and each polybag can carry up to 10 items. Given the total number of items Chef buys 
in each test case, the task is to calculate the minimum number of polybags required to carry all the items. To solve this, we observe that 
if Chef buys exactly a multiple of 10 items, then he needs exactly that number divided by 10 polybags. However, if there are any extra items 
beyond a multiple of 10 (like 21 items), Chef will need an additional polybag to carry the remaining ones. Instead of using a conditional 
check for remainders, the expression (n + 9) / 10 is used. This effectively rounds up the division and ensures that even if there are leftover 
items, they are counted into the bag total. For example, if Chef buys 24 items, (24 + 9) / 10 = 33 / 10 = 3, meaning 3 polybags are needed. 
The code reads the number of test cases and, for each test case, 
reads the number of items Chef buys and prints the result of (n + 9) / 10, 
which gives the correct number of polybags in all scenarios.
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
	    
	    cout<<(n+9)/10<<endl;
	}
}