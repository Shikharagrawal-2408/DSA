/*      A. Vanya and Fence
Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them. In order to achieve this the height 
of each of the friends should not exceed h. If the height of some person is greater than h he can bend down and then he surely won't be noticed 
by the guard. The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. Friends want to talk to 
each other while walking, so they would like to walk in a single row. What is the minimum width of the road, such that friends can walk in a 
row and remain unattended by the guard?

Input
The first line of the input contains two integers n and h (1 ≤ n ≤ 1000, 1 ≤ h ≤ 1000) — the number of friends and the height of the fence, 
respectively.

The second line contains n integers ai (1 ≤ ai ≤ 2h), the i-th of them is equal to the height of the i-th person.

Output
Print a single integer — the minimum possible valid width of the road.

Input
3 7
4 5 14
Output
4

Input
6 1
1 1 1 1 1 1
Output
6

Input
6 5
7 6 8 9 10 5
Output
11

In the first sample, only person number 3 must bend down, so the required width is equal to 1 + 1 + 2 = 4.
In the second sample, all friends are short enough and no one has to bend, so the width 1 + 1 + 1 + 1 + 1 + 1 = 6 is enough.
In the third sample, all the persons have to bend, except the last one. The required minimum width of the road is equal to 2+2+2+2+ 2 + 1 = 11.
*/
/*
The problem is about calculating the minimum width of a road so that Vanya and his friends can walk in a single row without being noticed by a 
guard. The road width depends on the height of each person compared to the fence height h. If a friend’s height is less than or equal to h, 
they can walk normally and take up width 1. If their height is greater than h, they must bend down, taking up width 2. The program starts by 
reading two integers n and h, representing the number of friends and the fence height. Then it takes an array of n integers for the heights of 
the friends. It initializes a counter cnt to store the total required width. For each friend, it checks: if their height is greater than h, it 
adds 2 to the counter; otherwise, it adds 1. After processing all friends, the total width stored in cnt is printed. This ensures the 
calculated road width is just enough for everyone to pass without attracting the guard’s attention.
*/
#include<iostream>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;

    int arr[n];
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
        cnt+=2;

        else
        cnt++;
    }
    cout<<cnt;

}