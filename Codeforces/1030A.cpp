/*      A. In Search of an Easy Problem
When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator 
had chosen some problem and asked 𝑛 people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these 𝑛 people has answered that the problem is hard, the coordinator decides to change the problem. 
For the given responses, check if the problem is easy enough.

Input
The first line contains a single integer 𝑛 (1≤𝑛≤100) — the number of people who were asked to give their opinions.

The second line contains 𝑛 integers, each integer is either 0 or 1. If 𝑖-th integer is 0, then 𝑖-th person thinks that the problem is easy; 
if it is 1, then 𝑖-th person thinks that the problem is hard.

Output
Print one word: "EASY" if the problem is easy according to all responses, or "HARD" if there is at least one person who thinks the problem 
is hard.

Input
3
0 0 1
Output
HARD

Input
1
0
Output
EASY

In the first example the third person says it's a hard problem, so it should be replaced.
In the second example the problem easy for the only person, so it doesn't have to be replaced.
*/
/*
The problem is to calculate the total time for a single-elimination tournament where N teams (power of 2) compete. Each round lasts A minutes, 
and there is a break of B minutes between consecutive rounds, but no break after the final round. The program reads the number of test cases t. 
For each case, it reads n, a, and b, representing the number of teams, round duration, and break duration. It then repeatedly simulates the 
tournament: while n is greater than 1, it adds a + b to sum for each round (including the break after it) and halves n to represent winners 
moving to the next round. After the loop, it subtracts b from sum because the last round does not have a break afterward. Finally, it outputs 
the total time. This approach effectively counts all rounds and their breaks, adjusting for the last round’s no-break rule.
*/
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int sum=0,a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }

    if(sum>0)
    cout<<"HARD\n";

    else
    cout<<"EASY\n";
}