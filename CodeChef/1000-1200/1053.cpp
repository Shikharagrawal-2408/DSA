/*
Prime Reversal
You are given two binary strings A and B, each of length N. You can perform the following operation on string A any number of times:
Select a prime number X.
Choose any substring of string A having length X and reverse the substring.
Determine whether you can make the string A equal to B using any (possibly zero) number of operations.

A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the length of the strings A and B.
The second line contains the binary string A.
The third line contains the binary string B.
Output Format
For each test case, output on a new line, YES, if you can make the string A equal to B using any number of operations and NO otherwise.

Constraints
1≤T≤100
1≤N≤10 
*/
/*
This program processes multiple test cases where, for each test case, two strings of equal length are provided. The integer n denotes the length
of both strings a and b, which are then read as inputs. The program then iterates through each character of both strings. While traversing, it
checks for characters that are digits (i.e., characters between '0' and '9'). If a digit is found in string a, its numeric value is added to 
suma. Similarly, if a digit is found in string b, its numeric value is added to sumb. This is done by subtracting the character '0' from the 
digit character to get its integer equivalent.

After processing all characters, the program compares the total sum of digits from both strings. If the sum from string a is equal to the sum 
from string b, it prints "Yes", otherwise it prints "No". This logic is useful in scenarios where you're checking the equivalence of digit-based
content from two strings, regardless of other non-digit characters they may contain.
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
	    string a,b;
	    cin>>a>>b;
	    int suma=0,sumb=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>='0' && a[i]<='9')
	        {
	            suma+=(a[i]-'0');
	        }
	        if(b[i]>='0' && b[i]<='9')
	        {
	            sumb+=(b[i]-'0');
	        }
	    }
	    if(suma==sumb)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    cout<<"No\n";
	}
}