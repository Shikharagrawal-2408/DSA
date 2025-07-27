/*      Valentine is Coming
Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special.

Chef has a total of X rupees and one chocolate costs Y rupees. What is the maximum number of chocolates Chef can buy?

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X,Y - the amount Chef has and the cost of one chocolate respectively.

Output Format
For each test case, output the maximum number of chocolates Chef can buy.

Constraints
1≤T≤1000
1≤X,Y≤100

Input
4
5 10
16 5
35 7
100 1

Output
0
3
5
100

Test case-1: Chef has 5 rupees but the cost of one chocolate is 10 rupees. Therefore Chef can not buy any chocolates.

Test case-2: Chef has 16 rupees and the cost of one chocolate is 5 rupees. Therefore Chef can buy at max 3 chocolates since 
buying 4 chocolates would cost 20 rupees.

Test case-3: Chef has 35 rupees and the cost of one chocolate is 7 rupees. Therefore Chef can buy at max 5 chocolates for 35 rupees.
Test case-4: Chef has 100 rupees and the cost of one chocolate is 1 rupee. Therefore Chef can buy at max 100 chocolates for 100 rupees.
*/
/*
ChatGPT said:
The given problem is about calculating how many chocolates Chef can buy with the money he has, considering each chocolate has a 
fixed cost. For each test case, you are provided with two integers — X, which is the total money Chef has, and Y, the cost of one 
chocolate. To find out how many chocolates Chef can buy, you simply divide the total money by the cost per chocolate using integer 
division (X / Y). This automatically gives the number of whole chocolates Chef can afford, ignoring any remaining money that is not 
enough to buy another chocolate. The code first reads the number of test cases T, and then for each test case, it inputs the values 
X and Y, performs the division, and prints the result. This approach works efficiently within the given constraints, and the solution 
is implemented using basic input/output operations and arithmetic in C++.
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
	    
	    cout<<x/y<<endl;
	}
}