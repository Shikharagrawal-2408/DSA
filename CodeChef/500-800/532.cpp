/*
Chef in his Office
Recently Chef joined a new company. In this company, the employees have to work for X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for 
Y hours (Y<X) on Friday. Saturdays and Sundays are holidays.

Determine the total number of working hours in one week.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers X and Y — the number of working hours on each day from Monday to Thursday and the number of working hours on Friday respectively.
Output Format
For each test case, output the total number of working hours in one week.

Constraints
1≤T≤100
2≤X≤12
1≤Y<X

Input
2
10 5
12 2

Output
45
50
39
Test case 1: The total number of working hours in a week are: 10(Monday)+10(Tuesday)+10(Wednesday)+10(Thursday)+5(Friday)=45
Test Case 2: The total number of working hours in a week are: 12(Monday)+12(Tuesday)+12(Wednesday)+12(Thursday)+2(Friday)=50
*/
/*
This program processes multiple test cases where, for each test case, it reads two integers x and y. It then calculates and prints the value
of x * 4 + y.

While the exact context isn’t given, this expression could represent a total cost or quantity where:

x represents the number of items or units, each contributing 4 units (like time, cost, or weight),

y is an additional amount to be added to the total.

For example, if x represents the number of people each needing 4 tickets, and y is an extra charge, the formula calculates the final total.
This is a common type of computation in billing, scoring, or logistics problems.

The result is printed on a new line for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;   
	    cout<<x*4+y<<endl;
	}
}