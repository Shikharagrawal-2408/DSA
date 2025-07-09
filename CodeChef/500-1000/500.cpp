/*
Greater Average
You are given 3 numbers A,B, and C.

Determine whether the average of A and B is strictly greater than C or not?

NOTE: Average of A and B is defined as (A+B)/2

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 3 integers A,B, and C.

Output Format
For each test case, output YES if average of A and B is strictly greater than C, NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as 
identical).

Constraints
1≤T≤1000
1≤A,B,C≤10

Input
5
5 9 6
5 8 6
5 7 6
4 9 8
3 7 2

Output
YES
YES
NO
NO
YES
*/
/*
This program processes multiple test cases to determine whether the average of two numbers is strictly greater than a third number. For each 
test case, it reads three integers: a, b, and c.

It calculates the average of a and b using (a + b) / 2.0, where 2.0 ensures that the division is done in floating-point (to avoid integer
 division truncation). The program then compares this average with the value of c.

If the average is greater than c, it prints "yes".

Otherwise, it prints "No".

This logic is commonly used in scenarios involving comparisons of means or evaluating thresholds — for instance, checking if the performance 
of two students is collectively better than a third, or whether the average rating exceeds a given benchmark.
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
    
    if((a+b)/2.0>c)
    cout<<"yes\n";
    
    else
    cout<<"No\n";
}
}
