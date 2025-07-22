/* A. Next Round
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant
earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to 
the next round.

Input:- The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.
The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the 
i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output:- Output the number of participants who advance to the next round.

Input
8 5
10 9 8 7 7 7 5 5
Output
6

Input
4 2
0 0 0 0
Output
0

Note
In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 
advancers.

In the second example nobody got a positive score.
*/
/*
This problem involves determining how many contestants from a programming contest will advance to the next round. The rule is that a 
contestant qualifies if their score is equal to or greater than the score of the k-th place finisher and their score is greater than 0. The 
input includes the number of participants n and the value of k, followed by a list of scores sorted in non-increasing order (from highest to 
lowest). The program first stores all the scores in an array. Then, it iterates over each score and checks if it meets the two conditions: 
being at least as high as the score of the k-th participant (arr[k-1]) and being positive. For every score that satisfies these conditions, 
a counter is incremented. Finally, the program outputs the total number of qualifying participants, which tells us how many contestants 
move to the next round.
*/
#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int arr[50];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        count++;
    }
    cout<<count;
}