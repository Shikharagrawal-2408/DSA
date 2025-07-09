/*
Gcd of Subarrays
You are given positive integers N and K.

You have to construct an array A of length N such that :

1≤Ai≤10^18

If multiple such arrays exist, print any.
Report −1 if no such array exists.

Note that A[l,r] denotes the subarray 
[Al,Al+1,…,Ar−1,Ar].

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of single line of input.
The only line of each test case contains two space-separated integers N and K — the number of elements and required sum.

Output Format
For each test case, output on a new line N space-separated integers, denoting array A.
Report −1 if no such array exists.

Constraints
1≤T≤100
1≤N≤100
1≤K≤10^18
 
The sum of N over all test cases won't exceed 1000.

Input
3
1 5
2 4
3 1

Output
5
1 2
-1

Test case 1: The only possible array of size 1 such that the sum of gcd of all subarrays is 5 is A=[5].
Test case 2: Consider an array of size 2 as A=[1,2]. The subarrays of the array are:[1]: The gcd of this subarray is 1.[1,2]: The gcd of this 
subarray is gcd(1,2)=1.[2]: The gcd of this subarray is 2. The sum of gcd of all subarrays is 1+1+2=4.

Test case 3: It can be proven that there exists no subarray of size 3 such that the sum of gcd of all subarrays of the array is 1.
*/
/*
This program solves a problem where, for each test case, we are given two integers n and k, and the goal is to construct an array of n positive 
integers such that: The sum of all the elements is exactly k.

The first n - 1 elements are 1.
The last element adjusts itself to make the total sum equal to k.

To achieve this, the code first calculates the minimum sum possible if the first n - 1 elements are all 1, and the last element is also 1. That
would be the sum of the first n natural numbers: n*(n+1)/2.
However, the code cleverly rewrites this as: x = k - n*(n+1)/2 + 1,
where x becomes the value of the last element in the array. The +1 is added because the first n-1 elements are fixed as 1, and we need to 
compensate for this in the last element.

If x < 1, it means it's impossible to create such an array with all elements being positive integers, so it prints -1.
Otherwise, it prints n - 1 ones followed by the value x, which is the final value needed to make the total sum exactly k.

This logic is useful in constrained array construction problems, especially in competitive programming where minimum/maximum conditions must be 
maintained while achieving a target sum.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    long long int k;
	    cin>>n>>k;
	    
	   long long int x=k-(long long int )n*(n+1)/2+1;
	    
	    if(x<1)
	    {
	        cout<<"-1"<<endl;
	    }else {
            for (int i = 0; i < n - 1; i++) {
                cout << "1 ";
            }
            cout << x << endl;
        }
    }
    return 0;
}