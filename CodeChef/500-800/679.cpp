/*      The Last Levels
Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.

There are X levels remaining in the game, and each level takes Chef Y minutes to complete. To protect against eye strain, 
Chef also decides that every time he completes 3 levels, he will take a Z minute break from playing. Note that there is no need to 
take this break if the game has been completed.

How much time (in minutes) will it take Chef to complete the game?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of input will contain three space-separated integers X, Y, and Z.

Output Format
For each test case, output on a new line the answer — the length of Chef's gaming session.

Constraints
1≤T≤100
1≤X≤100
5≤Y≤100
5≤Z≤15

Input
4
2 12 10
3 12 10
7 20 8
24 45 15

Output
24
36
156
1185

Test case 1: 2 12 10

X = 2 (2 levels remain)
Y = 12 (each level takes 12 minutes)
Z = 10 (Chef would take a 10-minute break every 3 levels, but since there are only 2 levels, no break is needed)
Since there are only 2 levels, and no break is needed (because Chef takes a break only after every 3 levels).

The total time = X × Y = 2 × 12 = 24 minutes.


Test case 3: 7 20 8

X = 7 (7 levels remain)
Y = 20 (each level takes 20 minutes)
Z = 8 (Chef takes an 8-minute break after every 3 levels)
Now, let's break this down:
Chef completes the first 3 levels: 3 x 20 = 60 minutes.
After completing these 3 levels, Chef takes an 8-minute break.
Chef completes another 3 levels: 3 x 20 = 60 minutes.
After completing these 3 levels, Chef takes another 8-minute break.
Now, Chef completes the remaining 1 level: 1 x 20 = 20 minutes.

So, the total time = 60 + 8 + 60 + 8 + 20 = 156 minutes.
*/
/*
To calculate the total time Chef needs to finish the game, we start by multiplying the number of levels x with the time per level y, 
which gives the total gameplay time without breaks. Since Chef takes a break of z minutes after every 3 levels, we need to add additional 
time for these breaks. The number of breaks is generally x / 3 (using integer division). However, if the total number of levels x is exactly 
divisible by 3, it means the last break would fall after the final level, which is not needed. So in that case, we subtract one break from 
the total. This logic is handled by checking if x % 3 == 0, and subtracting z from the total time when true. This ensures the break after 
the last level is not mistakenly included. Thus, the final formula becomes x * y + (x / 3) * z, and we subtract one z if x is divisible by 3.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int ans;
	    if(x%3==0)
	    ans=x*y+(x/3)*z-z;

	    else
	    ans=x*y+(x/3)*z;
	    
	    cout<<ans<<endl;
	}
}