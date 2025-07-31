/*      A or B
There are two problems in a contest.

Problem A is worth 500 points at the start of the contest.
Problem B is worth 1000 points at the start of the contest.
Once the contest starts, after each minute:

Maximum points of Problem A reduce by 2 points .
Maximum points of Problem B reduce by 4 points.
It is known that Chef requires 
X minutes to solve Problem A correctly and 
Y minutes to solve Problem B correctly.

Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y - the time required to solve problems A and B in minutes respectively.

Output Format
For each test case, output the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

Constraints
1≤T≤1000
1≤X,Y≤100

Input
4
10 20
8 40
15 15
20 10

Output
1360
1292
1380
1400

Test Case 1: If Chef attempts in the order A→B then he submits Problem A after 10 minutes and Problem B after 30 minutes.
Thus, he gets 500−10⋅2=480 points for problem A and 1000−30⋅4=880 points for problem B. Thus, total 480+880=1360 points for both the problems.
If Chef attempts in the order B→A then he submits Problem B after 20 minutes and Problem A after 30 minutes.
Thus, he gets 1000−20⋅4=920 points for Problem B and 500−30⋅2=440 points for Problem A. Thus total 920+440=1360 points for both the problems.
So, in both cases Chef gets 1360 points in total.

Test Case 2: If Chef attempts in the order A→B then he submits Problem A after 8 minutes and Problem B after 48 minutes.
Thus, he gets 500−8⋅2=484 points for problem A and 1000−48⋅4=808 points for problem B. Thus, total 484+808=1292 points for both the problems.
If Chef attempts in the order B→A then he submits Problem B after 40 minutes and Problem A after 48 minutes.
Thus, he gets 1000−40⋅4=840 points for Problem B and 500−48⋅2=404 points for Problem A. Thus total 840+404=1244 points for both the problems.
So, Chef will attempt in the order A→B and thus obtain 1292 points.

Test Case 3: If Chef attempts in the order A→B then he submits Problem A after 15 minutes and Problem B after 30 minutes.
Thus, he gets 500−15⋅2=470 points for problem A and 1000−30⋅4=880 points for problem B. Thus, total 470+880=1350 points for both the problems.
If Chef attempts in the order B→A then he submits Problem B after 15 minutes and Problem A after 30 minutes.
Thus, he gets 1000−15⋅4=940 points for Problem B and 500−30⋅2=440 points for Problem A. Thus total 940+440=1380 points for both the problems.
So, Chef will attempt in the order B→A and thus obtain 1380 points.

Test Case 4: If Chef attempts in the order A→B then he submits Problem A after 20 minutes and Problem B after 30 minutes.
Thus, he gets 500−20⋅2=460 points for problem A and 1000−30⋅4=880 points for problem B. Thus, total 460+880=1340 points for both the problems.
If Chef attempts in the order B→A then he submits Problem B after 10 minutes and Problem A after 30 minutes.
Thus, he gets 1000−10⋅4=960 points for Problem B and 500−30⋅2=440 points for Problem A. Thus total 960+440=1400 points for both the problems.
So, Chef will attempt in the order B→A and thus obtain 1400 points.
*/
/*
In this problem, Chef has two problems to solve in a contest — Problem A initially worth 500 points and Problem B worth 1000 points. 
However, each minute that passes reduces the score: Problem A loses 2 points per minute, and Problem B loses 4 points per minute. 
Given the time Chef takes to solve each problem (X minutes for A and Y minutes for B), we are to determine the maximum score 
Chef can get by choosing the optimal order in which to solve the problems. The code calculates the total score for both possible 
orders — solving A first then B (ab) and solving B first then A (ba). For ab, Chef takes X minutes for A and then (X+Y) minutes total 
by the time he finishes B. For ba, Chef finishes B in Y minutes and A after (X+Y) total minutes. The maximum of the two total scores 
is taken as the result for each test case. This ensures Chef always earns the highest possible score by picking the best solving order.
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
	    
	    int ab = max(0, 500 - 2 * x) + max(0, 1000 - 4 * (x + y));
        int ba = max(0, 500 - 2 * (x + y)) + max(0, 1000 - 4 * y);
	    
	    cout<<max(ab,ba)<<endl;
	}
}