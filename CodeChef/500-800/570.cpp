/*
Chef and Candies
There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop. In 
the shop, packets containing exactly 4 candies are available.

Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains two integers N and X — the number of children and the number of candies Chef already has.

Output Format
For each test case, output the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children.

Constraints
1≤T≤1000
1≤N,X≤100

Input
4
20 12
10 100
10 9
20 9

Output
2
0
1
3

Test Case 1: Chef must buy 2 more packets after which he will have 20 candies which will be enough to distribute 1 candy to each of the 20 
children.
Test Case 2: Chef does not need to buy more packets since he already has 100 candies which are enough to distribute 1 candy to each of the 10 
children.
Test Case 3: Chef must buy 1 more packet after which he will have 13 candies which will be enough to distribute 1 candy to each of the 10 
children.
Test Case 4: Chef must buy 3 more packets after which he will have 21 candies which will be enough to distribute 1 candy to each of the 20 
children.
*/
/*
The program starts by reading the number of test cases t. For each test case, it takes two integers n and x as input. Here, n might represent 
the total number of tasks or items, and x is the amount that can be handled without extra processing. If n is less than or equal to x, no 
additional rounds are needed, so it outputs 0. However, if n is greater than x, it calculates the extra items as n - x. Since in each round, 
only 4 items can be processed, the program computes the number of required rounds using the formula (n - x + 3) / 4, which is a clever way of 
applying ceiling division without using ceil(). This ensures that even if the remaining items aren't perfectly divisible by 4, they are covered 
in a full round. The result is printed for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;

	    if(n>x)
	    {
	       int a=(n-x+3)/4;
	       cout<<a<<endl;
	    }
	    else
	    cout<<"0\n";
	}
}