/*
Zero String
You are given a binary string S of length N. You are allowed to perform the following types of operations on string S:

Delete any one character from S, and concatenate the remaining parts of the string. For example, if we delete the third character of S=1101, 
it becomes S=111. Flip all the characters of S. For example, if we flip all character of S=1101, it becomes S=0010.
Given that you can use either type of operation any number of times, find the minimum number of operations required to make all characters 
of the string S equal to 0.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the length of the string.
The next line contains a binary string S of length N.

Output Format
For each test case, output on a new line, the minimum number of operations required to make all characters of the string S equal to 0.

Constraints
1≤T≤2000
1≤N≤10^5

Input
2
2
01
3
101

Output
1
2

Test case 1: You can use one operation to delete the second character of the string S. Thus, the string becomes 0. Note that all characters of 
this string are 0 and thus, it satisfies the conditions.
Test case 2: You can perform the following operations:

Operation 1: Flip all characters of the string. Thus, string becomes 010.
Operation 2: Delete the second character of the string. Thus, string becomes 00.
Note that we have obtained a string having all characters as 0 in two operations. It can be shown that this is the minimum number of operations 
required.
*/
/*
This program processes multiple test cases where each test case consists of a binary string of length n. The main goal is to compute and print 
a specific value based on the count of 0s and 1s in the string.

For each test case, it reads the length n and the binary string a. It then counts the number of '0's and '1's in the string using two counters:
zeroes and ones.

Based on the counts, the output is determined as follows:
If the string contains only 1s, then it prints 1.
If the string contains only 0s, it prints 0.

Otherwise, meaning the string contains both 0s and 1s:
If the number of 0s is greater than or equal to the number of 1s, it prints the number of 1s.
If the number of 1s is greater, it prints the number of 0s plus 1.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    string a;
	    
	    cin>>n>>a;
	    
	    int zeroes=0;
	    int ones=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]=='0')
	        zeroes++;
	        else
	        ones++;
	    }
	    if(ones==n)
	    cout<<"1\n";
	    else if(zeroes==n)
	    cout<<"0\n";
	    else
	    {
	        if(zeroes>=ones)
	        cout<<ones<<"\n";
	        else
	        cout<<zeroes+1<<"\n";
	    }
	}
}