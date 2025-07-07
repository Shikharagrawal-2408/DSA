/*Retrieve the Array
Chef has an array A of length N.

Let f(i) denote the sum 
A1+A2+⋯+Ai and let g(i) denote the sum Ai+Ai+1+⋯+AN.

Chef creates another array B of length N such that Bi=f(i)+g(i) for all 1≤i≤N.

Now, Chef has lost the original array A and needs your help to recover it, given array B. It is guaranteed that Chef has obtained the array 
B from a valid array A.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer 
N — the size of the array A.
The second line of each test case contains N space-separated integers denoting the array B.

Constraints
1≤T≤1000
1≤N≤10 
1≤Bi≤2⋅10^10
*/
/*
This program handles multiple test cases. For each test case, it reads an integer n representing the number of elements in the array,
followed by n integers which are stored in a vector arr. It then calculates the total sum of all the elements in the array and stores 
it in the variable sum. Once the sum is calculated, the program computes a value b as sum / (n + 1). The logic behind this is that the given 
sum is assumed to be the total of n + 1 numbers, and b represents the value that might have been added once extra (or is common to all in a 
particular problem pattern).
After computing b, the program then iterates through each element of the original array and subtracts b from it. 
The resulting values are printed as the output. Essentially, the code reconstructs the original array by removing the extra value b from 
each element. This kind of logic is commonly seen in problems where an additional or repeated value has been added to a set, and we need to 
extract the original values by undoing that transformation.
*/


#include<vector>
#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<long long> arr(n);
	    long long sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    long long b=sum/(n+1);
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]-b<<" ";
	    }
	    cout<<endl;
	}
return 0;
}

