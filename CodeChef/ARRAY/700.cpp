/*
Take discount or Not
There are N items in a shop. You know that the price of the i-th item is Ai. Chef wants to buy all the N items.

There is also a discount coupon that costs X rupees and reduces the cost of every item by Y rupees. If the price of an item was initially ≤Y, 
it becomes free, i.e, costs 0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays 
after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of two lines of input.
The first line of the test case contains three space-separated integers — N, X, and Y.
The second line contains N space-separated integers — A1,A2,....An.

Output Format
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.

Constraints
1≤T≤1000
1≤N≤100
1≤X,Y≤10 


Input
2
4 30 10
15 8 22 6
4 40 10
15 8 22 6


Output
COUPON
NO COUPON

Test case 1: The original cost of the items is 15+8+22+6=51. Buying the coupon costs 30, and after buying it the cost of buying all the items 
is 5+0+12+0=17. The total cost of buying everything with the coupon is 30+17=47, which is strictly less than 51. So, Chef will buy the coupon.
Test case 2: The original cost of the items is 15+8+22+6=51. Buying the coupon costs 40, and after buying it the cost of buying all the items 
is 5+0+12+0=17. The total cost of buying everything with the coupon is 40+17=57, which is more than 51. So, Chef will not buy the coupon.
*/
/*
This program helps determine whether using a discount coupon is beneficial for a given shopping scenario.

For each test case:The program reads three integers:
n — the number of items,
x — the cost of the coupon,
y — the discount value the coupon offers per item (i.e., how much price can be reduced per item if the coupon is used).
Next, it reads the prices of n items into the array a[].

Two totals are computed:Original Sum (os): the total cost of all items without using the coupon.
Discounted Sum + Coupon Cost (os1 + x): For each item, if the item’s price is greater than y, the new price becomes a[i] - y; otherwise, 
it becomes 0. These discounted prices are summed into os1, and the cost of the coupon x is added.

Finally, the program compares the two totals:
If os1 + x (discounted total + coupon cost) is less than os (original total), then using the coupon saves money, and it prints "COUPON".
Otherwise, it prints "NO COUPON".

This logic is practical for e-commerce applications, where a decision must be made whether applying a coupon actually results in net savings
or not.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        //n no of items
        //x value of coupon
        // y value decrease;
        cin>>n>>x>>y;
        int a[n];
        long long os=0,os1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            os+=a[i];
            os1+=max(0,a[i]-y);
        }
        
        if((os1+x)<os)
        cout<<"COUPON\n";
        else
        cout<<"NO COUPON\n";
    }
}
