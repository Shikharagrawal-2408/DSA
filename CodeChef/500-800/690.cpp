/*      Chessboard Distance
The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(|X1-X2|,|Y1-Y2|).
You are given two points (X1,Y1) and (X2,Y2). Output their Chessboard Distance.

Note that, ∣P∣ denotes the absolute value of integer P. For example, ∣−4∣=4 and ∣7∣=7.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input containing 4 space separated integers - X1,Y1,X2,Y2 - as defined in the problem statement.
Output Format
For each test case, output in a single line the chessboard distance between (X1,Y1) and (X2,Y2)

Constraints
1≤T≤1000
1≤ X1,Y1,X2,Y2 ≤10^5

Input
3
2 4 5 1
5 5 5 3
1 4 3 3

Output
3
2
2

In the first case, the distance between (2,4) and (5,1) is max(∣2−5∣,∣4−1∣)=max(∣−3∣,∣3∣)=3.
In the second case, the distance between (5,5) and (5,3) is max(∣5−5∣,∣5−3∣)=max(∣0∣,∣2∣)=2.
In the third case, the distance between (1,4) and (3,3) is max(∣1−3∣,∣4−3∣)=max(∣−2∣,∣1∣)=2.
*/
/*
In this problem, you're asked to calculate the Chessboard Distance between two points on a Cartesian plane. The Chessboard 
Distance is defined as the maximum of the absolute differences in the x-coordinates and the y-coordinates. This is because in 
chess (especially with king-like movement), the number of moves required to go from one square to another is determined by how 
far apart the two squares are along the most distant axis. In the code, for each test case, we read the coordinates of two points 
(x, y) and (n, m) and compute the absolute differences abs(x - n) and abs(y - m). Then, we simply take the maximum of these two 
values using max() to get the chessboard distance and print it. This ensures that we get the correct number of moves it would take 
if one could move horizontally, vertically, or diagonally one unit per move — just like a king in chess.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,n,m;
	    cin>>x>>y>>n>>m;
	    
	    cout<<max(abs(x-n),abs(y-m))<<endl;
	}
}