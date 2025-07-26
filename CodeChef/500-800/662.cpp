/*      Chef and Water Bottles
Chef has N empty bottles where each bottle has a capacity of X litres.
There is a water tank in Chefland having K litres of water. Chef wants to fill the empty bottles using the water in the tank.

Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers N,X, and K.

Output Format
For each test case, output in a single line answer, the maximum number of bottles Chef can fill completely.

Constraints
1≤T≤100
1≤N,X≤10 
0≤K≤10 

Input
3
5 2 8
10 5 4
3 1 4

Output
4
0
3

Test Case 1: The amount of water in the tank is 8 litres. The capacity of each bottle is 2 litres. Hence, 4 water bottles can be filled 
completely.

Test Case 2: The amount of water in the tank is 4 litres. The capacity of each bottle is 5 litres. Hence, no water bottle can be filled 
completely.

Test Case 3: The amount of water in the tank is 4 litres. The capacity of each bottle is 1 litre. Chef has 3 bottles available. He can fill all 
these bottles completely using 3 litres of water.
*/
/*
In this problem, Chef has N empty bottles, each with a capacity of X litres, and a tank containing K litres of water. The goal is to 
determine the maximum number of bottles that can be completely filled without spilling or wasting any water. For each test case, the program 
calculates how many full bottles could theoretically be filled using all the water, which is K / X. However, even if more water is available, 
Chef cannot fill more than N bottles, so the final answer is the minimum of K / X and N. This logic ensures that we do not exceed the number 
of bottles available or the amount of water. The answer is printed for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,n,k;
	    cin>>n>>x>>k;
	    
	    cout<<min(k/x,n)<<endl;
	}
}
