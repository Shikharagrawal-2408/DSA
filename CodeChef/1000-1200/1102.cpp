/*
Football
A football competition has just finished. The players have been given points for scoring goals and points for committing fouls. Now, it is up to
 Alex to find the best player in the tournament. As a programmer, your job is to help Alex by telling him the highest number of points achieved 
 by some player.

You are given two sequences A1,A2,...An and B1,B2,...Bn. For each valid i, player i scored Ai goals and committed Bi fouls. For each goal, the
player that scored it gets 20 points, and for each foul, 10 points are deducted from the player that committed it. However, if the resulting 
number of points of some player is negative, this player will be considered to have 0 points instead.

You need to calculate the total number of points gained by each player and tell Alex the maximum of these values.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,...An.
The third line contains N space-separated integers B1,B2,...Bn.

Output
For each test case, print a single line containing one integer ― the maximum number of points.

Constraints
1≤T≤100
1≤N≤150

Input
1
3
40 30 50
2 4 20

Output
800
0

Example case 1: The first player gets 800 points for scoring goals and has 20 points deducted for fouls. Likewise, the second player gets
 560 points and the third player gets 800 points. The third player is the one with the maximum number of points.
*/
/*
This program evaluates the maximum score a participant can achieve in a competition-like setting based on two performance metrics for each case.

For every test case: The program reads an integer n, representing the number of participants (or events).

It then reads two arrays:
arr1[] which contains the number of problems solved by each participant,
arr2[] which contains the number of wrong submissions (or penalties) by each participant.

The score for each participant is calculated using the formula:
score = (number of problems solved × 20) - (number of penalties × 10)

After computing this score for each participant, the program keeps track of the maximum score encountered across all participants. It finally
prints this maximum value for each test case.

This logic simulates a scoring system commonly used in contests, where correct answers contribute positively and penalties (like wrong answers 
or time penalties) reduce the total score.

If a score is negative, it's simply ignored in terms of maximizing, as the program always stores the highest positive (or zero) score obtained.
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
	    int arr1[n];
	    for(int i=0;i<n;i++)
	    cin>>arr1[i];
	    
	    int arr2[n];
	    for(int i=0;i<n;i++)
	    cin>>arr2[i];
	    
	    int max=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        int temp=arr1[i]*20-arr2[i]*10;
	        if(max<temp)
	        max=temp;
	        temp=0;
	    }
	    cout<<max<<"\n";	    
	}
}