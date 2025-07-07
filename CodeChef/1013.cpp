/*
Adjacent Sum Parity
Chef has an array A of length N.
Chef forms a binary array B of length N using the parity of the sums of adjacent elements in A. Formally,


B(i)=(Ai+Ai+1) %2 for 1<=i<=N-1
B(N)=(An+Ai)%2
Here x%y denotes the remainder obtained when x is divided by y.

Chef lost the array A and needs your help. Given array B, determine whether there exists any valid array A which could have formed B.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the size of the array A.
The second line of each test case contains N space-separated integers denoting the array B.

Output Format
For each testcase, output YES if there exists a valid array A, NO otherwise.

Constraints
1≤T≤1000
2≤N≤10 
B∈{0,1}
The sum of N over all test cases do not exceed 3⋅10^5

Input
Output
4
2
0 0
2
1 0
4
1 0 1 0
3
1 0 0
YES
NO
YES
NO
*/
/*
We are assuming the value of arr1[0] as 0 first, and then as 1.
If we get a valid solution with 0, we break the loop and return the answer.
Otherwise, we check with 1.

Here, we are running one loop (first) for the first index value and initializing arr1[0] with that value.
Then we run another loop to traverse the binary array (arr[]) till the second last element.

At each step, we calculate the value of the next element in arr1 using this formula:

arr1[i+1] = (arr[i] - arr1[i] + 2) % 2;
This ensures we handle parity correctly and avoid negative values.

After completing the traversal and constructing the entire arr1[],
we check whether the final condition holds:

(arr1[n-1] + arr1[0]) % 2 == arr[n-1]
If this is true, we print the answer as "YES" and break the loop.
If not, we continue with the next value of first.

If none of the two cases (0 or 1) work, then we print "NO".
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n],arr1[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    bool flag=false;
	    //first for parity issue
	    for(int first=0;first<=1;first++)
	    {
	        arr1[0]=first;
	       for(int i=0;i<n-1;i++)
	       {
	            if((arr1[i]-arr[i])%2==0)
	            {
                   arr1[i+1]=0;
                }
                 else
	            {
	               arr1[i+1]=1;
	            }
	       }
	    if((arr1[n-1]-arr1[0])%2==arr[n-1])
	    {
	        flag=true;
	        break;
	    }
	    }
	    
	    if(flag) cout<<"YES\n";
	    else    cout<<"NO\n";
	   
	}

}
