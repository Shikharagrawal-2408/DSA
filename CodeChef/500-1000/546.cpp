/*
Minimum Pizzas
Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.

Find the minimum number of pizzas they should order to satisfy their appetite.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two integers N and X, the number of friends and the number of slices each friend wants respectively.

Output Format
For each test case, output the minimum number of pizzas required.

Constraints
1≤T≤100
1≤N,X≤10

Input
4
1 5
2 6
4 3
3 5

Output
2
3
3
4
Explanation:
Test case 1: There is only 1 friend who requires 5 slices. If he orders 1 pizza, he will get only 4 slices. Thus, at least 2 pizzas should be
ordered to have required number of slices.
Test case 2: There are 2 friends who require 6 slices each. Thus, total 12 slices are required. To get 12 slices, they should order 3 pizzas.
Test case 3: There are 4 friends who require 3 slices each. Thus, total 12 slices are required. To get 12 slices, they should order 3 pizzas.
Test case 
4: There are 3 friends who require 5 slices each. Thus, total 15 slices are required. To get 15 slices, they should order at least 4 pizzas.
*/
/*
This C++ program calculates the minimum number of pizzas required for a group of friends. Each pizza contains 4 slices, and each of the n 
friends wants x slices. The total number of slices needed is n * x. If this total is divisible by 4, then exactly (n * x) / 4 pizzas are 
required. However, if it's not perfectly divisible, an extra pizza is needed to cover the remaining slices, hence ((n * x) / 4) + 1 is computed.
The code processes multiple test cases, and for each test case, it takes inputs n and x, computes the total slices, and prints the minimum 
number of pizzas required accordingly.
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
	    
	    //n no of friend
	    //x slices respectivly
	    
	    //cout<<(n * x + 3) / 4;
	    
	    if((n*x)%4==0)
	    cout<<(n*x)/4<<endl;
	    
	    else
	        cout<<((n*x)/4)+1<<endl;
	}
}