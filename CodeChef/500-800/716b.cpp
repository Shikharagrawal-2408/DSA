/*      Cup Finals
It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D.

Given that the skills of the teams competing in the final are X and Y respectively, determine whether Chef will find the game interesting or not.

Input Format
The first line of input will contain a single integer T, denoting the number of testcases. The description of T testcases follows.
Each testcase consists of a single line of input containing three space-separated integers X, Y, and D — the 
skill levels of the teams and the maximum skill difference.

Output Format
For each testcase, output "YES" if Chef will find the game interesting, else output "NO".

Constraints
1≤T≤2000
1≤X,Y≤100
0≤D≤100

Input
3
5 3 4
5 3 1
5 5 0

Output
YES
NO
YES

Test case 1: The skill difference between the teams is 2, which is less than the maximum allowed difference of 4.
Test case 2: The skill difference between the teams is 2, which is more than the maximum allowed difference of 1.
*/
/*
The main idea is to determine whether the difference in skill levels between two competing teams is within a limit that Chef 
finds acceptable. For each test case, we are given three integers: the skill level of the first team X, the skill level of the 
second team Y, and the maximum allowed skill difference D. To solve this, we calculate the absolute difference between the two skill 
levels using abs(x - y) and check if this value is less than or equal to D. If it is, Chef will find the match interesting, so we output 
"Yes"; otherwise, we output "No". This simple comparison logic ensures that we evaluate each match correctly based on
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if(abs(x-y)<=z)
	    cout<<"Yes\n";
	    
	    else
	    cout<<"No\n";
	}
}