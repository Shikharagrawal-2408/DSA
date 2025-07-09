/*
Encoding Message
Chef recently graduated Computer Science in university, so he was looking for a job. He applied for several job offers, but he eventually 
settled for a software engineering job at ShareChat. Chef was very enthusiastic about his new job and the first mission assigned to him was 
to implement a message encoding feature to ensure the chat is private and secure.

Chef has a message, which is a string S with length N containing only lowercase English letters. It should be encoded in two steps as follows:

Swap the first and second character of the string S, then swap the 3rd and 4th character, then the 5th and 6th character and so on. If the 
length of S is odd, the last character should not be swapped with any other.
Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', each occurrence of 'b' by 'y', 
each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.
The string produced in the second step is the encoded message. Help Chef and find this message.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains the message string S.

Output
For each test case, print a single line containing one string — the encoded message.

Constraints
1≤T≤1,000
1≤N≤100
S contains only lowercase English letters

Input
2
9
sharechat
4
chef

Output
shizxvzsg
sxuv
Explanation:
Example case 1: The original message is "sharechat". In the first step, we swap four pairs of letters (note that the last letter is not swapped),
so it becomes "hsraceaht". In the second step, we replace the first letter ('h') by 's', the second letter ('s') by 'h', and so on, so the 
resulting encoded message is "shizxvzsg".
*/
/*
This program performs a two-step transformation on a given string b for multiple test cases. For each test case, it reads an integer n 
(the length of the string) and the string b itself.

Step 1: Swapping Adjacent Characters
It starts by swapping every pair of adjacent characters in the string from left to right. The loop runs from index 0 to n-2 in steps of 2,
 and for every pair (i, i+1), it swaps the characters b[i] and b[i+1]. This means the first character swaps with the second, the third with 
 the fourth, and so on. If n is odd, the last character remains unswapped.

Step 2: Alphabetical Complement Transformation
After swapping, the program applies an alphabetical inversion to each character. For every lowercase character ch in the string, it replaces 
it with its "complement" from the opposite end of the alphabet. That is:

'a' becomes 'z',

'b' becomes 'y',

'c' becomes 'x',
...and so on.

This transformation is achieved by the formula:
ch = 'a' + ('z' - ch);
Which essentially maps each character to its mirror position in the alphabet.

Finally, the transformed string is printed.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    string b;
	    
	    cin>>n>>b;
	    
	    for(int i=0;i<n-1;i=i+2)
	    {
	        int temp=b[i];
	        b[i]=b[i+1];
	        b[i+1]=temp;
	    }
	    for (char &ch : b) {
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + ('z' - ch);  // or ch = 'z' - (ch - 'a');
        }
	    }
    cout<< b<<endl;
}
}