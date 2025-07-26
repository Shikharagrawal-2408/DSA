/*      Mario and Transformation
Mario transforms each time he eats a mushroom as follows:

If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
Given that Mario was initially normal, find his size after eating X mushrooms.

Input Format
The first line of input will contain one integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing one integer X.

Output Format
For each test case, output in a single line Mario's size after eating X mushrooms.

Print:
NORMAL, if his final size is normal.
HUGE, if his final size is huge.
SMALL, if his final size is small.

Constraints
1≤T≤100
1≤X≤100

Input
3
2
4
12

Output
SMALL
HUGE
NORMAL

Test case 1: Mario's initial size is normal. On eating the first mushroom, he turns huge. On eating the second mushroom, he turns small.
Test case 2: Mario's initial size is normal. On eating the first mushroom, he turns huge. On eating the second mushroom, he turns small. 
On eating the third mushroom, he turns normal. On eating the fourth mushroom, he turns huge.
*/
/*
This program simulates how Mario transforms when he eats mushrooms. According to the transformation rules, starting from NORMAL, Mario follows 
a cyclic pattern: NORMAL → HUGE → SMALL → NORMAL → ..., repeating every 3 mushrooms.

To find Mario’s size after eating X mushrooms, the code cleverly shifts the value of X by adding 2 and then uses x % 3 to determine his final 
state:
If (x + 2) % 3 == 1, then Mario ends up SMALL
If (x + 2) % 3 == 2, then Mario ends up NORMAL
If (x + 2) % 3 == 0, then Mario ends up HUGE

The +2 offset aligns the modulo results with the correct final states based on the initial condition (NORMAL at the start). This logic is 
repeated for each test case. Thus, the program efficiently determines Mario’s transformation state for any number of mushrooms using simple 
arithmetic and modular math.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    x+=2;
	    if(x%3==1)
	    cout<<"SMALL\n";
	    else if(x%3==2)
	    cout<<"NORMAL\n";
	    else
	    cout<<"HUGE\n";
	}
}