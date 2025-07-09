/*
Mahasena
Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle under him 
(as army-chief), and the reason for that was their really powerful army, also called as Mahasena.

Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even number of weapons,
 and "unlucky" otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of
  "unlucky" soldiers, and "NOT READY" otherwise.

Given the number of weapons each soldier is holding, your task is to determine whether the army formed by all these soldiers is 
"READY FOR BATTLE" or "NOT READY".

Input Format
The first line of input consists of a single integer N denoting the number of soldiers. The second line of input consists of N space separated 
integers A1, A2, ..., AN, where Ai denotes the number of weapons that the ith soldier is holding.

Output Format
Generate one line output saying "READY FOR BATTLE", if the army satisfies the conditions that Kattapa requires or "NOT READY" otherwise 
(quotes for clarity).

Constraints
1 ≤ N ≤ 100
1 ≤ Ai ≤ 100
Sample 1:
Input
1

Output
1
NOT READY
Explanation: N = 1 and the array A = [1]. There is only 1 soldier and he is holding 1 weapon, which is odd. The number of soldiers holding 
an even number of weapons = 0, and number of soldiers holding an odd number of weapons = 1. Hence, the answer is "NOT READY" since the number
of soldiers holding an even number of weapons is not greater than the number of soldiers holding an odd number of weapons.
*/
/*
This program determines whether a group of soldiers is "READY FOR BATTLE" based on the number of soldiers with even and odd strengths. 
It reads an integer n, representing the number of soldiers, followed by n integers into an array, each representing the strength of a soldier.

As it reads the strengths, the program maintains two counters:

e to count the number of soldiers with even strength,

o to count the number of soldiers with odd strength.

After processing all the strengths, it compares the two counters:

If the number of even-strength soldiers (e) is greater than the number of odd-strength soldiers (o), it prints "READY FOR BATTLE".

Otherwise, it prints "NOT READY".

This logic is typically used in competitive programming problems to simulate a simple decision based on statistical or attribute-based 
criteria across a group.


*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int arr[n],o=0,e=0;
	for (int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]%2==0)
	    e++;
	    
	    else
	    o++;
	}
	cout<<(e>o?"READY FOR BATTLE\n":"NOT READY\n");

}