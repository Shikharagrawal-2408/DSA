/*
Janmansh and Assignments
Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts to do the assignments at X pm. Each assignment takes him 
1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer X - the time when Janmansh starts doing the assignments.

Output Format
For each test case, output Yes if he can complete the assignments on time. Otherwise, output No.

You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).

Constraints
1≤T≤10
1≤X≤9

Input
2
7
9

Output
Yes
No
Explanation:
Test case-1: He can start at 7pm and finish by 10 pm. Therefore he can complete the assignments.
Test case-2: He can not complete all the 3 assignments if he starts at 9 pm.
*/
/*
This program processes multiple test cases to check whether a given condition holds true for an integer x. For each test case, it reads a 
single integer x and then evaluates whether adding 3 to x results in a value that is less than or equal to 10.

If the condition (x + 3 <= 10) is true, it prints "Yes"; otherwise, it prints "No". The program uses a ternary operator for concise conditional 
output instead of a standard if-else block. This shorthand improves readability and is useful when the logic is simple, like choosing between 
two outputs.

This type of logic is often used in scenarios such as eligibility checks (e.g., whether there’s room for more items in a list, if a player 
can make a move within constraints, or if a resource limit hasn’t been exceeded).
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	   // if(x+3<=10)
	   // cout<<"Yes\n";
	    
	   // else
	   // cout<<"No\n";
	    
	    cout<<(x+3<=10?"Yes\n":"No\n");
	}
}