/*
Two Dishes

Chef will have N guests in his house today. He wants to serve at least one dish to each of the N guests. Chef can make two types of dishes. 
He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has 
A fruits, B vegetables, and C fishes in his house. Can he prepare at least N dishes in total?

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, four integers N,A,B,C.

Output Format
For each test case, print "YES" if Chef can prepare at least N dishes, otherwise print "NO". Print the output without quotes.

Constraints
1≤T≤100
1≤N,A,B,C≤100

Input
4
2 1 2 1
3 2 2 2
4 2 6 3
3 1 3 1
Output
YES
NO
YES
NO
Explanation:
Test case 1: Chef prepares one dish of the first type using one fruit and one vegetable and another dish of the second type using one vegetable 
and one fish.

Test case 2: Chef prepares two dishes of the first type using two fruit and two vegetable. Now all the vegetables are exhausted, hence he can't 
prepare any other dishes.

Test case 3: Chef can prepare a total of 5 dishes, two dishes of the first type and three dishes of the second type.

*/
/*
This program determines whether it is possible to serve food to n guests based on the available quantities of three types of dishes: fruits (a), vegetables (b), and fish (c). Each guest must receive exactly one dish, and the valid combinations for a single dish are either 1 fruit + 1 vegetable or 1 vegetable + 1 fish. In simpler terms, every guest requires 1 vegetable, and either 1 fruit or 1 fish alongside it.

For each test case, the program reads the number of guests n, followed by the available counts of fruits (a), vegetables (b), and fish (c). It then checks two conditions to determine whether serving all guests is possible:

There must be at least n vegetables, since each guest requires one vegetable.

The total number of fruits and fish combined must be at least n, because each guest requires one of those in addition to the vegetable.

If either condition fails (n > b or a + c < n), it prints "NO". Otherwise, if both conditions are satisfied, it prints "YES".

This logical structure efficiently verifies whether there are enough ingredients to prepare dishes for all guests according to the constraints.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    
	    if(n>b || (a+c)<n)
	    cout<< "NO\n";
	    
	    else
	    cout<< "YES\n";
    }
}
