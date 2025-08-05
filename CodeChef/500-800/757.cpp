/*      Presents for Cheffina
Chef has fallen in love with Cheffina, and wants to buy N gifts for her. On reaching the gift shop, Chef got to know the following two things:
The cost of each gift is 1 coin.
On the purchase of every 4 th gift, Chef gets the 5 th gift free of cost.
What is the minimum number of coins that Chef will require in order to come out of the shop carrying N gifts?

Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer N, the number of gifts in the shop.

Output Format
For each test case, output on a new line the minimum number of coins that Chef will require to obtain all N gifts.

Constraints
1≤T≤1000
1≤N≤10^9
 
Input
2
5
4

Output
4
4

Test case 1: After purchasing 4 gifts, Chef will get the 5th gift free of cost. Hence Chef only requires 4 coins in order to get 5 gifts.

Test case 2: Chef will require 4 coins in order to get 4 gifts.
*/
/*
Chef wants to buy N gifts for Cheffina, where each gift normally costs 1 coin. However, the shop has a special offer: for every 4 gifts 
that Chef buys, he gets a 5th gift completely free. This means that for every group of 5 gifts, Chef only pays for 4 of them. To find out 
how many coins Chef will need to get N gifts, we need to calculate how many gifts he will get for free under this offer. For every 5 gifts, 
1 is free, so the total number of free gifts is N / 5 (using integer division). Therefore, Chef only needs to pay for the remaining gifts, 
which is N - (N / 5). The code reads the number of test cases T, and for each test case, it calculates this value and prints 
it as the minimum number of coins Chef needs. This approach is efficient and works well even for large values of N, up to 10⁹.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<n-(n/5)<<endl;
	}
}