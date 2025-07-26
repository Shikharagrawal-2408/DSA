/*      Candy Distribution
Chef has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and each friend 
gets even number of candies. Determine whether it is possible to do so.

NOTE: Chef will not take any candies himself and will distribute all the candies.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers N and M, the number of candies and the number of friends.

Output Format
For each test case, the output will consist of a single line containing Yes if Chef can distribute the candies as per the conditions and No 
otherwise.

Constraints
1≤T≤1000
1≤N,M≤1000

Input
4
9 3
4 1
4 2
8 3

Output
No
Yes
Yes
No

Test case 1: Since Chef has 9 candies and 3 friends, each friend will get 9/3 =3 candies. Since 3 is not even, Chef doesn't satisfy the 
conditions.
Test case 2: Since Chef has 4 candies and 1 friend, each friend will get 4/1=4 candies. Since 4 is even, Chef satisfies all the conditions.

Test case 3: Since Chef has 4 candies and 2 friends, each friend will get 4/2=2 candies. Since 2 is even, Chef satisfies all the conditions.

Test case 4: Since Chef has 8 candies and 3 friends. Since Chef won't be able to distribute all the candies equally, Chef does not satisfy all 
the conditions.
*/
/*
In this problem, Chef needs to distribute exactly N candies to M friends such that each friend receives the same number of candies, 
and importantly, each friend must receive an even number of candies. Chef does not keep any candies for himself, so all candies must be 
evenly distributed. For each test case, the program first checks if the total number of candies is divisible by the number of friends 
(n % m == 0). If it is not, the distribution is not equal and the answer is "No". If it is divisible, it then checks whether the number 
of candies each friend would receive (n / m) is even. Only if both conditions are satisfied does the program print "Yes", otherwise it 
prints "No". This ensures a fair and even distribution according to the rules given.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    if( n%m==0 && (n/m)%2==0 )
	    cout<<"Yes\n";
	    
	    else
	    cout<<"No\n";
	    
	}	
}