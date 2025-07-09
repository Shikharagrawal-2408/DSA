/*
Sort the String
You have a binary string S of length N. In one operation you can select a substring of S and reverse it. For example, on reversing the substring S[2,4] for S=11000, we change 11000→10010.

Find the minimum number of operations required to sort this binary string. It can be proven that the string can always be sorted using the above operation finite number of times.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 2 lines of input.
The first line of each test case contains a single integer N — the length of the binary string.
The second line of each test case contains a binary string S of length N.

Output Format
For each test case, output on a new line — the minimum number of operations required to sort the binary string.

Constraints
1≤T≤2⋅10 
1≤N≤2⋅10 

Input
4
3
000
4
1001
4
1010
6
010101

Output
0
1
2
2
Test case 1: The string is already sorted, hence, zero operations are required to sort it.
Test case 2: We can sort the string in the following way: 1001 → 0011.
Test case 3: We can sort the string in the following way:1010 → 1100 → 0011.
It can be proven that this string cannot be sorted in less than 2 operations.
Test case 4: We can sort the string in the following way:010101 → 001011 → 000111.
It can be proven that this string cannot be sorted in less than 2 operations.
*/
/*
This program counts the number of "10" transitions in a binary string for each test case.

For each test case: It reads an integer n, which is the length of the binary string n1.
It then reads the string n1, consisting of characters '0' and '1'.

The goal is to count how many times the pattern '1' followed by '0' appears consecutively in the string.
The program uses a loop to iterate from index 0 to n - 2, and for each index i, it checks if n1[i] == '1' and n1[i+1] == '0'. If this condition 
is true, it increments the count. Finally, it prints the count — representing the total number of "10" transitions in the binary string.

This logic is useful in problems involving binary sequence analysis, such as detecting signal drops, flipping patterns, or counting transition
 edges in a digital signal.
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
	    string n1;
	    cin>>n1;
	    int count=0;
	    for (int i=0;i<n-1;i++)
	    {
	        if(n1[i]=='1' && n1[i+1]=='0')
	        count++;
	    }
	    cout<<count<<"\n";
	}
}