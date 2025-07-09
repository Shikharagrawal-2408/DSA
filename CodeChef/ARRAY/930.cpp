/*
Difficulty Rating Order
Our Chef has some students in his coding class who are practicing problems. Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. Non-decreasing means that the values in an array is either increasing or remaining the same, but not decreasing. That is, the students should not solve a problem with difficulty 
d
1
d 
1
​
 , and then later a problem with difficulty 
d
2
d 
2
​
 , where 
d
1
>
d
2
d 
1
​
 >d 
2
​
 .

Output “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of 
2
2 lines of input.
The first line contains a single integer 
N
N, the number of problems solved by the students
The second line contains 
N
N space-separate integers, the difficulty ratings of the problems attempted by the students in order.
Output Format
For each test case, output in a new line “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not. The output should be printed without the quotes.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings yes, YeS, and YES will all be treated as equivalent.

Constraints
1
≤
T
≤
100
1≤T≤100
2
≤
N
≤
100
2≤N≤100
1
≤
1≤ difficulty of each problem 
≤
5000
≤5000
Sample 1:
Input
Output
4
3
1 2 3
3
1 1 2
5
100 200 300 400 350
5
1000 2000 5000 3000 1000
Yes
Yes
No
No
Explanation:
Test case 
1
1: 
1
≤
2
≤
3
1≤2≤3. The students have solved problems in increasing order, and so the answer is "Yes".

Test case 
2
2: 
1
≤
1
≤
2
1≤1≤2. The students have solved problems in non-decreasing order, and so the answer is "Yes".


*/
/*
This program checks whether a given array is non-decreasing, i.e., every element is greater than or equal to the previous one, for each test case.

For each test case:

It reads the integer n, which represents the size of the array.

It then reads n integers into the array a[].

The variable max is initialized with INT_MIN to keep track of the maximum value seen so far.

It uses a flag flag (initially set to true) to monitor whether the array remains sorted as it iterates through the elements.

The logic:

For every element a[i], if a[i] is greater than or equal to max, it updates max.

If it finds an element smaller than max, it sets the flag to false and breaks out of the loop because the array is no longer non-decreasing.

At the end:

If the flag is still true, it prints "YES", indicating the array is sorted in non-decreasing order.

Otherwise, it prints "NO".

This kind of logic is commonly used to validate sorted sequences in competitive programming and data stream checks.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=max)
            max=a[i];
            else
            {flag=false;
            break;
            }
        }
        if(flag)
        cout<< "YES\n";
        else
        cout<<"NO\n";
    }
}