/*      Endless Appetizers
Life is a like a box of of mozzarella sticks. You never know what you're gonna get, but you can predict with 100 percent accuracy that 
it will be a mozzarella stick.

Chef's colleague issued a challenge to Chef: "If you eat more than X mozzarella sticks, I'll give you 30 rupees for each extra one you eat".
For example, if X=5 and Chef eats 8 sticks, he would receive 90 rupees because he ate 3 extra sticks.

You know that the restaurant serves Y mozzarella sticks per plate.
You also know that Chef received R rupees from his colleague as a result of the challenge.

What's the maximum number of plates of mozzarella sticks that Chef could have ordered?

Chef won't order a new plate till he finishes eating all the sticks from the previous one.
However, it's possible that Chef didn't finish all the sticks from the final plate he ordered.
See the explained examples below for more clarification.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of one line of input, containing three space-separated integers 
X,Y, and R — the lower limit on the number of sticks, the number of sticks on a single plate, and the money received by Chef.

Output Format
For each test case, output on a new line the answer: the maximum number of plates Chef could have ordered.

Constraints
1≤T≤10^4
1≤X≤100
1≤Y≤10
0≤R≤3⋅10^4
It is guaranteed that R is a multiple of 30.

Input
4
7 5 30
16 5 0
15 9 120
23 1 2130

Output
2
4
3
94

Test case 1: Chef received 30 rupees; meaning he ate 1 extra stick. Since X=7, this means he must've eaten exactly 8 sticks.
At 5 sticks per plate, Chef would need 2 plates to eat 8 sticks (and two sticks from the second plate will remain uneaten).

Test case 2: Chef received 0 rupees. Since X=16, this means he ate ≤16 sticks.The maximum he could've eaten is exactly 
16; and this would require 4 plates since each plate has 5 sticks.

Test case 3: Chef received 120 rupees, meaning he ate 4 extra sticks.This makes for a total of 15+4=19 sticks, and at 9 sticks per plate 
he would need 3 plates.
*/
/*
In this problem, Chef is rewarded by his colleague for eating more than a certain number X of mozzarella sticks. For each stick eaten beyond 
this threshold X, he receives 30 rupees. Each plate in the restaurant contains Y mozzarella sticks, and we are given the total money R that 
Chef received, which indicates how many extra sticks he ate. Since every extra stick earns 30 rupees, we can compute the total number of 
mozzarella sticks Chef must have eaten as X + (R / 30). This total includes both the required sticks and the extra sticks. Now, since each 
plate contains Y sticks, and Chef can only order a new plate after finishing the previous one, we must determine how many full or partially 
full plates Chef might have ordered to eat that many sticks. This is simply the ceiling of (total sticks eaten) divided by (sticks per plate). 
The code reads the number of test cases T, then for each test case, it calculates the total number of sticks eaten using a = x + (r / 30) and 
prints ceil(a / y), which gives the maximum number of plates Chef could have ordered — even if the last plate wasn’t completely finished. 
This logic ensures that partial plates are counted correctly and efficiently handles all input cases.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,r;
	    cin>>x>>y>>r;
	    
	    int a=x+(r/30);
	   // cout<<ceil((a+y)/y)<<endl;
	   cout << (int)ceil((double)a / y) << endl;
	}
}