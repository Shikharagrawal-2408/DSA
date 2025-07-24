/*  A. Beautiful Matrix
You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to 
bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of 
the two following transformations to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the 
intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

Input
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element
of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes
and a single number one.

Output
Print a single integer — the minimum number of moves needed to make the matrix beautiful.

Examples
Input
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
3

Input
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
Output
1
*/
/*
We are given a 5×5 matrix that contains exactly one 1 and the rest are 0s. The goal is to move the 1 to the center of the matrix, which is 
position (3,3) in 1-based indexing, or (2,2) in 0-based indexing used in arrays. We are allowed to move the 1 by swapping it with its adjacent 
row or column. This means the number of moves needed is simply the Manhattan distance between the current position of the 1 and the center. In 
the code, we iterate over each cell of the matrix. When we find the cell containing the 1, we calculate the number of moves using the formula 
abs(2 - i) + abs(2 - j) and print the result. This represents the minimum number of steps needed to bring the 1 to the center, as each swap 
moves the 1 one unit closer either vertically or horizontally.
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            cout<<abs(2-i)+abs(2-j)<<endl;
        }
    }
}