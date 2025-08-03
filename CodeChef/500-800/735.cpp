/*      Cyclic Quadrilateral
You are given the sizes of angles of a simple quadrilateral (in degrees) A, B, C and D, in some order along its perimeter. 
Determine whether the quadrilateral is cyclic.

Note: A quadrilateral is cyclic if and only if the sum of opposite angles is 180 degree.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers A, B, C and D.

Output
Print a single line containing the string "YES" if the given quadrilateral is cyclic or "NO" if it is not (without quotes).

Constraints
1≤T≤10 
1≤A,B,C,D≤357
A+B+C+D=360

Input
3
10 20 30 300
10 20 170 160
179 1 179 1

Output
NO
YES
NO

Case 1: The sum of two opposite angles A+C=10 ≠ 180.
Case 2: The sum of two opposite angles A+C=10 +170 =180 and B+D=20+160 =180 
Example case 3: The sum of two opposite angles B+D≠180
*/
/*
In this problem, we are given the angles of a quadrilateral and are asked to determine whether it is cyclic or not. 
A quadrilateral is considered cyclic if the sum of each pair of opposite angles is equal to 180 degrees. The input consists of multiple 
test cases, and for each test case, we receive four integers representing the angles of the quadrilateral. According to the properties of 
cyclic quadrilaterals, if either the sum of angle A and C equals 180 or the sum of angle B and D equals 180, then the quadrilateral can be 
considered cyclic. In the provided code, the program only checks if the sum of angles A and C is equal to 180, and if so, it prints "YES"; 
otherwise, it prints "NO". While this may work for the given sample inputs due to the way the angles are arranged, a more robust approach 
would also check if B + D equals 180, since the opposite angle pairs could be in any order. Nonetheless, the program assumes a fixed order 
of angles and uses a simple condition to determine the result for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b ,c,d;
	    cin>>a>>b>>c>>d;
	    
	    if(a+c==180)
	    cout<<"YES\n";
	    
	    else
	    cout<<"NO\n";
	}
}