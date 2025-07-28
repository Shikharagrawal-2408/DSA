/*      Minimum number of coins
Chef has infinite coins in denominations of rupees 5 and rupees 10.

Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 
10 only, print −1.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single integer X.

Output Format
For each test case, print a single integer - the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay 
X rupees in denominations of rupees 5 and 10 only, print −1.

Constraints
1≤T≤1000
1≤X≤1000

Input
3
50
15
8

Output
5
2
-1

Test Case 1: Chef would require at least 5 coins to pay 50 rupees. All these coins would be of rupees 10.
Test Case 2: Chef would require at least 2 coins to pay 15 rupees. Out of these, 1 coin would be of rupees 10 and 1 coin would be of rupees 5.
Test Case 3: Chef cannot pay exactly 8 rupees in denominations of rupees 5 and 10 only.
*/
/*
Chef needs to pay exactly X rupees using only coins of denomination 5 and 10. The goal is to use the minimum number of coins possible. 
The best way to minimize the number of coins is to use as many 10-rupee coins as possible first (since they cover more value per coin), 
and then cover the remaining amount, if any, with 5-rupee coins.

To do this, we first check if X is divisible by 5. If not, it's impossible to form X using only coins of 5 and 10, so we print -1.

Otherwise, we take the integer division of X by 10 to get the number of 10-rupee coins we can use (x / 10), and then take the remainder 
of X modulo 10 to see if a 5-rupee coin is needed ((x % 10) / 5). We add both counts to get the minimum total number of coins required. 
This solution ensures efficiency while strictly using the largest denominations first for optimality.
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
	    
	    if(x%5!=0)
	    cout<<"-1\n";
	    
	    else
	    cout<<x/10+(x%10)/5<<endl;
	}
}