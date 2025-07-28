/*      Airlines
An airline operates X aircraft every day. Each aircraft can carry up to 100 passengers.
One day, N passengers would like to travel to the same destination. What is the minimum number of new planes that the airline 
must buy to carry all N passengers?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing two space-separated integers X and N — the number of aircraft the 
airline owns and the number of passengers travelling, respectively.

Output Format
For each test case, output the minimum number of planes the airline needs to purchase.
Constraints
1≤T≤1000
1≤X≤10^6
1≤N≤10^6

Input
3
4 600
3 523
8 245

Output
2
3
0

Test case 1: The airline needs at least 6 planes to carry 600 passengers. They already have 4, so they must purchase 2 more.
Test case 2: The airline needs at least 6 planes to carry 523 passengers. They already have 3, so they must purchase 3 more.
Test case 3: The airline needs at least 3 planes to carry 245 passengers. They already have 8, so there's no need to purchase any more.
*/
/*
To determine the minimum number of planes the airline needs to buy, we first calculate how many planes are required to carry 
all N passengers, given that each plane can carry up to 100 passengers. This can be done by dividing N by 100 and rounding up, 
which ensures that any remaining passengers who don’t fill an entire plane still get a plane. Instead of using floating-point division, 
we use the integer trick (N + 99) / 100 to achieve the same ceiling effect efficiently.

Once we know the total number of planes needed, we subtract the number of planes the airline already owns (X). If the result is 
positive, that’s the number of new planes to buy. If it’s zero or negative, it means no additional planes are needed, so the output is 0. 
This ensures we never end up with a negative number of planes to purchase.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,n;
	    cin>>x>>n;
	    
	    cout<<max(0,((n+99)/100)-x)<<endl;
	}
}