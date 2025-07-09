/*
The Two Dishes
Chef prepared two dishes yesterday. Chef had assigned the tastiness T1 and T2 to the first and to the second dish respectively. The tastiness of
 the dishes can be any integer between 0 and N (both inclusive).

Unfortunately, Chef has forgotten the values of T1 and T2 that he had assigned to the dishes. However, he remembers the sum of the tastiness of 
both the dishes - denoted by S.

Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the
 maximum absolute difference?

It is guaranteed that at least one pair {T1,T2} exist such that T1+T2=S, 0≤T1,T2≤N.

Input Format
The first line of input contains a single integer T, denoting the number of testcases. The description of the T testcases follows.
The first and only line of each test case contains two space-separated integers N, S, denoting the maximum tastiness and the sum of tastiness of
the two dishes, respectively.

Output Format
For each testcase, output a single line containing the maximum absolute difference between the tastiness of the two dishes.

Constraints
1≤T≤10 
1≤N≤10 
1≤S≤2⋅10^5
 
Input
3
3 1
4 4
2 3

Output
1
4
1
Explanation:
Test Case 1: The possible pairs of {T1,T2} are {0,1} and {1,0}. Difference in both the cases is 1, hence the maximum possible absolute 
difference is 1.
*/
/*
This program processes multiple test cases where, for each test case, it reads two integers: n and s. While the exact problem statement is not
 provided, the logic appears to compute a maximum value based on a specific constraint involving n and s.

For each test case, the program calculates the minimum between s and 2*n - s, and outputs that value. This can be interpreted as finding the 
maximum number of items or actions that can be taken under a certain balance condition.

Here’s a possible interpretation: imagine there are n positions (or tasks, slots, etc.), and s is some kind of budget, count, or sum that must
 be split between two sides or parts. The formula min(s, 2*n - s) ensures that the result doesn't exceed the limits set by either side. It 
 balances the value s against 2n - s to determine the largest feasible number under both constraints.

The result is printed for each test case on a new line.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

while(t--)
{
    int n,s;
    cin>>n>>s;
    
    int max=min(s,2*n-s);
    cout<<max<<endl;
    
}
return 0;

}
