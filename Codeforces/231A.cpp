/* A. Team
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered
several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of 
them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the
number of problems for which they will write a solution.

Input
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers 
each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he 
isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by
spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.

Examples
Input
3
1 1 0
1 1 1
1 0 0
Output
2

In the first sample Petya and Vasya are sure that they know how to solve the first problem and all three of them know how to solve the second 
problem. That means that they will write solutions for these problems. Only Petya is sure about the solution for the third problem, but that 
isn't enough, so the friends won't take it.
*/
/*
This C++ program begins by reading an integer n, which represents the number of problems to be discussed by a team of three friends. Then, it 
creates a 2D array arr[n][3] to store each friend’s opinion on each problem — 1 means the friend is confident about solving the problem, and 0 
means they are not. For each of the n problems, it takes three inputs (opinions from the three friends), sums them up, and if the sum is greater
than or equal to 2, it means at least two friends are sure about the solution. In such cases, the count is incremented. Finally, the program 
outputs the total number of problems the team will actually attempt to solve, which is stored in count.
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][3];
    int count=0;

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        if(sum>=2)
        count++;
    }
    cout<<count<<endl;
}