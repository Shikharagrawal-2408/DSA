/*
Cost of Groceries
Chef visited a grocery store for fresh supplies. There are N items in the store where the ith item has a freshness value Ai and cost Bi.
Chef has decided to purchase all the items having a freshness value greater than equal to X. Find the total cost of the groceries Chef buys.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and X — the number of items and the minimum freshness value an item should have.
The second line contains N space-separated integers, the array A, denoting the freshness value of each item.
The third line contains N space-separated integers, the array B, denoting the cost of each item.

Output Format
For each test case, output on a new line, the total cost of the groceries Chef buys.

Constraints
1≤T≤100
1≤N,X≤100

Input
2
2 20
15 67
10 90
3 1
1 2 3
1 2 3

Output
90
6

Test case 1: Item 2 has freshness value greater than equal to X=20. Thus, Chef buys item 2. The total cost is 90.
Test case 2: Items 1,2, and 3 have freshness value greater than equal to X=1. Thus, Chef buys all 3 items. The total cost is 1+2+3=6.
*/
/*
This program calculates the total taste value of food items that are still fresh based on a given freshness threshold.

For each test case: The program reads two integers: n — the number of food items. x — the freshness threshold value.

Then it reads two arrays of size n: a[] — representing the freshness level of each item. b[] — representing the taste value of each item.

The goal is to sum the taste values (b[i]) of only those items whose freshness (a[i]) is greater than or equal to the given threshold x.

To do this, the code iterates through all items, and if an item's freshness value is >= x, its taste value is added to a running sum s.

After processing all items, the total taste value of acceptable (fresh enough) food items is printed.

This kind of logic is useful in inventory or filtering management where a quality threshold must be met to consider items for use or consumption.

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int j=0;j<n;j++)
            cin>>b[j];

        //x is the freshness value 
        //a[n]>=xorthen there will be sum of that corresponding b[n]
        // your code goes here
        int s=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=x)
            s+=b[i];
        }
        cout<<s<<endl;
    }
    return 0;
}