/*
Easy Pronunciation
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of string S.
The second line of each test case contains the string S.
Output Format
For each test case, output on a new line the answer — YES if S is easy to pronounce, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

Constraints
1≤T≤100
1≤N≤100

Input
2
5
apple
15
schtschurowskia

Output
YES
NO

Test case 1: "apple" doesn't have 4 or move consecutive consonants, which makes it easy to pronounce.
Test case 2: "schtschurowskia" has 7 consecutive consonants, which makes it hard to pronounce.
*/
/*
This program checks whether each word in a list is "hard to pronounce" based on the number of consecutive consonants it contains. For each 
test case, it reads an integer a (length of the string b), followed by the string b itself.

The goal is to determine whether the string contains four or more consecutive consonants. A consonant is any character that is not a vowel.
 As it iterates through the string, it uses a count variable to track the number of consecutive consonants.

If a consonant is encountered, count is incremented.

If count becomes 4 or more at any point, the word is considered "hard to pronounce", and "NO" is printed.

If a vowel is encountered, count is reset to 0.

A boolean flag hard is used to track whether the word was already declared hard (to avoid double printing). If no sequence of 4 or more 
consonants is found, the word is considered "easy to pronounce", and "YES" is printed.

This kind of logic is often used in linguistic problems or text processing challenges where patterns in characters determine outcomes.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	while(n--)
	{
	    int a;
	    cin>>a;
	    string b;
	    cin>>b;
	    
	    int count=0;
	    bool hard = false;
	    for(int i=0;i<a;i++)
	    {
	        if(b[i]!='a'&& b[i]!='e'&& b[i]!='i'&&b[i]!='o'&&b[i]!='u')
	        {
	            count++;
	        
	        if(count>=4)
	        {
	            cout<<"NO\n";
	            hard=true;
	            break ;
	        }
	        }
	        else
	        count=0;
        }
	    if(!hard)
	    cout<<"YES\n";
	}
	return 0;
}