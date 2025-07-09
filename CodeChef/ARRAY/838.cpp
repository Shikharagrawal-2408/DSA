/*
MIN To MAX
You are given an array A of size N.

Let M be the minimum value present in the array initially.
In one operation, you can choose an element Ai(1≤i≤N) and an integer X(1≤X≤100), and set Ai=X.
Determine the minimum number of operations required to make M the maximum value in the array A.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N - the size of the array.
The next line of each test case contains N space-separated integers A1,A2,...An - the elements of the array.

Output Format
For each test case, output on a new line, the minimum number of operations required to make M the maximum value in the array A.

Constraints
1≤T≤100
1≤N≤100

Input
2
2
1 2
4
2 2 3 4

Output
1
2

Test case 1: The minimum value in the array, M, is initially 1. We can use one operation as following:
Choose A2 and set it as X=1. Thus, the final array becomes [1,1].
Since all elements of the final array are 1, the maximum value of the array is now 1. It can be shown that this is the minimum number of 
operations required to do so.

Test case 2: The minimum value in the array, M, is initially 2. We can use two operations as following:
Choose A4 and set it as X=2. Thus, the array becomes [2,2,3,2].
Choose A3 and set it as X=2. Thus, the array becomes [2,2,2,2].
Since all elements of the final array are 2, the maximum value of the array is now 
*/
/*
This program counts how many elements in an array are strictly greater than the minimum element in that array, for each test case.

For each test case:
It reads an integer n, the number of elements in the array.
Then, it reads n integers into the array a[].

While reading the elements, it keeps track of the minimum value encountered using a variable min initialized with INT_MAX.

After determining the minimum value:
It loops through the array again and counts how many elements are greater than this minimum.

Finally, it prints the count — representing the number of elements that are not equal to the smallest element.

This logic is useful in scenarios where we want to identify how many items are better than the worst-case (e.g., scores higher than the lowest, 
prices more expensive than the cheapest, etc.).
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int min=INT_MAX,count=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min)
            min=a[i];
        }
        
        for (int i=0;i<n;i++)
        {
            if(a[i]>min)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}