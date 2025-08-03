/*      Second Largest
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output Format
For each test case, display the second largest among A, B and C, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 1000000

Input
3 
120 11 400
10213 312 10
10 3 450

Output
120
312
10
*/
/*
This program reads multiple test cases, where each test case contains three integers. The goal is to determine the second largest number 
among the three. For each test case, the program stores the three numbers in an array of size 3. It then sorts the array in ascending order. 
Since sorting arranges the numbers from smallest to largest, the second largest number will always be at the middle index, i.e., index 1. 
This value is printed as the result for that test case. This process is repeated for all test cases. Sorting just three numbers is very fast, 
so the approach remains efficient even for the maximum limit of 1000 test cases. 
The output consists of one number per line, each representing the second largest number for the respective test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    array<int, 3> arr;
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        cout << arr[1] << endl;
    }
}