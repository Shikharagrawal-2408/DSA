/*      Reach fast
Chef is standing at coordinate A while Chefina is standing at coordinate B.
In one step, Chef can increase or decrease his coordinate by at most K.
Determine the minimum number of steps required by Chef to reach Chefina.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three integers A,B, and K, the initial coordinate of Chef, the initial coordinate of Chefina and the 
maximum number of coordinates Chef can move in one step.

Output Format
For each test case, output the minimum number of steps required by Chef to reach Chefina.

Constraints
1≤T≤1000
1≤A,B≤100
1≤K≤100

Input
4
10 20 3
36 36 5
50 4 100
30 4 2

Output
4
0
1
13

Test case 1: In the first three steps, Chef increases his coordinate by K=3. In the fourth step, Chef increases his coordinate by 1 which is 
less than equal to K. It can be shown that this is the minimum number of steps required by Chef.

Test case 2: Chef is already at the same coordinate as Chefina. Thus, he needs 0 steps.

Test case 3: Chef can use 1 step to decrease his coordinate by 46 which is less than K=100 and reach Chefina.

Test case 4: Chef can use 13 steps to decrease his coordinate by K=2 and reach the coordinate 30−13⋅2=4.
*/
/*
The program calculates the minimum number of steps Chef needs to reach Chefina, given that in one step he can move at most k units along 
a coordinate line. It first reads t, the number of test cases. For each test case, it reads three integers: a (Chef’s position), 
b (Chefina’s position), and k (maximum movement per step). It then computes the distance d between them as the absolute difference abs(a - b). 
To find the minimum steps, it divides the distance d by k, rounding up since any remaining distance less than k still requires one extra step. 
This is done using the formula (d + k - 1) / k, which is a standard trick for ceiling division with integers. 
The result is printed for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,k;
	    cin>>a>>b>>k;
	    
	   double d=abs(a-b);
	   int c=(d+k-1)/k;
	    cout<<c<<endl;
	}
}