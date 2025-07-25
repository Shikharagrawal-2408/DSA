/*Jenga Night
Chef hosts a party for his birthday. There are N people at the party. All these N people decide to play Jenga.

There are X Jenga tiles available. In one round, all the players pick 1 tile each and place it in the tower.

The game is valid if:
All the players have a tile in each round;
All the tiles are used at the end.

Given 
N and X, find whether the game is valid.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing two space-separated integers N and X representing the number of people at the party 
and the number of available tiles respectively.

Output Format
For each test case, output in a single line YES if the game is valid, else output NO.

Constraints
1≤T≤10 
1≤N,X≤1000

Input
3
3 3
4 2
2 4

Output
YES
NO
YES

Test case 1: The game will last for 1 round after which the tiles will finish.
Test case 2: There are not enough Jenga tiles for everyone to place.
Test case 3: The game will last for 2 rounds as after round 2 all Jenga tiles are used.
*/
/*
In this problem, Chef is organizing a party where N people decide to play Jenga using X tiles. In each round of the game, every player picks 
exactly one tile to place in the tower. The game is only considered valid if each player gets a tile in every round, and all the tiles are used 
up completely by the end.

This means the total number of tiles X must be divisible by N (so everyone gets a tile in each round), and there must be enough tiles for at 
least one round (i.e., X ≥ N). If both conditions are satisfied, the game setup is valid and we print "Yes". Otherwise, it's not possible to 
play the game fairly and we print "No".
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    //pepel tiles
	    
	    if(x>=n && x%n==0)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
}