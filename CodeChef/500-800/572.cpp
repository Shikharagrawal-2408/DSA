/*
Is the Score Consistent
Chef is watching a football match. The current score is A:B, that is, team 1 has scored A goals and team 2 has scored B goals. Chef wonders if 
it is possible for the score to become C:D at a later point in the game (i.e. team 1 has scored C goals and team 2 has scored D goals). Can you 
help Chef by answering his question?

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers A and B - the intial number of goals team 1 and team 2 have scored respectively.
The second line of each test case contains two integers C and D - the final number of goals team 1 and team 2 must be able to score respectively.

Output Format
For each testcase, output POSSIBLE if it is possible for the score to become C:D at a later point in the game, IMPOSSIBLE otherwise.

Constraints
1≤T≤1000
0≤A,B,C,D≤10

Input
3
1 5
3 5
3 4
2 6
2 2
2 2

Output
POSSIBLE
IMPOSSIBLE
POSSIBLE
Test case 1: The current score is 1:5. If team 1 scores 2 more goals, the score will become 3:5. Thus 3:5 is a possible score.
Test case 2: The current score is 3:4. It can be proven that no non-negative pair of integers (x,y) exists such that if team 1 scores x more 
goals and team 2 scores y more goals the score becomes 2:6 from 3:4. Thus in this case 2:6 is an impossible score.
Test case 3: The current score is already 2:2. Hence it is a possible score.
*/
/*
This C++ program is designed to determine whether a particular condition is possible or impossible for multiple test cases. In each test case, 
four integers a, b, c, and d are provided. Here, a and b might represent the dimensions or requirements of a given item or task (like width and 
height of a box, or resource requirements), while c and d represent the available limits or capacities (like maximum allowed width and height, 
or available resources).

The program checks whether both a is less than or equal to c and b is less than or equal to d. If both conditions are satisfied, it prints 
"POSSIBLE", indicating that the item can fit or the task can be done within the given constraints. Otherwise, it prints "IMPOSSIBLE", suggesting
that the requirements exceed the available limits. This is a useful pattern for feasibility checks in various resource allocation or 
configuration scenarios.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    if(a<=c && b<=d )
	    cout<<"POSSIBLE\n";
	    else
	    cout<<"IMPOSSIBLE\n";
	}
}