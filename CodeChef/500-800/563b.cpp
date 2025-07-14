/*
Count the Notebooks
You know that 1 kg of pulp can be used to make 1000 pages and 1 notebook consists of 100 pages.

Suppose a notebook factory receives N kg of pulp, how many notebooks can be made from that?

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single integer N - the weight of the pulp the factory has (in kgs).

Output Format
For each test case, output the number of notebooks that can be made using N kgs of pulp.

Constraints
1≤T≤100
1≤N≤100

Input
3
1
100
50

Output
10
1000
500

Test case-1: 1 kg of pulp can be used to make 1000 pages which can be used to make 10 notebooks.
Test case-2: 100 kg of pulp can be used to make 100000 pages which can be used to make 1000 notebooks.
Test case-3: 50 kg of pulp can be used to make 50000 pages which can be used to make 500 notebooks.
*/
/*
This C++ program is designed to process multiple test cases, where for each test case, it takes an integer input n and outputs the result of n
multiplied by 10. Here's a paragraph explanation of the code:

The program begins by reading an integer t, which represents the number of test cases. For each test case, it reads an integer n, then 
calculates the product of n and 10, and prints the result on a new line. The multiplication operation (n * 10) suggests that each unit of n is 
being scaled up ten times — which could represent, for example, converting a unit value into tens (e.g., cost per item into total cost for 10 
items). The loop ensures that all test cases are handled efficiently one after another.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<n*10<<endl;
	}
}