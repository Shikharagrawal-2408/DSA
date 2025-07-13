/*
Expert Setter
A problem setter is called an expert if at least 50% of their problems are approved by Chef.

Munchy submitted X problems for approval. If Y problems out of those were approved, find whether Munchy is an expert or not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a two space-separated integers X and Y - the number of problems submitted and the number of problems that were 
approved by Chef.

Output Format
For each test case, output on a new line YES, if Munchy is an expert. Otherwise, print NO.

Constraints
1≤T≤1000
1≤Y≤X≤10 

Input
4
5 3
1 1
4 1
2 1

Output
YES
YES
NO
YES

Test case 1: We are given that 3 out of 5 problems were approved. Thus, 60% of the problems were approved. Since at least 50% of the problems 
were approved, Munchy is an expert.
Test case 2: We are given that 1 out of 1 problems were approved. Thus, 100% of the problems were approved. Since at least 50% of the problems 
were approved, Munchy is an expert.
Test case 3: We are given that 1 out of 4 problems were approved. Thus, 25% of the problems were approved. Since at least 50% of the problems 
were not approved, Munchy is not an expert.
Test case 4: We are given that 1 out of 2 problems were approved. Thus, 50% of the problems were approved. Since at least 50% of the problems 
were approved, Munchy is an expert.
*/
/*
This C++ program is designed to determine whether a certain percentage condition is met based on user input. Specifically, for each test case, it
takes two integers x and y, and checks whether y is at least 50% of x. To do this, it calculates the expression (y * 100) / x to get the 
percentage value. If this percentage is greater than or equal to 50, the program outputs "YES"; otherwise, it prints "NO".

The program starts by reading an integer t, which denotes the number of test cases. It then enters a loop that runs t times, processing each 
test case individually. Within the loop, it reads the values of x and y and performs the percentage calculation. To avoid any possible integer 
overflow (especially when dealing with large values), it is recommended to cast the multiplication to long long as in 1LL * y * 100 / x, 
ensuring safe arithmetic.

This type of logic is commonly used in competitive programming problems where a simple comparison based on percentage or threshold is required. 
The use of concise conditional statements makes the solution efficient and readable.
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
	   // cout<<(y*100/x)<<endl;
	    if((y*100/x)>=50)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}

}
