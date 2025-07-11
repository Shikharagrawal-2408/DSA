/*
Subscriptions
A new TV streaming service was recently started in Chefland called the Chef-TV.
A group of N friends in Chefland want to buy Chef-TV subscriptions. We know that 6 people can share one Chef-TV subscription. Also, 
the cost of one Chef-TV subscription is X rupees. Determine the minimum total cost that the group of 
N friends will incur so that everyone in the group is able to use Chef-TV.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers N and X — the size of the group of friends and the cost of one subscription.

Output Format
For each test case, output the minimum total cost that the group will incur so that everyone in the group is able to use Chef-TV.

Constraints
1≤T≤1000
1≤N≤100
1≤X≤1000

Input
3
1 100
12 250
16 135

Output
100
500
405
*/
/*
This program processes multiple test cases to calculate a specific cost or count based on two input values: n and x. For each test case,
it reads n (possibly representing the total number of tasks, items, or people) and x (possibly representing a fixed cost or rate per group).

The key logic involves computing how many groups of size 6 are needed to cover n items. Since n might not be perfectly divisible by 6, the
code uses ceil(n / 6.0) to ensure that any remaining items still count as a full group. For example, if n = 13, it would require 3 full groups 
(two full ones and one partially filled).

The total result is obtained by multiplying the number of groups with x, i.e., ceil(n / 6.0) * x and the final value is printed.

This type of calculation is useful in real-life situations such as distributing items into packets, determining taxi fares based on the 
number of passengers, or any scenario where resources are grouped and charged per group.
*/

#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    cout<<ceil(n/6.0)*x<<endl;
	}
}