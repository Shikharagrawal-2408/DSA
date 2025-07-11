/*
CRED Coins
For each bill you pay using CRED, you earn X CRED coins.
At CodeChef store, each bag is worth 100 CRED coins.

Chef pays Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y.

Output Format
For each test case, output in a single line - the maximum number of bags Chef can get from the CodeChef store.

Constraints
1≤T≤100
1≤X,Y≤1000

Input
3
10 10
20 4
70 7

Output
1
0
4

Test Case 1: For each bill payment, one receives 10 CRED coins. Chef pays 10 bills using CRED. Thus, he receives 100 CRED coins. Chef can get 1
bag from the CodeChef store using these coins.
Test Case 2: For each bill payment, one receives 20 CRED coins. Chef pays 4 bills using CRED. Thus, he receives 80 CRED coins. Chef cannot get 
any bag from the CodeChef store using these coins.
Test Case 3: For each bill payment, one receives 70 CRED coins. Chef pays 7 bills using CRED. Thus, he receives 490 CRED coins. Chef can get at 
most 4 bags from the CodeChef store using these coins.
*/
/*
The given program calculates a percentage of a number, commonly used in discount or commission-based problems. It takes an integer t, 
representing the number of test cases. For each test case, it takes two integers: x and y. The intention is to calculate what is y percent of 
x, which is done by the expression x * y / 100. This result is then printed to the console. The code runs the loop t times, ensuring that each 
input pair is handled separately and produces the corresponding percentage value.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

while(t--)
{
    int x,y;
    cin>>x>>y;
    
    cout<<x*y/100<<endl;
}
}