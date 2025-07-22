/* Maximise the Tastiness
Chef is making a dish that consists of exactly two ingredients. He has four ingredients A,B,C and D with tastiness a,b,c, and d respectively. 
He can use either A or B as the first ingredient and either C or D as the second ingredient.

The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains four space-separated integers a,b,c, and d — the tastiness of the four ingredients.

Output Format
For each test case, output on a new line the maximum possible tastiness of the dish that chef can prepare.

Constraints
1≤T≤100
1≤a,b,c,d≤100

Input
2
3 5 6 2
16 15 5 4

Output
11
21

Test case 1: Chef can prepare a dish with ingredients B and C with a tastiness of 5+6=11.
Test case 2: Chef can prepare a dish with ingredients A and C with a tastiness of 16+5=21.
*/
/*
In this problem, Chef wants to prepare a dish using exactly two ingredients — one from the first group (A or B) and one from the second group 
(C or D). Each ingredient has a given tastiness value, and the goal is to maximize the total tastiness of the dish. For every test case, four 
integers a, b, c, and d are provided, which represent the tastiness of ingredients A, B, C, and D respectively. To find the most delicious 
combination, the program computes the maximum value between A and B and the maximum value between C and D, then adds these two maximums together.
This sum represents the maximum possible tastiness for that test case. The process is repeated for all given test cases, and the result is 
printed for each on a new line. This approach ensures that Chef always selects the best possible pair of ingredients for each dish.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    int n=max(a,b)+max(c,d);
	    cout<<n<<endl;
	}
}