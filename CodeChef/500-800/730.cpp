/*      Pass or Fail
Chef is struggling to pass a certain college course. The test has a total of N questions, each question carries 3 marks for a correct 
answer and −1 for an incorrect answer.  Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got 
X questions correct and the rest of them incorrect. For Chef to pass the course he must score at least P marks.

Will Chef be able to pass the exam or not?

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers N,X,P.

Output Format
For each test case output "PASS" if Chef passes the exam and "FAIL" if Chef fails the exam.

Constraints
1≤T≤1000
1≤N≤100
0≤X≤N
0≤P≤3⋅N

Input
3
5 2 3
5 2 4
4 0 0

Output
PASS
FAIL
FAIL

Test case 1: Chef gets 2 questions correct giving him 6 marks and since he got 3 questions incorrect so he faces a penalty of −3. 
So Chef's final score is 3 and the passing marks are also 3, so he passes the exam.

Test case 2: Chef's total marks are 3 and since the passing marks are 4, Chef fails the test.

Test case 3: Chef got all the problems wrong and thus his total score is −4. Since the passing marks are 0, Chef fails the exam.
*/
/*
In this problem, Chef is attempting an exam with N questions. Each correct answer gives +3 marks, and each incorrect answer deducts -1 mark. 
Chef attempts all the questions, and we are given that he got X questions correct. The rest N - X are incorrect. To pass, Chef must score at 
least P marks.

For each test case:
Chef's total marks can be calculated using the formula:
score = (X × 3) + ((N - X) × -1)
which simplifies to:
score = (X × 3) - (N - X)

We compare this score with the required passing mark P. If the score is greater than or equal to P, Chef passes. Otherwise, he fails.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x,p;
	    cin>>n>>x>>p;
	    
	    if(p<=((x*3)-(n-x)))
	    cout<<"PASS\n";
	    else
	    cout<<"FAIL\n";
	}
}