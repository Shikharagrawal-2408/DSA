/*
Chef and Two Strings
Chef has found two very old sheets of paper, each of which originally contained a string of lowercase Latin letters. The strings on both the
 sheets have equal lengths. However, since the sheets are very old, some letters have become unreadable.

Chef would like to estimate the difference between these strings. Let's assume that the first string is named S1, and the second S2. The 
unreadable symbols are specified with the question mark symbol '?'. The difference between the strings equals to the number of positions i, 
such that S1i is not equal to S2i, where S1i and S2i denote the symbol at the i the position in S1 and S2, respectively.

Chef would like to know the minimal and the maximal difference between the two strings, if he changes all unreadable symbols to lowercase Latin
letters. Now that you're fully aware of Chef's programming expertise, you might have guessed that he needs you help solving this problem as 
well. Go on, help him!

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The first line of a test case contains a string S1.

The second line of a test case contains a string S2.

Both strings consist of lowercase Latin letters and question marks in places where the symbols are unreadable.

Output
For each test case, output the minimal and the maximal difference between two given strings separated with a single space.

Constraints
1 ≤ T ≤ 100
1 ≤ |S1|, |S2| ≤ 100

Input
3
a?c
??b
???a
???a
?abac
aba?w

Output
1 3
0 3
3 5

Example case 1. You can change the question marks in the strings so that you obtain S1 = abc and S2 = abb. Then S1 and S2 will differ in one
 position. On the other hand, you can change the letters so that S1 = abc and S2 = bab. Then, the strings will differ in all three positions.

Example case 2. Change the question marks this way: S1 = dcba, S2 = dcba, then the strings will differ in 0 positions. You can also change the 
question marks so that S1 = aaaa, S2 = dcba, then the strings will differ in 3 positions.

Example case 3. Change the question marks this way: S1 = aabac, S2 = abaaw, then the strings will differ in 3 positions. Then, change the
 question marks this way: S1 = xabac, S2 = abayw, then they will differ in 5 positions.
*/
/*
This program is designed to compare two strings of equal length (possibly containing the wildcard character '?') and calculate two values for 
each test case: the minimum and maximum number of differing positions between the strings.

For each test case, the program reads two strings s1 and s2. These strings can contain lowercase letters and the special character '?', which 
can match any character.

To calculate:

**min** – the maximum possible number of positions that could differ, assuming every '?' could mismatch with the corresponding character.

**max** – the minimum possible number of positions that must differ, assuming every '?' could match with the corresponding character.

The logic loops through each character of the strings:

If the characters are the same or either is '?', then this position can be made equal, so we reduce max by 1.

If the characters are different or either is '?', then this position can potentially be different, so we increase min by 1.

Initially, max is set to the total string length, assuming all characters might differ, and min is set to 0. After processing, it prints max 
and min for each test case.

This kind of logic is used in string matching problems involving wildcard or flexible characters, often found in coding contests or 
regex-related tasks.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        
        int max=s1.length();
        int min=0;
        
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]==s2[i]||s1[i]=='?'||s2[i]=='?')
            max--;
            if(s1[i]!=s2[i]||s1[i]=='?'||s2[i]=='?')
            min++;
        }
        cout<<max<<" "<<min<<"\n";
    }
}