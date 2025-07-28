/*      Chef Eren
Chef is a very big fan of Eren Yeager.

In the last season of Attack on Titan, there were N episodes numbered from 1 to N.
Each even indexed episode was A minutes long and each odd indexed episode was B minutes long.

Calculate the total duration (in minutes) of the last season.

Input Format
The first line of input contains a single integer T, the number of test cases.
The first and only line of each test case contains three integers N, A, and B, the number of episodes and the durations of 
each even-indexed and odd-indexed episodes respectively in minutes.

Output Format
For each test case, print a single integer on a new line, the total duration of the last season in minutes.

Constraints
1≤T≤100
1≤N≤60
1≤A,B≤60

Input
3
1 2 2
2 3 4
4 20 30

Output
2
7
100

Test case 1: There is only one episode, so there is 1 odd-indexed episode, and 0 even-indexed episode. The total duration of the 
season =0⋅A+1⋅B=0⋅2+1⋅2=2.

Test case 2: There are two episodes with indices {1,2}. Thus, there is 1 odd-indexed episode ({1}), and ({2}). The total duration of the 
season =1⋅A+1⋅B=1⋅3+1⋅4=7.

Test case 3: There are four episodes with indices {1,2,3,4}. Thus, there are 2 odd-indexed episodes ({1,3}), and 2 even-indexed episodes 
({2,4}). The total duration of the season =2⋅A+2⋅B=2⋅20+2⋅30=100.
*/
/*
The total number of episodes is given as N, where episodes are indexed starting from 1. According to the problem, even-indexed 
episodes are each of duration A minutes and odd-indexed episodes are each of B minutes.

To solve this, we first calculate how many even and odd episodes there are. Since episodes start from 1, odd-indexed episodes will 
be more when N is odd. In the code, x = n / 2 gives the number of even-indexed episodes (since for any integer division, the result 
rounds down). The remaining episodes, i.e., (n - x), are the odd-indexed ones. We then multiply the count of even episodes by A, and 
the count of odd episodes by B, and sum both to get the total duration. The formula used is:
Total duration = (even episodes × A) + (odd episodes × B) = (x * A) + ((n - x) * B)
This approach ensures correct calculation for both odd and even values of N efficiently for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    
	    int x=n/2;
	    int t=0;
	    t=(x*a)+(n-x)*b;
	    cout<<t<<endl;
	}
}