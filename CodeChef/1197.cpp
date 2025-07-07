/*
Convert to permutation
You are given an array A of size N. In one operation, you can:

Choose an index i(1≤i≤N) and increase Ai by 1. 
Find the minimum number of operations required to convert the array A into a permutation of size N. If it is impossible to do so, print −1.

Note that a permutation of size N contains each element from 1 to N exactly once.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains the integer N — the size of the array.
The next line contains N space-separated integers, the elements of the array A.
Output Format
For each test case, output on a new line, the minimum number of operations required to convert the array A into a permutation of size N.
If it is impossible to do so, print −1.
*/

/*
This program processes multiple test cases, and for each test case, it reads an integer n representing the number of elements in the array. It
then reads n integers into a vector arr. To perform the required analysis, it first creates a copy of this array named sarr and sorts it in 
ascending order.

The core logic is to determine whether the sorted array sarr satisfies a specific condition: every element in sarr must be less than or equal to
its 1-based index (i.e., sarr[i] <= i + 1). If any element in the sorted array is found to be greater than its position index + 1, the condition
is violated, and the program outputs -1.

If the condition is satisfied for all elements, it calculates a value o by summing up the difference (i + 1 - sarr[i]) for each element. This 
sum is then printed. The logic can be interpreted as computing the minimum total number of units that must be added across elements to make the 
array a permutation of the first n natural numbers under specific constraints, though the exact problem may vary depending on context.

In summary, the program checks whether a valid transformation of the array is possible under a position-based condition, and if so, computes and
 outputs a derived value; otherwise, it reports that the transformation is invalid with -1.
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> arr(n);
	   for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    vector<int> sarr = arr;
        sort(sarr.begin(), sarr.end());
        
        long long o=0;
        bool p=true;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(sarr[i]>i+1)
	        {
	            p=false;
	            break;
	        }
	        o+=(i+1-sarr[i]);
	    }
	    
	    if(!p)
	    cout<<"-1\n";
	    else
	    cout<<o<<endl;
	}
}