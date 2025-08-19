/*      Best of Two
Alice and Bob are playing a game. Each player rolls a standard six-sided die three times. The score of a player is calculated as the sum 
of the two highest rolls. The player with the higher score wins. If both players have the same score, the game ends in a tie.

Determine the winner of the game or if it is a tie.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case contains six space-separated integers A1, A2, A3, B1, B2 and B3​  — the values Alice gets in her 
3 dice rolls, followed by the values which Bob gets in his 3 dice rolls.

Output Format
For each test case, output on a new line Alice if Alice wins, Bob if Bob wins and Tie in case of a tie.

Constraints
1≤T≤10^4

Input
3
3 2 5 6 1 1
4 4 5 6 4 1
6 6 6 6 6 1

Output
Alice
Bob
Tie

Test Case 1: Alice's score is 8=(3+5) which is greater than Bob's score 7=(6+1).
Test Case 2: Alice's score is 9=(5+4) which is less than Bob's score 10=(6+4).
Test Case 3: Alice's score is 12=(6+6) which is same as Bob's score 12=(6+6).
*/
/*
This problem is about comparing the scores of Alice and Bob in a dice game where each rolls three dice. The score is calculated as the sum 
of the two highest rolls out of the three. To compute this efficiently, instead of sorting or finding the top two explicitly, we can take the 
total sum of all three dice rolls and subtract the minimum roll, because that automatically leaves us with the sum of the two largest values. 
For each test case, we read Alice’s three rolls and Bob’s three rolls, calculate their scores using this method, and then compare the two 
scores. If Alice’s score is greater, she wins; if Bob’s is greater, he wins; and if both scores are equal, it results in a tie. This process 
is repeated for all test cases, and the result is printed accordingly.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        // Alice score = total - minimum
        int aliceTotal = A1 + A2 + A3;
        int aliceScore = aliceTotal - min({A1, A2, A3});

        // Bob score = total - minimum
        int bobTotal = B1 + B2 + B3;
        int bobScore = bobTotal - min({B1, B2, B3});

        if (aliceScore > bobScore)
            cout << "Alice\n";
        else if (bobScore > aliceScore)
            cout << "Bob\n";
        else
            cout << "Tie\n";
	}
}