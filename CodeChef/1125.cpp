/*
Processing a string
Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string.

Input
The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow.
Each test case is described with a single line containing a string S, the alphanumeric string.
Output
For each test case, output a single line containing the sum of all the digit characters in that string.
Constraints
1 ≤ T ≤ 1000
1 ≤ |S| ≤ 1000, where |S| is the length of the string S.
Sample 1:
Input
1
ab1231da
Output
7
*/
/*
This program is designed to process multiple test cases where each test case consists of a single string input. For every test case, the program
reads the string s, and then iterates over each character of the string. While traversing the string, it checks if a character is a digit by 
verifying whether it lies between '0' and '9'. If a character is indeed a digit, it converts the character to its corresponding integer value by 
subtracting '0' from it (as characters representing digits are sequentially arranged in the ASCII table). These integer valuesare then accumulated
in a variable called sum. After completing the traversal of the string, the total sum of all the digits present in the string is printed.

In summary, the code extracts all numeric digits from the input string and prints their total sum. It ignores all non-digit characters, making 
it useful in scenarios where digits are embedded within a mix of letters or symbols (e.g., alphanumeric codes, passwords, or identifiers).

*/

#include <bits/stdc++.h>
#include<iostream>

#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    int sum=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]>='0' && s[i]<='9')
	        {
	            sum+=(s[i]-'0');
	        }
	    }
	    cout<<sum<<endl;
    }
}