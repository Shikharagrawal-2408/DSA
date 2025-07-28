/*      Weights
Chef is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and Z units respectively. 
Help him determine whether he can measure the exact weight of the object with one or more of these weights.

If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of single line containing a four positive integers W,X,Y, and Z.

Output Format
For each test case, output on a new line YES if it is possible to measure the weight of object with one or more of these weights, 
otherwise print NO.

Constraints
1≤T≤10 
1≤W,X,Y,Z≤10^5

Input
4
5 2 1 6
7 9 7 2
20 8 10 12
20 10 11 12

Output
NO
YES
YES
NO

Test Case 1: It is not possible to measure 5 units using any combination of given weights.
Test Case 2: Chef can use the second weight of 7 units to measure the object exactly.
Test Case 3: Chef can use combination of first and third weights to measure 8+12=20 units.
Test Case 4: Chef cannot measure 20 units of weight using any combination of given weights.
*/
/*
We can also solve this problem like this by systematically checking all possible combinations of the given weights to determine whether 
Chef can measure the object’s weight exactly. Chef has three available weights X, Y, and Z, and we are to determine if he can use one or 
more of them (in any combination) to match the object’s weight W. This solution checks if W is equal to any single weight, then if W can 
be made by summing any two of the weights, and finally if the sum of all three weights equals W. If any of these conditions are true, the 
answer is “Yes”. Otherwise, if no combination works, we print “No”. This brute-force but efficient approach works well within the given 
constraints and ensures all possible combinations are considered.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    
	    if(w==x)
	    cout<<"Yes\n";
	    
	    else if(w==y)
	    cout<<"Yes\n";
	    
	    else if(w==z)
	    cout<<"Yes\n";
	    
	    else if(w==(x+y))
	    cout<<"Yes\n";
	    
	    else if(w==(x+z))
	    cout<<"Yes\n";
	    
	    else if(w==(x+y+z))
	    cout<<"Yes\n";
	    
	    else if(w==(y+z))
	    cout<<"Yes\n";
	    
	    else
	    cout<<"No\n";
	}

}
