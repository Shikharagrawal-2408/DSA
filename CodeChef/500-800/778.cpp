/*      Get Lowest Free
Chef goes to the supermarket to buy some items. Luckily there's a sale going on under which Chef gets the following offer:
If Chef buys 3 items then he gets the item (out of those 3 items) having the lowest price as free.
For e.g. if Chef bought 3 items with the cost 6, 2 and 4, then he would get the item with cost 2 as free. So he would only have to pay the 
cost of the other two items which will be 6+4=10.

Chef buys 3 items having prices A, B and C respectively. What is the amount of money Chef needs to pay?

Input Format
The first line will contain an integer T - number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers A,B,C - the prices of the items bought by Chef.

Output Format
For each test case, output the price paid by Chef.

Constraints
1≤T≤100
1≤A,B,C≤10

Input
3
6 2 4
3 3 3
8 4 4

Output
10
6
12

Test case-1: Explained in the problem statement.

Test case-2: Since all the three items have the same price, Chef will get one of them free and will have to pay the cost of the other two 
items which will be 3+3=6.

Test case-3: Chef will get one of the items having price 4 as free and will have to pay the cost of the other two items which will be 8+4=12.
*/
/*
The program calculates the total price Chef needs to pay after applying a supermarket offer where, for every three items, the cheapest one 
is free. It begins by reading t, the number of test cases. For each test case, it reads the prices a, b, and c of the three items. The sum 
of all three prices is calculated, and then the smallest price among them is subtracted using min(a, min(b, c)), since that item will be free. 
The result is stored in d, representing the amount Chef has to pay, and is printed. This process repeats for all test cases.
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
	    
	    int d=a+b+c-min(a,min(b,c));
	    cout<<d<<endl;
	}
}