/*      A. Nearly Lucky Number
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky 
digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders 
whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

Input
40047
Output
NO

Input
7747774
Output
YES

Input
1000000000000000000
Output
NO

Note
In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".

In the third sample there are no lucky digits, so the answer is "NO". */
/*
In this problem, we are given a number n and asked to determine whether it is a nearly lucky number. A number is considered lucky if it contains 
only the digits 4 and 7. However, Petya defines a number as nearly lucky if the count of lucky digits (4 or 7) in the number is itself a lucky 
number. To check this, the code first reads the input number n (which can be as large as 10¹⁸), then iterates through each digit by taking the 
last digit repeatedly using n % 10, and checks if that digit is either 4 or 7. If it is, it increments a counter cnt. Once all digits are 
processed, it checks whether the final count cnt is equal to 4 or 7 (i.e., a lucky number). If yes, the number is nearly lucky, and the program 
prints "YES";  otherwise, it prints "NO". This solution is efficient and handles even large numbers correctly by using a long long int to store n.
*/
#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    int cnt=0;
    while(n>0)
    {
        int d=n%10;
        if(d==4||d==7)
        cnt++;

        n/=10;
    }

    if(cnt==4||cnt==7)
    cout<<"YES\n";

    else
    cout<<"NO\n";
}