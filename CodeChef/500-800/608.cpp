/*Minimum Cars required 
A single car can accommodate at most 4 people. N friends want to go to a restaurant for a party. Find the minimum number of cars required to 
accommodate all the friends.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - denoting the number of friends.

Output Format
For each test case, output the minimum number of cars required to accommodate all the friends.

Constraints
1≤T≤1000
2≤N≤1000

Input
4
4
2
7
98

Output
1
1
2
25

Test Case 1: There are only 4 friends and a single car can accommodate 4 people. Thus, only 1 car is required.
Test Case 2: There are only 2 friends and a single car can accommodate 4 people. Thus, only 1 car is required
Test Case 3: There are 7 friends and 2 cars can accommodate 8 people. Thus, 2 cars are required.
*/
/*
To determine the minimum number of cars required to accommodate all the friends, we observe that each car can hold up to 4 people. Given the 
number of friends n, we need to divide n by 4 and round up to the nearest whole number since even one extra person would require a new car. This
is achieved using the ceil(n / 4.0) function in C++, which ensures that we always round up when the division does not result in a whole number.
The program reads multiple test cases and prints the minimum number of cars required for each, ensuring that all friends can be accommodated.
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
	    
	    cout<<ceil(n/4.0)<<endl;
	    //cout << (n + 3) / 4 << endl;
	}
}