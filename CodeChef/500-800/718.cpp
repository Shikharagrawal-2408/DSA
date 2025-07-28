/*      Speed Limit Test
Alice is driving from her home to her office which is A kilometers away and will take her X hours to reach.
Bob is driving from his home to his office which is B kilometers away and will take him Y hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.

Input Format
The first line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers 
A,X,B, and Y, the distances and and the times taken by Alice and Bob respectively.

Output Format
For each test case, if Alice is faster, print ALICE. Else if Bob is faster, print BOB. If both are equal, print EQUAL.

Constraints
1≤T≤1000
1≤A,X,B,Y≤1000

Input
3
20 6 20 5
10 3 20 6
9 1 1 1

Output
Bob
Equal
Alice

Test case 1: Since Bob travels the distance between his office and house in 5 hours, whereas Alice travels the same distance of 20 kms 
in 6 hours, BOB is faster.

Test case 2: Since Alice travels the distance of 10 km between her office and house in 3 hours and Bob travels a distance of 20 km 
in 6 hours, they have equal speeds.

Test case 3: Since Alice travels the distance of 9 km between her office and house in 1 hour and Bob travels only a distance of 1 km 
in the same time, ALICE is faster.
*/
/*
This problem compares the average speeds of Alice and Bob based on the distances they travel and the time they take. The average 
speed is calculated as distance divided by time. For each test case, the input gives Alice’s distance A and time X, and Bob’s distance 
B and time Y. Their respective speeds are computed as A/X and B/Y. To determine who is faster, the program compares the two speeds: if 
Alice’s speed is greater, it prints Alice; if Bob’s is greater, it prints Bob; otherwise, it prints Equal. Alternatively, to avoid f
loating-point precision issues, the program could compare their speeds by cross-multiplying: comparing A * Y with B * X, 
which achieves the same result using only integers. Both methods ensure correct and efficient speed comparisons across all test cases.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	    
	    double c=a/x;
	    double d=b/y;
	    
	    double c = (double)a / x;
        double d = (double)b / y;

        if (c > d)
            cout << "Alice\n";
        else if (c < d)
            cout << "Bob\n";
        else
            cout << "Equal\n";
            
	    /*
	    if (a * y > b * x) {
            cout << "Alice" << endl;
        } else if (a * y < b * x) {
            cout << "Bob" << endl;
        } else {
            cout << "Equal" << endl;
        }
        */
	}
}