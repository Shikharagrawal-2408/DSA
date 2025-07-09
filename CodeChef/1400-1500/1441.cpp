/*
HTML Tags
In addition to Competitive Programming, Chef recently developed an interest in Web Dev and started learning HTML. Now he wants to create his
own HTML Code Editor. As a subproblem, he wants to check if a typed HTML closing tag has correct syntax or not.

A closing HTML tag must:
Start with "</"
End with ">"
Have only lower-case alpha-numeric characters as its body (between "</" and ">"). That is, each character of the body should either be a 
digit or a lower-case English letter.
Have a non-empty body.
Help Chef by printing "Success" if the tag is fine. If not, print "Error".

Input Format
The first line contains an integer T, the number of test cases. Then T test cases follow.
Each test case is a single line of input, a string describing the tag.
Output Format
For each test case, output in a single line, "Success" if it is a valid closing tag and "Error" otherwise (without quotes).

You may print each character of the string in uppercase or lowercase (for example, the strings "SuccEss", "success", "Success", "SUCCESS" etc. 
will all be treated as identical).

Constraints
1≤T≤1000

Input
5 
</h1>  
Clearly_Invalid  
</singlabharat>  
</5>  
<//aA>

Output
Success  
Error  
Success
Success
Error

Test Cases 1,3,4: The tags follow all mentioned constraints.
Test Case 2: The tag doesn't contain opening and closing symbols and also includes characters other than lower-case alpha-numeric characters
in its body.
Test Case 5: The tag also includes an upper-case alpha-numeric character "A" and a non alpha-numeric character "/" in its body.
*/
/*
This program validates a string to check whether it matches a simplified version of a closing HTML/XML tag format. The tag must follow the 
specific pattern: it should begin with </, contain only lowercase letters or digits in the middle, and end with >.

For each test case:
The program reads a string a and checks its length (n).
It first ensures the basic structural rules are followed:

The string must be at least 4 characters long.
The first character must be '<'.
The second character must be '/'.
The last character must be '>'.

If any of these conditions fail, the program immediately prints "Error" and continues to the next test case.

If the basic structure is valid, it then checks the characters between </ and > — i.e., from index 2 to n - 2. These characters must only be 
lowercase letters (a to z) or digits (0 to 9). If any invalid character is found, it sets a flag to false and prints "Error".

If all characters are valid, it prints "Success" indicating that the string is a valid closing tag.

This kind of logic is useful in compilers, HTML/XML parsers, or in basic input validation for structured tags or markup formats.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    string a;
	    cin>>a;
	    int n=a.length();
	    if (n < 4 || a[0] != '<' || a[1] != '/' || a[n - 1] != '>')
	    {
        cout << "Error\n";
        continue;
	    }
	    bool flag=true;
	    for (int i = 2; i < n - 1; i++) 
	    {
        if (!((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= '0' && a[i] <= '9')))
        {
            flag=false;
            break;
        }
        }
        
        if(flag)
        cout << "Success\n";
        else
        cout<<"Error\n";  
	}
}