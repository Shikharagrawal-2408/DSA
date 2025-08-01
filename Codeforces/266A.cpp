/*      A. Stones on the Table
There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the 
table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones 
between them.

Input
The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from 
left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

Output
Print a single integer — the answer to the problem.

Examples
Input
3
RRG
Output
1

Input
5
RRRRR
Output
4

Input
4
BRBG
Output
0
*/
/*
In this problem, we are given a sequence of colored stones arranged in a row, and the goal is to find the minimum number of stones that need 
to be removed so that no two neighboring stones have the same color. Each stone is represented by a character: 'R' for red, 'G' for green, and 
'B' for blue. The logic used in the code is simple and efficient. It reads the number of stones and the string representing the color of each 
stone. Then, it iterates through the string starting from the second stone and compares each stone with the one immediately before it. If two 
consecutive stones have the same color, it means one of them needs to be removed, so the count is incremented. After checking all pairs of 
adjacent stones, the program outputs the total count of such repeated neighbors, which directly represents the minimum number of stones that 
must be removed. This approach ensures that the resulting sequence will have all neighboring stones with different colors.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    
    cin >> n >> s;

    int count = 0;

    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}