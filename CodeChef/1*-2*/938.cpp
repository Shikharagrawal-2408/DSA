/*
Vaccine Dates
Chef has taken his first dose of vaccine D days ago. He may take the second dose no less than L days and no more than R days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers D,L,R.
Output Format
For each test case, print a single line containing one string - "Too Early" (without quotes) if it's too early to take the vaccine, "Too Late" 
(without quotes) if it's too late to take the vaccine, "Take second dose now" (without quotes) if it's the correct time to take the vaccine.

Constraints
1≤T≤10 
1≤D≤10 
1≤L≤R≤10 

Input
4
10 8 12 
14 2 10
4444 5555 6666 
8 8 12

Output
Take second dose now
Too Late
Too Early
Take second dose now
Explanation:
Test case 1: The second dose needs to be taken within 8 to 12 days and since the Day 10 lies in this range, we can take the second dose now.

*/
/*
This program determines the appropriate message to display based on when a person is taking their second dose of a vaccine. For each test case, the program reads three integers: d, l, and r. Here, d represents the day the person is planning to take the second dose, while l and r represent the acceptable range of days (inclusive) during which the second dose should ideally be taken.

The logic checks where the value of d lies in relation to the range [l, r]:

If d is within the range (i.e., d >= l and d <= r), the program prints "Take second dose now".

If d is greater than r, it means the person is too late for the dose, so it prints "Too Late".

If d is less than l, the person is too early, so it prints "Too Early".

This kind of check is typical in scheduling or deadline-based logic, ensuring actions are taken within a specific timeframe.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int d,l,r;
	    cin>>d>>l>>r;
	    
	    if(d>=l && d<=r)
	        cout<<"Take second dose now\n";

	    else if(d>r)
	        cout<<"Too Late\n";
	    else
	        cout<<"Too Early\n";
	}
}