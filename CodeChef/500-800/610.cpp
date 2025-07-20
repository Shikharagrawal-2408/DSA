/* Test Score
In a test, there are N problems, each carrying X marks.
In each problem, Chef either received X marks or 0 marks.

Determine whether is it possible for Chef to achieve exactly Y marks.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three integers N,X, and Y, the number of problems, the maximum score for each problem, and the score Chef wants.

Output Format
For each test case, output YES if Chef can achieve exactly Y marks, NO otherwise.

Constraints
1≤T≤100
1≤N≤10
1≤X≤10
0≤Y≤N⋅X

Input
5
1 8 4
3 6 12
4 5 0
10 10 100
8 5 36

Output
NO
YES
YES
YES
NO

Test case 1: There is no way for Chef to score exactly 4 marks.
Test case 2: Chef can score 12 marks by receiving 6 marks in 2 problems and 0 marks in 1 problem.
Test case 3: Chef can score 0 marks by receiving 0 marks in each of the 4 problems.
Test case 4: Chef can score 100 marks by receiving 10 marks in each of the 10 problems.
Test case 5: There is no way for Chef to score exactly 36 marks.
*/
/*
Chef attempts a test with N problems, each carrying X marks. For any given problem, Chef either scores X or 0 — there's no partial marking. The
goal is to determine if Chef can obtain exactly Y marks.

Since each correct answer contributes X marks, the total score Chef gets must be a multiple of X. Therefore, we first check whether Y is 
divisible by X. If not, it's impossible to reach Y marks. Next, even if Y is divisible by X, Chef must not need more than N correct answers 
(because there are only N problems). So, we also check that (Y / X) ≤ N.

If both conditions are satisfied, Chef can achieve exactly Y marks, and we print "Yes". Otherwise, we print "No".
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    //no of problems, maximum score, score chef wants
	    
	    if(y%x==0&& y/x<=n)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
}