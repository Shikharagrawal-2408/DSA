/*      A. Word Capitalization
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not 
exceed 10^3.

Output
Output the given word after capitalization.

Input
ApPLe

Output
ApPLe

Input
konjac
Output
Konjac
*/
/*
This program solves the "Word Capitalization" problem by taking a word as input and converting only its first character to uppercase, 
if it isn't already. It first reads the input string, then checks whether the first character is already in uppercase using the condition 
str[0] >= 'A' && str[0] <= 'Z'. If it is, the word is printed as-is. If the first character is lowercase, it is converted to uppercase by 
subtracting 'a' and adding 'A', which effectively shifts the ASCII value to the uppercase equivalent. The rest of the string remains unchanged, 
as required. For instance, if the input is "konjac",the output will be "Konjac", but if the input is "ApPLe", which already starts with a 
capital letter, the output remains "ApPLe".
*/
#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;

    if(str[0]>='A'&&str[0]<='Z')
    cout<<str<<endl;

    else
    {
        str[0]=str[0]-'a'+'A';
        cout<<str<<endl;
    }
}

    // str[0] = toupper(str[0]);  
    // cout << str << endl;
