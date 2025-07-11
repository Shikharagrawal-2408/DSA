/*
2696. Minimum String Length After Removing Substrings

You are given a string s consisting only of uppercase English letters.

You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings "AB" or "CD" from s.

Return the minimum possible length of the resulting string that you can obtain.

Note that the string concatenates after removing the substring and could produce new "AB" or "CD" substrings.

Input: s = "ABFCACDB"
Output: 2
Explanation: We can do the following operations:
- Remove the substring "ABFCACDB", so s = "FCACDB".
- Remove the substring "FCACDB", so s = "FCAB".
- Remove the substring "FCAB", so s = "FC".
So the resulting length of the string is 2.
It can be shown that it is the minimum length that we can obtain.
*/
/*
This function aims to reduce a string s by repeatedly removing specific adjacent character pairs and returning the minimum length of the string
after all possible reductions. The rules for reduction are: if the pair "AB" or "CD" appears consecutively in the string, that pair is removed. 
To implement this efficiently, the function uses a stack.

As it iterates through each character in the string:

If the stack is not empty, it checks the character at the top of the stack.

If the top character and the current character form a removable pair ("AB" or "CD"), it pops the top character from the stack (i.e., removes the
pair), and continues to the next character.

If the pair is not removable, or the stack is empty, it pushes the current character onto the stack.

After processing the entire string, the characters left in the stack represent the reduced form of the original string, where no more "AB" or 
"CD" pairs exist. The function then returns the size of the stack, which corresponds to the minimum possible length of the string after all 
valid removals.
*/

class Solution {
public:
    int minLength(string s) {
       stack<char>st;

       for(char ch: s)
       {
        if(!st.empty())
        {
            char top = st.top();
            if((top=='A'&&ch=='B')||(top=='C'&&ch=='D'))
            {
                st.pop();
                continue;
            }
        }
        st.push(ch);
       } 

       return st.size();
    }
};