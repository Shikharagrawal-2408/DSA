/*      Finding Shoes
Chef has N friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his N friends. 
Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had M left shoes.

What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his N friends?

For example, if N=2, M=4, then Chef already has 4 left shoes, so he must buy 2 extra right shoes to form 2 pairs of shoes.

Therefore Chef must buy at least 2 extra shoes to ensure that he is able to get N=2 pairs of shoes.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers N and M - the number of Chef's friends and the number of left shoes Chef has.

Output Format
For each test case, output the minimum number of extra shoes that Chef will have to buy to ensure that he is able to get N pairs of shoes.

Constraints
1≤T≤100
1≤N≤100
0≤M≤100

Input
3
2 4
6 0
4 3

Output
2
12
5

Test Case 1: Discussed in the problem statement
Test Case 2: Chef initially has no left shoes. He must buy 6 more left shoes and 6 more right shoes to form 6 pairs of shoes.
Test Case 3: Chef initially has 3 left shoes. He must buy 1 more left shoe and 4 more right shoes to form 4 pairs of shoes.
*/
/*
In this problem, Chef wants to give a pair of shoes — one left and one right — to each of his N friends, which means he needs a total of N 
pairs. However, he already has M left shoes available. To make complete pairs, he will definitely need to buy N right shoes (since he has no 
right shoes initially), and if the number of left shoes he already has (M) is less than N, he’ll also need to buy the remaining (N - M) left 
shoes. But if M is already greater than or equal to N, then he doesn’t need to buy any more left shoes. So, the total number of extra shoes 
Chef has to buy is the sum of N right shoes and max(0, N - M) additional left shoes. This logic is implemented in the code and repeated for 
each test case using a loop.
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
	    
	    cout<<n+max(0,n-m)<<endl;
	}
}