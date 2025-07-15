/*
Car or Bike
Chef wants to reach home as soon as possible. He has two options:
Travel with his BIKE which takes X minutes.
Travel with his CAR which takes Y minutes.
Which of the two options is faster or do they both take same time?

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X,Y representing the time taken to travel with BIKE and CAR respectively.

Output Format
For each test case, print CAR if travelling with Car is faster, BIKE if travelling with Bike is faster, SAME if they both take the same time.

Constraints
1≤T≤100
1≤X,Y≤10

Input
3
1 5
4 2
6 6

Output
BIKE
CAR
SAME
Test case-1: Travelling with BIKE takes 1 minute while travelling with CAR takes 5 minutes. So travelling with BIKE is faster.
Test case-2: Travelling with BIKE takes 4 minutes while travelling with CAR takes 2 minutes. So travelling with CAR is faster.
Test case-3: Travelling with both BIKE and CAR takes the SAME time i.e. 6 minutes.
*/
/*
This C++ program compares two integer values, x and y, for multiple test cases. Each test case represents a scenario where x might denote the 
cost or time taken by a car, and y for a bike (or any other comparative metric). For each test case, the program checks whether the value of x 
is greater than y. If so, it prints "CAR", suggesting the car is costlier or less preferable. If y is greater than x, it prints "BIKE", implying
the bike is the better option. If both are equal, the output is "SAME", indicating no preference between the two. This structure allows quick 
comparisons between two values across multiple test scenarios in a simple and readable manner.
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
	    
	    if(x>y)
	    cout<<"CAR\n";
	    
	    else if(y>x)
	    cout<<"BIKE\n";
	    else
	    cout<<"SAME\n";
	}
}