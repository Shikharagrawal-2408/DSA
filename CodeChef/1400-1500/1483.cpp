/*
Alternating Divisibility
JJ challenges the Chef to construct an array A of length N such that the following conditions hold:
Ai divides Ai+1 when i is odd and 1≤i≤N−1
Ai does not divide Ai+1 when i is even and 1≤i≤N−1
1≤Ai≤2⋅N
All Ai are pairwise distinct
Can you help Chef complete JJ's challenge?

If multiple arrays satisfying the above conditions exist print any one of them.

It is guaranteed that under the given constraints, at least one array satisfying the above conditions exists.

Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - the length of the array A to be constructed.

Output Format
For each test case, output a single line containing N space-separated integers, denoting the elements of the array A you constructed.

Constraints
1≤T≤1000
1≤N≤10^5
It is guaranteed that the sum of N over all test cases does not exceed 5*10^5

Input
1
4

Output
1 3 2 4

Test case-1: [1,3,2,4] is a valid array because:
A1 =1 divides A2=3.
A2 =3 does not divide A3 =2.
A3 =2 divides A4 =4.
*/
/*
This program is designed to generate a custom sequence of m integers for each test case, based on specific rules that involve assigning values
in pairs while incrementing a base value.

For each test case:
It reads an integer m, which indicates the number of elements to be generated.
If m == 1, it simply prints 2 and moves to the next test case. This is a base case handled separately.

Otherwise:
It calculates the starting value v. If m is even, v is initialized as m/2. If m is odd, v is initialized as (m+1)/2. This ensures a balanced
start for further assignments.
It then fills the array arr[] by assigning values in pairs: the element at index j is set to v, and the next element at index j+1 is set to v*2.
Then, v is incremented.
This continues until the array is filled. Since the loop steps by 2, it always fills two elements at a time.
Finally, the generated array is printed.

The logic appears to be creating sequences where the values alternate between a number and its double, with the base number increasing after
each pair. This ensures variety and growth in the sequence. It may be used in problems related to constructing arrays with constraints or 
properties like uniqueness, distinctness, or pairwise conditions.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        
        int v;
        if(m==1)
        {
            cout<<2<<endl;
            continue;
        }
        else if(m%2==0)
        v=m/2;
        else
        v=(m+1)/2;
        int arr[m];
        for(int j=0;j<m;j+=2)
        {
            arr[j]=v;
            arr[j+1]=v*2;
            v++;
        }
     
        
        for(int k=0;k<m;k++)
        cout<<arr[k]<<" ";
        cout<<endl;
    }
}