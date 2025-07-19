/*
Good Program
In computing, the collection of four bits is called a nibble.

Chef defines a program as: Good, if it takes exactly X nibbles of memory, where X is a positive integer. Not Good, otherwise.
Given a program which takes N bits of memory, determine whether it is Good or Not Good.

Input Format:- First line will contain T, number of test cases. Then the test cases follow.
The first and only line of each test case contains a single integer N, the number of bits taken by the program.

Output Format:- For each test case, output Good or Not Good in a single line.

Constraints
1≤T≤1000
1≤N≤1000

Input
4
8
17
52
3

Output
Good
Not Good
Good
Not Good

Test case 1: The program requires 8 bits of memory. This is equivalent to 8/4 =2 nibbles. Since 2 is an integer, this program is good.
Test case 2: The program requires 17 bits of memory. This is equivalent to 17/4 =4.25 nibbles. Since 4.25 is not an integer, this program is notgood.
Test case 3: The program requires 52 bits of memory. This is equivalent to 52/4 =13 nibbles. Since 13 is an integer, this program is good.
Test case 4: The program requires 3 bits of memory. This is equivalent to 3/4 =0.75 nibbles. Since 0.75 is not an integer, this program is not good.
*/
/*
This C++ program checks whether a given number is divisible by 4 and categorizes it accordingly. It begins by taking the number of test cases t.
For each test case, it reads an integer n and checks if n % 4 == 0, i.e., if n is perfectly divisible by 4. If it is, the program outputs "Good"
indicating a favorable condition. Otherwise, it prints "Not Good" indicating that the number is not divisible by 4. This process is repeated for
all test cases.
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
	    
	    if(n%4==0)
	    cout<<"Good\n";
	    
	    else
	    cout<<"Not Good\n";
	}
}
