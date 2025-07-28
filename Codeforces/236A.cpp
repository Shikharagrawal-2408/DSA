/*      A. Boy or Girl
Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user 
at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they 
talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad 
and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. 
You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. 
This string contains at most 100 letters.

Output
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

Input
wjmzbmr
Output
CHAT WITH HER!

Input
xiaodao
Output
IGNORE HIM!

Input
sevenkplus
Output
CHAT WITH HER!

Note
For the first example. There are 6 distinct characters in "wjmzbmr". These characters are: "w", "j", "m", "z", "b", "r". So wjmzbmr is a 
female and you should print "CHAT WITH HER!".
*/
/*
This program determines the gender of a user based on the number of distinct characters in their username, following a fictional 
method described in the problem. According to the logic, if the number of unique letters in the username is odd, the user is considered 
male and the program prints "IGNORE HIM!"; otherwise, if the number is even, the user is considered female and the output is "CHAT WITH HER!".

To implement this, the code reads the input string and uses an unordered map (unordered_map<char, int>) to keep track of character 
frequencies. However, since only the count of unique characters is needed, a set or just checking the size of the map would also suffice. 
After populating the map with the characters from the string, it checks if the number of unique keys (m.size()) is odd or even and 
prints the appropriate message. This is a clever and concise way to determine the result based on character uniqueness.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    unordered_map<char,int>m;

    for(int i=0;i<str.length();i++)
    m[str[i]]++;
    
    if(m.size()%2!=0)
    cout<<"IGNORE HIM!";

    else
    cout<<"CHAT WITH HER!";

}

    // for (char ch : str)
    //     m[ch]++;

    // int count = m.size();


    // set<char> s(str.begin(), str.end());

    // if (s.size() % 2 == 0)
    //     cout << "CHAT WITH HER!";
    // else
    //     cout << "IGNORE HIM!";