/*  Chess Ratings
Alice has recently started playing Chess. Her current rating is X. She noticed that when she wins a game, her rating increases by 8 points.

Can you help Alice in finding out the minimum number of games she needs to win in order to make her rating greater than or equal to Y?

Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first line of each test case contains two integers X and Y, as described in the problem statement.

Output Format
For each test case, output the minimum number of games that Alice needs to win in order to make her rating greater than or equal to Y.

Constraints
1≤T≤10 
1≤X≤Y≤10 

Input
4
10 10
10 17
10 18
10 19

Output
0
1
1
2

Test case 1: Since Alice's current rating X is already equal to her desired rating Y, she doesn't need to win any game.
Test case 2: Alice's current rating is 10. After winning 1 game, her rating will become 10+8=18, which is greater than her desired rating of 
17. Thus, she has to win at least 1 game.

Test case 3: Alice's current rating is 10. After winning 1 game, her rating will become 10+8=18, which is equal to her desired rating of 18. 
Thus, she has to win at least 1 game.

Test case 4: Alice's current rating is 10. After winning 1 game, her rating will become 18, which is less than her desired rating of 19. She 
will need to win one more game in order to make her rating 26, which is greater than 19. Thus, she has to win at least 2 games.
*/
/*
In this approach, we calculate how many games Alice needs to win to increase her current rating X to at least Y, knowing that each win gives 
her 8 points.

For each test case:
First, we find the difference between the desired rating and current rating, i.e., Y - X.
If the difference is zero or negative, it means Alice’s rating is already sufficient, and she doesn’t need to win any games.
Otherwise, we divide the difference by 8 (since each game increases the rating by 8 points). Since we want to ensure the rating is at least Y, 
and we can’t win a fraction of a game, we take the ceiling of this division using ceil((y - x) / 8.0).
This ensures we round up to the nearest whole number if needed.

This logic efficiently handles small inputs and directly gives the minimum number of games required.
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
	    
	    cout<<ceil((y-x)/8.0)<<endl;
	    /*
	    int diff = y - x;
        if (diff <= 0) {
            cout << 0 << endl;
        } else {
            cout << (diff + 7) / 8 << endl;
        }
        */
	}
}