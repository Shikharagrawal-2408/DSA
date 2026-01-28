// LINK:- https://www.naukri.com/code360/problems/modular-exponentiation_1082146
/* Modular Exponentiation

You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is 
the remainder when A is divided by C.

Constraints :
1 <= T <= 100   
1 <= X, N, M <= 10^9

Input:-
2 
3 1 2
4 3 10

Output:-
1
4

Explanation for Sample Output 1:
In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10 
X ^ N = 4 ^ 3 = 64 
X ^ N % M = 64 % 10 = 4. 
So the answer will be 4.
*/
/*
The function modularExponentiation efficiently computes (x^n) mod m using binary exponentiation. It initializes ans to 1 and repeatedly squares 
the base x while halving the exponent n. If the current power bit is set (i.e., n is odd, checked using n & 1), it multiplies the current base 
into the result ans modulo m. After each step, x is squared modulo m to reduce its size and prevent overflow, and n is right-shifted by one bit, 
effectively dividing it by 2. This process continues until n becomes zero. The use of 1ll ensures 64-bit multiplication, avoiding overflow in 
intermediate steps. The final result is the modular exponentiation result in logarithmic time with respect to n.
*/
#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m) {
int ans=1;

	while(n!=0)
	{
		if(n&1)
		//odd
		ans=(1ll *ans*(x)%m)%m;

		x=(1ll*(x)%m*(x)%m)%m;
		n= n>>1;
	}
	return ans;
}