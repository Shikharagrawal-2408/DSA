/*A. Way Too Long Words
Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special 
abbreviation. This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of
letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the 
abbreviation and the words that are not too long should not undergo any changes.

Input
The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin 
letters and possess the lengths of from 1 to 100 characters.

Output
Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

Examples
Input
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
Output
word
l10n
i18n
p43s
*/
/*
This C++ program is designed to shorten long words in a specific way, often referred to as "abbreviation" or "word compression" 
(like the example of "internationalization" being shortened to "i18n").

The program first reads an integer t, which is the number of test cases (or words). For each test case, it reads a string str. It then checks 
the length of the string n. If the length is greater than 10, it compresses the word by printing the first character, followed by the number of
characters between the first and last, and finally the last character (e.g., "localization" → "l10n"). If the length is 10 or less, it simply 
prints the word as it is. This logic is applied for each of the t input strings.
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
    
        int n=str.length();
        if(n>10)
        {
            cout<<str[0]<<n-2<<str[n-1]<<endl;
        }
        else
        cout<<str;
    }
}