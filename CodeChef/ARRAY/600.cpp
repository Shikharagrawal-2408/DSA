/*
Search an element in an array
You are given an array A of size N and an element X. Your task is to find whether the array A contains the element X or not.

Input Format
The first line contains two space-separated integers N and X — the size of array and the element to be searched.
The second line contains all the elements of array A

Output Format
Output "YES" if the element X is present in A, otherwise output "NO".

Constraints
1≤N≤10^5
1≤Ai≤10^5

Input
5 3
7 3 5 2 1

Output
YES
*/
/*
This program checks whether a given number t exists in an array of n integers. It acts as a simple linear search implementation.

First, the program reads two integers:

n — the size of the array,

t — the target value to be searched for in the array.

It then reads n integers into the array arr[]. As each number is entered, the program immediately checks whether the current element equals t.

If it finds an element equal to t, it prints "YES" and terminates the program using return 0 (as the search is complete).

If it finishes reading all elements without finding the target value, it prints "NO" at the end.

This code efficiently stops at the first match and avoids unnecessary checks, making it slightly more optimized than scanning the whole array 
regardless of early matches.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	cin>>n>>t;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]==t)
	    {
	        cout<<"YES";
	        return 0;
	    }
	}
	cout<<"NO";
	return 0;
}