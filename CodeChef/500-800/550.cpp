/*
Chefland Games
In Chefland, a tennis game involves 4 referees.
Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only 
if all the referees agree that it was inside limits.

Given the decision of the 4 referees, help Chef determine whether the ball is considered inside limits or not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing 4 integers R1,R2,R3 and R4 denoting the decision of the respective referees.
Here R can be either 0 or 1 where 0 would denote that the referee considered the ball to be inside limits whereas 1 denotes that they consider 
it to be outside limits.

Output Format
For each test case, output IN if the ball is considered to be inside limits by all referees and OUT otherwise.

Constraints
1≤T≤20

Input
4
1 1 0 0
0 0 0 0
0 0 0 1
1 1 1 1

Output
OUT
IN
OUT
OUT
Explanation:
Test case 1: Referees 1 and 2 do not consider the ball to be IN. Thus, the ball is OUT.
Test case 2: All referees consider the ball to be IN. Thus, the ball is IN.
Test case 3: Referee 4 does not consider the ball to be IN. Thus, the ball is OUT.
Test case 4: No referee considers the ball to be IN. Thus, the ball is OUT.
*/
/*
This C++ program determines whether a person is considered "IN" or "OUT" based on four binary values. For each test case, it reads four 
integers: a, b, c, and d. These values can represent the state of participation or presence (e.g., whether someone is active in four different 
tasks or not). The program calculates the total sum of these values. If the sum equals 0, meaning all inputs are zero (i.e., inactive or absent 
in all categories), it prints "IN". Otherwise, if there's at least one non-zero value (indicating presence in any one category), it prints "OUT".
This logic is repeated for all test cases.
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
	    
	    int sum=a+b+c+d;
	    if(sum==0)
	    cout<<"IN\n";
	    
	    else
	    cout<<"OUT\n";
	}
}