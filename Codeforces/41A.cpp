/*      A. Translation
The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a 
Berlandish word differs from a Birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, 
a Berlandish word code corresponds to a Birlandish word edoc. However, making a mistake during the "translation" is easy. Vasya translated 
the word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not contain 
unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Input
code
edoc
Output
YES

Input
abb
aba
Output
NO

Input
code
code
Output
NO
*/
/*
The program checks whether the second string s2 is the reverse of the first string s1. It starts by taking both strings as input. First, 
it ensures that both strings are of equal length; if not, it immediately prints "NO" and exits, since a reversed word must have the same 
number of characters. Then, it initializes a pointer j to point to the last character of s2. The loop runs over each character of s1 from the 
beginning, comparing it with the corresponding character from the end of s2 using j. If at any point the characters do not match, the 
translation is incorrect, and the program prints "NO" and exits. If the loop completes successfully without mismatches, it means s2 is exactly 
the reverse of s1, so it prints "YES".
*/
 #include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int j=s2.length()-1;

    if (s1.length() != s2.length()) {
        cout << "NO\n";
        return 0;
    }

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[j])
        {
            cout<<"NO\n";
            return 0;
        }

        j--;
    }
    cout<<"YES\n";
}