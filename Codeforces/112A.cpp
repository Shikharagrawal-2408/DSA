/*      A. Petya and Strings
Little Petya mom bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now 
Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered 
equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are 
of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are 
equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Input
aaaa
aaaA

Output
0

Input
abs
Abz

Output
-1

Input
abcdefg
AbCdEfF

Output
1
*/
/*
In this problem, we are given two strings of equal length and we need to compare them lexicographically (dictionary order), but in a way that 
uppercase and lowercase versions of the same letter are considered equal. To do this, we first convert both strings entirely to lowercase using 
the transform() function with ::tolower. This ensures that the case of letters no longer affects comparison. Once both strings are in lowercase,
we compare them directly using relational operators (<, >, ==). If the first string is lexicographically smaller, we print -1; if it is larger, 
we print 1; and if both strings are equal, we print 0. This approach allows Petya to fairly compare his two strings regardless of letter casing.
*/
#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a < b) {
        cout << -1 << endl;
    } else if (a > b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}