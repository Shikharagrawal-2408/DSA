/*
Air Conditioner Temperature
There are three people sitting in a room - Alice, Bob, and Charlie. They need to decide on the temperature to set on the air conditioner. 
Everyone has a demand each:

Alice wants the temperature to be at least A degrees.
Bob wants the temperature to be at most B degrees.
Charlie wants the temperature to be at least C degrees.
Can they all agree on some temperature, or not?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line which contains three integers - A,B,C.

Output Format
For each test case, output on a new line, "Yes" or "No". "Yes", if they can decide on some temperature which fits all their demands. Or "No", if
no temperature fits all their demands.

You may print each character of the string in either uppercase or lowercase (for example, the strings NO, nO, No, and no will all be treated as 
identical).

Constraints
1≤T≤100
1≤A,B,C≤100

Input
2
30 35 25
30 35 40

Output
Yes
No

Test Case 1: Alice wants the temperature to be ≥30, Bob wants it to be ≤35, and Charlie wants it to be ≥25. The temperatures 30,31,32,33,34,35 
all satisfy all their demands. So they can choose any of these 6 temperatures, and so the answer is "Yes".

Test Case 2: Alice wants the temperature to be 
≥30, Bob wants it to be 
≤35, and Charlie wants it to be 
≥40. A number can't be both 
≥40, and 
≤35. So there is no temperature that satisfies all their demands. So the answer is "No".
*/
/*
This program checks a specific condition involving three integers a, b, and c for multiple test cases.

For each test case, the user inputs three integers. The program then checks whether b is less than either a or c. If b is smaller than any one 
of them, it prints "No", indicating the condition is not satisfied. Otherwise, if b is greater than or equal to both a and c, it prints "Yes".

This logic is executed for each test case provided in the input.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;

	    if(b<a||b<c)
	    cout<<"No\n";
	    else
	    cout<<"Yes\n";
	}
}