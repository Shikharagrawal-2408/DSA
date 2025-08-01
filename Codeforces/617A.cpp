/*   A. Elephant
An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located 
at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the 
minimum number of steps he need to make in order to get to his friend's house.

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

Input
5
Output
1

Input
12
Output
3

Note
In the first sample the elephant needs to make one step of length 5 to reach the point x.

In the second sample the elephant can get to point x if he moves by 3, 5 and 4. There are other ways to get the optimal answer but the 
elephant cannot reach x in less than three moves.
*/
/*In this problem, the elephant wants to reach his friend's house located at position x on a number line, starting from position 0. 
In each move, he can jump forward by 1 to 5 units. The task is to determine the minimum number of steps required to reach exactly at position x.

The most efficient way for the elephant to move is to take the largest possible steps, i.e., steps of size 5. So, to calculate the 
minimum number of steps, we divide the distance x by 5. However, if x is not exactly divisible by 5, then there will be some remaining 
distance (1 to 4 units) after making x/5 full jumps. In such a case, one extra step is needed to cover the remaining distance.

The expression (n + 4) / 5 handles both cases:
If n is divisible by 5 (e.g., 5, 10), it simply returns n/5.
If n is not divisible by 5 (e.g., 6, 7, 8), adding 4 ensures that the integer division automatically rounds up, effectively calculating 
the ceiling of n/5.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

    cout<<(n+4)/5<<endl;
}