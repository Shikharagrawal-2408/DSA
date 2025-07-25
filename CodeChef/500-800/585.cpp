/*
Nearest Exit
There are two exits in a bus with 100 seats:
First exit is located beside seat number 1.
Second exit is located beside seat number 100.
Seats are arranged in a straight line from 1 to 100 with equal spacing between any 2 adjacent seats.

A passenger prefers to choose the nearest exit while leaving the bus.

Determine the exit taken by passenger sitting on seat X.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists a single integer X, denoting the seat number.

Output Format
For each test case, output LEFT if the passenger chooses the exit beside seat 1, RIGHT otherwise.

Constraints
1≤T≤100
1≤X≤100

Input
6
1
50
100
30
51
73

Output
LEFT
LEFT
RIGHT
LEFT
RIGHT
RIGHT

Test case 1: The exit is located beside seat 1. Hence, the passenger can take this exit without moving to any other seat.
Test case 2: To take exit at seat 1, the passenger needs to move 49 seats. However, to take the exit at seat 100, the passenger needs to move 50
seats. Thus, exit at seat 1 is closer.
Test case 3: The exit is located beside seat 100. Hence, the passenger can take this exit without moving to any other seat.
Test case 4: To take exit at seat 1, the passenger needs to move 29 seats. However, to take the exit at seat 100, the passenger needs to move 70
seats. Thus, exit at seat 1 is closer.
*/
/*
This program determines the direction based on the value of an integer x for multiple test cases.

For each test case, the program reads an integer x. If x is greater than or equal to 51, it prints "Right", indicating that the value falls on 
the "Right" side of a hypothetical scale. Otherwise, if x is less than 51, it prints "Left", indicating it lies on the "Left" side. This 
decision is made for every test case using a simple conditional check inside a loop.
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
	    
	    if(x>=51)
	    cout<<"Right\n";
	    else
	    cout<<"Left\n";
	}
}