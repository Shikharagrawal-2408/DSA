/*
Running Comparison
Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for N days — on the ith day, Alice ran Ai meters and Bob ran Bi meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran 200 meters and Bob ran 500, Alice would be unhappy but Bob would be happy.
If Alice ran 500 meters and Bob ran 240, Alice would be happy and Bob would be unhappy.
If Alice ran 300 meters and Bob ran 500, both Alice and Bob would be happy.

On how many of the N days were both Alice and Bob happy?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer N — the number of days.
The second line of each test case contains N space-separated integers A1,A2,...An — the distances run by Alice on the N days.
The third line of each test case contains N space-separated integers B1,B2,...Bn — the distances run by Bob on the N days.

Output Format
For each test case, output on a new line the number of days when both Alice and Bob were happy.

Constraints
1≤T≤1000
1≤N≤100

Input
2
3
100 200 300
300 200 100
4
1000 1000 1000 1000
400 500 600 1200

Output
1
3

Test case 1: Alice is unhappy on the first day, since she ran 100 meters but Bob ran 300; and 300 is more than twice of 100.
Similarly, Bob is unhappy on the third day.Both Alice and Bob are happy on the second day, so the answer is 1.
Test case 2: Bob is unhappy on day 1 and happy on every other day, while Alice is happy on every day. So, they're both happy on three days —
 the second, third, and fourth.
*/
/*
This program determines how many pairs of values (from two arrays) satisfy a specific compatibility condition for each test case. The arrays 
represent the number of runs by Alice and Bob, respectively.

For each test case:
The program reads an integer n, representing the number of runs (or entries).

It then reads two arrays of size n:
a[] — the number of runs made by Alice in each entry.
b[] — the number of runs made by Bob in each entry.

The condition to count a pair as "happy" is:
Alice’s run count should be at most twice Bob's, and Bob’s run count should be at most twice Alice's.
In other words, both values should be within a factor of 2 of each other, i.e.: b[i] ≤ 2 * a[i]  AND  a[i] ≤ 2 * b[i]
The program iterates through each pair (a[i], b[i]), and if the condition holds, it increments a counter s. After processing all entries, it
prints the value of s — the total number of such compatible or "happy" entries.

This logic might be used in situations where you want to compare two datasets and count how often their values are relatively close, with a 
tolerance factor of 2.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];//alice is happy runs twice of bob
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

        int s=0;
        
        for (int i=0;i<n;i++)
        {
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i]) 
            s++;
        }
        cout<<s<<endl;
    }
    return 0;
}