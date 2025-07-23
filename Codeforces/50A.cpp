/*      A. Domino piling
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are 
allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:
1. Each domino completely covers two squares.
2. No two dominoes overlap.
3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

Input
In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

Output
Output one number — the maximal number of dominoes, which can be placed.

Input
2 4
Output
4
Input
3 3
Output
4
*/
/*
In this problem, we are given a rectangular board of size M × N and an unlimited supply of dominoes, where each domino covers exactly 2 
squares. The goal is to find the maximum number of dominoes that can be placed on the board without overlapping, and such that each domino lies 
completely within the board. Since each domino covers two cells, the maximum number of dominoes that can fit is simply the total number of cells
(M × N) divided by 2. This is because each domino occupies exactly two of those cells, and no overlapping is allowed. The code calculates and 
prints (M × N) / 2, which gives the correct result for any valid board size as per the constraints.
*/
#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    cout<<(m*n)/2;
}