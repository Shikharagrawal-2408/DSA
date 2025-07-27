/*      X Jumps
Chef is currently standing at stair 0 and he wants to reach stair numbered X.

Chef can climb either Y steps or 1 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered X.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers X and Y denoting the number of stair 
Chef wants to reach and the number of stairs he can climb in one move.

Output Format
For each test case, output the minimum number of moves required by him to reach exactly the stair numbered X.

Constraints
1≤T≤500
1≤X,Y≤100

Input
4
4 2
8 3
3 4
2 1

Output
2
4
3
2

Test case 1: Chef can make 2 moves and climb 2 steps in each move to reach stair numbered 4.

Test case 2: Chef can make a minimum of 4 moves. He can climb 3 steps in 2 of those moves and 1 step each in remaining 
2 moves to reach stair numbered 8.

Test case 3: Chef can make 3 moves and climb 1 step in each move to reach stair numbered 3.

Test case 4: Chef can make 2 moves and climb 1 step in each move to reach stair numbered 2.
*/
/*
ChatGPT said:
We can also solve this problem by using the approach: cout << (x / y + x % y) << endl;. In this method, we divide the total number of 
stairs x by the number of stairs Chef can jump in one big move y. The quotient x / y tells us how many full jumps Chef can make using the 
larger step size y. However, it's possible that after these big jumps, there are still some stairs left to climb to reach exactly stair x. 
The remainder x % y gives us the number of stairs that still need to be covered using 1-step moves. Therefore, the total number of moves 
Chef needs is the sum of full jumps and the remaining 1-step moves, i.e., x / y + x % y. This ensures that Chef reaches stair 
x using the minimum number of moves, by prioritizing bigger jumps first and covering any leftover stairs with smaller 1-step moves.
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
	    
	    cout<<(x/y +x%y)<<endl;
	}
}