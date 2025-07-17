/*
Problems in your to-do list
CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new
features:

Recent Contest Problems - contains only problems from the last 2 contests
Separate Un-Attempted, Attempted, and All tabs
Problem Difficulty Rating - the Recommended dropdown menu has various difficulty ranges so that you can attempt the problems most suited to your
experience
Popular Topics and Tags

Like most users, Chef didn’t know that he could add problems to a personal to-do list by clicking on the magic '+' symbol on the top-right of 
each problem page. But once he found out about it, he went crazy and added loads of problems to his to-do list without looking at their 
difficulty rating.

Chef is a beginner and should ideally try and solve only problems with difficulty rating strictly less than 1000. Given a list of difficulty 
ratings for problems in the Chef’s to-do list, please help him identify how many of those problems Chef should remove from his to-do list, so 
that he is only left with problems of difficulty rating less than 1000.

Input Format The first line of input will contain a single integer T, the number of test cases. Then the testcases follow.
Each testcase consists of 2 lines of input. The first line of input of each test case contains a single integer, N, which is the total number of
problems that the Chef has added to his to-do list.
The second line of input of each test case contains 
N space-separated integers D1,D2,...Dn , which are the difficulty ratings for each problem in the to-do list.

Output Format For each test case, output in a single line the number of problems that Chef will have to remove so that all remaining problems 
have a difficulty rating strictly less than 1000.

Constraints
1≤T≤1000
1≤N≤1000
1≤Di≤5000

Input
2
3
800 1200 900
4
999 1000 1001 1002

Output
1
3

Test case 1: Among the three difficulty ratings, Chef only needs to remove the problem with difficulty rating 1200, since it is ≥1000. So, the 
answer is 1.
Test case 2: Among the four difficulty ratings, Chef needs to remove the problems with difficulty ratings of 1000, 1001, and 1002, since they 
are ≥1000. So, the answer is 3.
*/
/*
This program counts how many elements in an array are greater than or equal to 1000 for multiple test cases.

For each test case, the user first inputs an integer n, representing the number of elements in the array. The program then reads n integers into
the array arr. As each element is input, it checks whether the value is greater than or equal to 1000. If it is, it increments a count variable.

After processing the entire array for that test case, it prints the final count — i.e., the total number of values in the array that are ≥ 1000.
This logic is repeated for every test case provided.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n],count=0;;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=1000)
            count++;
        }
        cout<<count<<endl;
    }
}