/*Discus Throw
In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score.

You are given the distances for all 3 throws of a player. Determine the final score of the player.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers A,B, and C denoting the distances in each throw.

Output Format
For each test case, output the final score of the player.

Constraints
1≤T≤100
1≤A,B,C≤100

Input
3
10 15 8
32 32 32
82 45 54

Output
15
32
82

Test Case 1: The longest distance is achieved in the second throw, which is equal to 15 units. Thus, the answer is 15.
Test Case 2: In all throws, the distance is 32 units. Thus, the final score is 32.
Test Case 3: The longest distance is achieved in the first throw which is equal to 82 units. Thus, the answer is 82.
*/
/*
In this problem, a player participates in a discus throw event and is allowed three throws. The final score is determined by the longest 
distance achieved among the three throws. For each test case, we are given three integers representing the distances of the three throws. Our 
task is to find and print the maximum of these three values. The program first reads the number of test cases T, and then for each test case, 
reads three integers A, B, and C. Using the max() function, it determines the largest value among the three and prints it as the final score. 
This way, the code efficiently computes the result for all test cases.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    cout<<max(a,max(b,c))<<endl;
	}
}