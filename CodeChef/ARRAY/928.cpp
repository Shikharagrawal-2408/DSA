/*
Largest and Second Largest
You are given an array A of N integers.
Find the maximum sum of two distinct integers in the array.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains single integer N — the size of the array.
The next line contains N space-separated integers, denoting the array A.

Output Format
For each test case, output on a new line, the maximum sum of two distinct integers in the array.

Constraints
1≤T≤1000
2≤N≤10 

Input
2
3
4 1 6
7
3 7 2 1 1 5 3

Output
10
12

Test case 1: The maximum sum of two distinct elements is 4+6=10 .
Test case 2: The maximum sum of two distinct elements is 7+5=12.
*/
/*
This program computes the sum of the two largest distinct elements from an array for each test case.

For each test case:
The program reads an integer n, representing the number of elements.
Then it reads n integers into the array a[].

During the first loop, it finds the maximum element of the array and stores it in the variable max.
In the second loop, it searches for the second highest distinct element (max1), i.e., the largest number that is less than max.
After finding both values, the program prints the sum max + max1.

This logic is useful when you want to find the sum of top two unique scores, prices, or values in a dataset. Note that the program assumes there
will always be at least two distinct elements. If all elements are the same, max1 will remain 0, and the result will be just the maximum value.
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
        int max=0,max1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max)
            max=a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>max1 && a[i]<max)
            max1=a[i];
        }
        cout<<max+max1<<endl;
    }
}