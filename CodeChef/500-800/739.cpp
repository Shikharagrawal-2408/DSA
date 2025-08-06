/*  Chef Fantasy 11
All of Chef's friends are playing fantasy cricket based upon the ODI World Cup, and Chef would like to join them.

For a certain cricket match, Chef has decided upon his team of 11 players. 
However, he hasn't yet decided who should be the captain and who should be the vice-captain.

He's narrowed his decision down to N players out of the 11, from which he'll choose one to be the captain and one to be the vice captain.
How many different choices does he have?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and the only line of each testcase contains a single integer N, the number of players Chef is considering.

Output Format
For each test case, output on a new line the number of possible choices of captain and vice-captain.

Constraints
1≤T≤10
2≤N≤11

Input
2
2
3

Output
2
6

Test case 1: With N=2, there are only two possibilities: one of the players must be selected as the captain, and the other will become 
the vice-captain.

Test case 2: It can be shown that there are 6 possibilities in total for captain/vice-captain choices.
 */
 /*
 Chef is selecting his fantasy cricket team and has already chosen 11 players. From these, he is considering N players as potential candidates 
 for the captain and vice-captain roles. The rule is simple: he must select one player as captain and a different player as vice-captain from 
 among the N candidates. So, for each test case, we need to calculate the number of ways to choose two different players from N, where order 
 matters because the roles are distinct (i.e., choosing player A as captain and B as vice-captain is different from choosing B as captain 
 and A as vice-captain). This is a classic case of permutations, where the number of ways to choose two distinct people with different roles 
 from N is given by N × (N - 1). The code reads the number of test cases T, and for each one, it reads the value of N, calculates N * (N - 1), 
 and prints the result. This efficiently computes the number of possible captain and vice-captain pairings for each scenario.
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
	    
	    cout<<n*(n-1)<<endl;
	}
}