/*      Building Race
Two friends Chef and Chefina are currently on floors A and B respectively. They hear an announcement that prizes are being distributed on the 
ground floor and so decide to reach the ground floor as soon as possible.

Chef can climb down X floors per minute while Chefina can climb down Y floors per minute. 
Determine who will reach the ground floor first (ie. floor number 0). In case both reach the ground floor together, print Both.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains four space-separated integers A,B, X, and Y — the current floor of Chef, 
the current floor of Chefina, speed of Chef and speed of Chefina in floors per minute respectively.

Output Format
For each test case, output on a new line:
Chef if Chef reaches the ground floor first.
Chefina if she reaches the ground floor first.
Both if both reach the ground floor at the same time.

Constraints
1≤T≤2500
1≤A,B≤100
1≤X,Y≤10

Input
4
2 2 2 2
4 2 1 5
3 2 4 1
3 2 2 1

Output
Both
Chefina
Chef
Chef

Test case 1: Chef is on the second floor and has a speed of 2 floors per minute. Thus, Chef takes 1 minute to reach the ground floor. 
Chefina is on the second floor and and has a speed of 2 floors per minute. Thus, Chefina takes 1 minute to reach the ground floor. 
Both Chef and Chefina reach the ground floor at the same time.

Test case 2: Chef is on the fourth floor and has a speed of 1 floor per minute. Thus, Chef takes 4 minute to reach the ground floor. 
Chefina is on the second floor and and has a speed of 5 floors per minute. Thus, Chefina takes 0.4 minutes to reach the ground floor. 
Chefina reaches the ground floor first.

Test case 3: Chef is on the third floor and has a speed of 4 floors per minute. Thus, Chef takes 0.75 minutes to reach the ground floor. 
Chefina is on the second floor and and has a speed of 1 floor per minute. Thus, Chefina takes 2 minutes to reach the ground floor. 
Chef reaches the ground floor first.

Test case 4: Chef is on the third floor and has a speed of 2 floors per minute. Thus, Chef takes 1.5 minutes to reach the ground floor. 
Chefina is on the second floor and and has a speed of 1 floor per minute. Thus, Chefina takes 2 minutes to reach the ground floor. 
Chef reaches the ground floor first.
*/
/*
Chef and Chefina are each on different floors of a building (floors A and B respectively) when they hear about a prize distribution on the 
ground floor (floor 0). They both want to get there as quickly as possible. Chef can descend at a speed of X floors per minute, while Chefina 
descends at Y floors per minute. For each test case, the task is to determine who reaches the ground floor first, or if both reach at the same 
time. To solve this, the code calculates the time taken by Chef as a / x and the time taken by Chefina as b / y — these are floating-point 
divisions to account for partial minutes. After calculating the two times, the program compares them: if Chef’s time is less than Chefina’s, 
it prints "Chef"; if Chefina’s is less, it prints "Chefina"; and if both times are equal, it prints "Both". The code efficiently handles 
multiple test cases and uses double to ensure accuracy in time comparisons involving decimal values. 
This approach ensures the correct winner is determined even when they descend floors at different speeds or start from different heights.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    
	   double n,m;
	    
	    n=(double)a/x;
	    m=(double)b/y;
	    
	    if(n<m)
	    cout<<"Chef\n";
	    
	    else if(m<n)
	    cout<<"Chefina\n";
	    
	    else
	    cout<<"Both\n";
	}
}
