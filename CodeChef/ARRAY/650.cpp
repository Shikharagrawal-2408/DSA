/*
Find maximum in an Array
Given a list of N integers, representing height of mountains. Find the height of the tallest mountain.

Input:
First line will contain T, number of testcases. Then the testcases follow.
The first line in each testcase contains one integer, N.
The following line contains N space separated integers: the height of each mountains.

Output:
For each testcase, output one line with one integer: the height of the tallest mountain for that test case.

Constraints
1≤T≤10
1≤N≤100000
0≤ height of each mountain ≤10^9

Input
1
5
4 7 6 3 1

Output
7
*/
/*
This program reads multiple test cases and, for each one, finds the maximum number in a list of n integers.

For each test case:

It first reads an integer n, representing the number of elements.

It then initializes a variable max to 0, which will store the maximum value found so far.

The program then reads n integers one by one in a loop. For each input number h, it checks whether h is greater than the current max.
If so, it updates max to h.

After processing all n numbers for that test case, it prints the maximum value.

This is a simple and efficient solution to the problem of finding the largest number in a sequence, making use of a linear scan and 
constant-time comparisons.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    
	   long long int max = 0;
        for (long long  int i = 0; i < n; i++) {
            int h;
            cin >> h;
            if (h > max)
                max = h;
        }
        cout << max << endl;
    }
}