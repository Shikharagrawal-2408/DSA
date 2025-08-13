//LINK:- https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
/*       Check If The String Is A Palindrome
You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets 
and numbers only and ignore the symbols and whitespaces.

String 'S' is NOT case sensitive.

Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, 
which is a palindrome. Hence, the given string is also a palindrome.


Where 'T' denotes the number of test cases and 'S' denotes the given string.

Sample Input 1 :
2
N2 i&nJA?a& jnI2n
A1b22Ba

Sample Output 1 :
Yes
No
Explanation 1 :
For the first test case, S = “N2 i&nJA?a& jnI2n”. If we ignore the special characters, whitespaces and convert all uppercase letters to 
lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.

For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, 
we get S = “a1b22ba”, which is not a palindrome. Hence, the given string is not a palindrome.

Sample Input 2 :
3
codingninjassajNiNgNidoc
5?36@6?35
aaBBa@
Sample Output 2 :
Yes
Yes
No
*/
/*

*/
#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    int a=0;
    int e=s.size()-1;

    for (int i = 0; i <= e; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') 
        s[i] = s[i] - 'A' + 'a'; 
}
    
    while(a<=e)
    {
        if (!((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= '0' && s[a] <= '9')))
        {
            a++;
            continue;
        }
        
        if (!((s[e] >= 'a' && s[e] <= 'z') || (s[e] >= '0' && s[e] <= '9')))
        {
            e--;
            continue;
        }
        
        if(s[a]!=s[e])
        return false;
        
        a++;
        e--;
    }
    return true;
}

/*
bool isPalindrome(string s) {
        vector<char> arr;
        
        for (char c : s) {
            if (isalnum(c)) {
                arr.push_back(tolower(c));
            }
        }

        int left = 0, right = arr.size() - 1;

        while (left < right) {
            if (arr[left] != arr[right])
                return false;
            left++;
            right--;
        }

        return true;
    }
*/