/*
ATM Machine

There is an ATM machine. Initially, it contains a total of K units of money. N people (numbered 1 through N) want to withdraw money; for each 
valid i, the i-th person wants to withdraw Ai units of money.
The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, 
if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give 
out anything; in that case, this person will return home directly without trying to do anything else.

For each person, determine whether they will get the required amount of money or not.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers.

Output
For each test case, print a single line containing a string with length N. For each valid i, the i-th character of this string should be '1' if
the i-th person will successfully withdraw their money or '0' otherwise.

Constraints
1≤T≤100
1≤N≤100
1≤Ai≤1,000,000 for each valid i
1≤K≤1,000,000

Input
1
5 10
3 5 3 2 1

Output
11010
0010

Example case 1: The ATM machine initially contains 10 units of money. The first person comes and withdraws 3 units, so the amount remaining in 
the machine is 7. Then the second person withdraws 5 units and the remaining amount is 2. The third person wants to withdraw 3 units, but since 
there are only 2 units of money in the machine, it throws an error and the third person must leave without getting anything. Then the fourth
person withdraws 2 units, which leaves nothing in the machine, so the last person does not get anything.
*/
/*

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int count=k;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(count>=arr[i])
	        {
	            cout<<"1";
	            count-=arr[i];
	        }
	        else
	        cout<<"0";
	    }
	    cout<<endl;
	}
}