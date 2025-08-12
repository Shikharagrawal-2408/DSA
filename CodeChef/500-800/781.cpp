/*      Minimum number of Flips
Chef has an array A of length N consisting of 1 and −1 only.

In one operation, Chef can choose any index i (1≤i≤N) and multiply the element Ai by −1.

Find the minimum number of operations required to make the sum of the array equal to 0. 
Output -1 if the sum of the array cannot be made 0.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case consists of a single integer N denoting the length of the array.
Second line of each test case contains N space-separated integers A1,A2...AN​ denoting the array A.

Output Format
For each test case, output the minimum number of operations to make the sum of the array equal to 0. 
Output -1 if it is not possible to make the sum equal to 0.

Constraints
1≤T≤100
2≤N≤1000
Ai =1 or Ai =−1

Input
4
4
1 1 1 1
5
1 -1 1 -1 1
6
1 -1 -1 1 1 1
2
1 -1

Output
2
-1
1
0

Test case 1: The minimum number of operations required is 2. In the first operation, change A3 from 1 to −1. Similarly, in the second 
operation, change A4 from 1 to −1. Thus, the sum of the final array is 1+1−1−1=0.
Test case 2: It can be proven that the sum of the array cannot be made equal to zero by making any number of operations.
Test case 3: We can change A1​ from 1 to −1 in one operation. Thus, the sum of the array becomes −1−1−1+1+1+1=0.
Test case 4: The sum of the array is already zero. Thus we do not need to make any operations.
*/
/*
The problem is to determine the minimum number of flips (multiplying an element by −1) required to make the sum of an array consisting only 
of 1 and −1 equal to zero, or report -1 if it’s impossible. The program first reads the number of test cases t. For each test case, it reads 
the array size n and then the elements of the array while computing the total sum. If n is odd, it immediately prints -1 because an array with 
an odd length can never sum to zero (since 1 and −1 contribute in steps of 2 to the sum). If n is even, the code checks whether the absolute 
sum is even; if not, it prints -1 since flipping changes the sum by multiples of 2, and an odd difference cannot be fixed. 
Otherwise, it prints abs(sum) / 2, because each flip changes the sum by ±2, so the number of flips needed is half the absolute sum.
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
	    
	    int arr[n],sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if(n%2!=0)
	    cout<<"-1\n";
	    
	    else
	    
	    if (abs(sum) % 2 != 0) 
	    cout << -1 << endl;
	    
	    else
	    cout << abs(sum) / 2 << endl;
	}
}