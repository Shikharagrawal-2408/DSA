/*
The Three Topics
The Chef has reached the finals of the Annual Inter-school Declamation contest.

For the finals, students were asked to prepare 
10 topics. However, Chef was only able to prepare three topics, numbered A, B and C — he is totally blank about the other topics. This means 
Chef can only win the contest if he gets the topics A, B or C to speak about.
On the contest day, Chef gets topic X. Determine whether Chef has any chances of winning the competition.

Print "Yes" if it is possible for Chef to win the contest, else print "No".

Input Format
The first and only line of input will contain a single line containing four space-separated integers A, B, C, and X — the three topics Chef has 
prepared and the topic that was given to him on contest day.

Output Format
For each testcase, output in a single line "Yes" or "No".

Constraints
1≤A,B,C,X≤10 A,B,C are distinct.

Input
2 3 7 3

Output
Yes
Chef had prepared the topics: 2,3,7. Chef gets to speak on the topic: 3. Since Chef had already prepared this, there is a chance that he can win
the contest.
*/
/*
This program checks whether a given number x matches any one of three other numbers: a, b, or c. It reads four integers from the user input — the
first three (a, b, c) can be thought of as predefined values (like winning numbers, available choices, or correct answers), and the fourth 
integer x is the number to be checked against them.

The condition if(x==a || x==b || x==c) checks whether x is equal to any of the three numbers. If this condition is true, it means x matches one 
of them, and the program prints "Yes". Otherwise, it prints "No". This kind of logic is useful in scenarios where you want to validate a user's 
input against a set of accepted or correct values.

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	
	if(x==a||x==b||x==c)
	cout<<"Yes\n";
	else
	cout<<"No\n";

}