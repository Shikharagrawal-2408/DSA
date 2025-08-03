/*      A. Word
Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an 
extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase 
letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word 
HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you 
should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method 
on one given word.

Input
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, 
otherwise - in the lowercase one.

Input
HoUse
Output
house

Input
ViP
Output
VIP

Input
maTRIx
Output
matrix
*/
/*
This problem involves converting a given word entirely to either lowercase or uppercase letters based on the count of each case in the 
original word. The goal is to make as few changes as possible while ensuring that the entire word is in a uniform case. To do this, we 
first count the number of uppercase and lowercase letters in the word by iterating through each character. If the number of lowercase 
letters is greater than or equal to the number of uppercase letters, we convert the entire word to lowercase. Otherwise, we convert it to 
uppercase. This approach ensures that the number of character conversions is minimized. For the conversion, we use the transform function 
from the C++ STL along with ::tolower or ::toupper depending on the case required. Finally, we print the modified word. 
This ensures that the word appears in a consistent case, aligned with Vasya's preferences, and requires the least number of changes possible.
*/
#include<iostream>
#include <algorithm>
#include <cctype> 
using namespace std;

int main()
{
    string str;
    cin>>str;

    int u=0,l=0;

    for(int i=0;i<str.length();i++)
    {
        if (isupper(str[i]))
        u++;

        else
        l++;
    }

    if(u<=l)
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    else
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout<<str<<endl;
}