/*
3174. Clear Digits

You are given a string s.

Your task is to remove all digits by doing this operation repeatedly:

Delete the first digit and the closest non-digit character to its left.
Return the resulting string after removing all digits.

Note that the operation cannot be performed on a digit that does not have any non-digit character to its left.

Input: s = "abc"

Output: "abc"

Explanation:

There is no digit in the string.

Example 2:

Input: s = "cb34"

Output: ""

Explanation:

First, we apply the operation on s[2], and s becomes "c4".

Then we apply the operation on s[1], and s becomes "".

Constraints:

1 <= s.length <= 100
s consists only of lowercase English letters and digits.
The input is generated such that it is possible to delete all digits.

*/
/*
This function takes a string s as input and returns a modified version of the string after removing certain characters based on a specific rule.
The rule is: whenever a digit is encountered, remove the most recent non-digit character that came before it. To implement this, a stack is used
to keep track of the characters as we iterate through the string.

For each character in the string:

If the character is a digit ('0' to '9'), we remove (pop) the top element from the stack. This simulates deleting the most recent non-digit 
character.

If the character is not a digit (i.e., it's a letter or symbol), we push it onto the stack.

After the traversal, the stack contains all the characters that remain after applying this digit-clearing logic. We then build the resulting
string by popping characters from the stack and appending them in reverse order, since the stack stores them in reverse relative to the original
string.

In summary, the function effectively removes one non-digit character for every digit in the string, always deleting the most recent one that 
appeared before the digit. This is useful in problems where digits act like backspace operations.
*/

class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for(char ch :s )
        {
            if(ch>='0'&&ch<='9')
            {
                st.pop();
            }
            else
            st.push(ch);
        }
        string a="";
        while(!st.empty())
        {
            a+=st.top();
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;   
    }
};