/*
Exams
In Chefland, there are X schools, and each school has Y students.
The year end results are in and a total of Z students passed the exams.

Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 50%.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three space-separated integers X,Y, and Z, as mentioned in the statement.
Output Format
For each test case, output on a new line, YES, if the total number of students who passed in Chefland was strictly greater than 50%,
otherwise print NO.

Constraints
1≤T≤2*10 ^4
1≤X≤5
1≤Y≤50
0≤Z≤X⋅Y

Input
2
2 10 12
2 10 3

Output
YES
NO
Test case 1: The total number of students appeared were 2⋅10=20. The number of students passed were 12.Thus, number of students who passed are 
60%, which is strictly greater than 50%.
Test case 2: The total number of students appeared were 2⋅10=20. The number of students passed were 3.
Thus, number of students who passed are 15%, which is less than 50%.
*/
/*
This program evaluates a condition involving three integers: x, y, and z, for multiple test cases. For each test case, it reads the values of
these three integers and then checks whether the expression 2 * z > x * y holds true.

If the condition is true, it prints "YES"; otherwise, it prints "NO". The check is performed using a ternary operator for concise output. The
 expression essentially compares twice the value of z with the product of x and y.

Although the exact context of the problem isn't provided, this kind of logic is commonly seen in problems involving capacity checks, area versus 
requirement comparisons, or resource constraints. For instance, if x * y represents total space or maximum capacity, and 2 * z represents
a requirement (like space needed for z people with 2 units each), the program determines if the requirement exceeds the capacity.
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
	    cout<<(2*z>x*y?"YES\n":"NO\n");
	}
}