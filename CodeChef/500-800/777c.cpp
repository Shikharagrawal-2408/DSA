/*      Single-use Attack
Chef is playing a video game, and is now fighting the final boss.

The boss has H health points. Each attack of Chef reduces the health of the boss by X.Chef also has a special attack that can be used at most 
once, and will decrease the health of the boss by Y.Chef wins when the health of the boss is ≤0.
What is the minimum number of attacks needed by Chef to win?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case will contain three space-separated integers H,X,Y — the parameters described in the statement.

Output Format
For each test case, output on a new line the minimum number of attacks needed by Chef to win.

Constraints
1≤T≤1000
1≤X<Y≤H≤100

Input
4
100 25 40
100 29 45
46 1 2
78 15 78

Output
4
3
45
1

Test case 1: Chef can attack the boss 4 times normally. This results in 25+25+25+25=100 damage, which is enough to defeat the boss.

Test case 2: Chef can attack the boss 2 times normally, then use the special attack. This results in 29+29+45=103 damage, which is enough 
to defeat the boss.

Test case 3: Chef can proceed as follows:First, use the special attack. This leaves the boss with 46−2=44 health.Then, use 44 normal 
attacks to defeat the boss, since each one does 1 damage.This takes a total of 44+1=45 attacks.

Test case 4: Chef can use the special attack to immediately bring the health of the boss to zero, hence only needing one attack.
*/
/*
The program determines the minimum number of attacks Chef needs to defeat the boss, given that Chef can use a stronger special attack only once. 
It first reads t, the number of test cases. For each case, it reads h (boss’s health), x (damage per normal attack), and y (damage of the 
special attack). The code assumes Chef uses the special attack first, so it subtracts y from h. Since using the special attack always counts 
as one attack, cnt is initialized to 1. If the boss still has health remaining (h > 0), the program calculates the number of normal attacks 
needed by dividing the remaining health by x and rounding up using ceil((double)h / x). This ensures that any leftover health less than x 
still requires one more attack. The final count is printed for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int h,x,y;
	    cin>>h>>x>>y;
	    
	    h-=y;
	    
	    int cnt=1+(h > 0 ? (int)ceil((double)h / x) : 0);
	    cout<<cnt<<endl;
	}
}