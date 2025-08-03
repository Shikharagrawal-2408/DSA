/*      A. Soldier and Bananas
A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other 
words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

Input
The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana, 
initial number of dollars the soldier has and number of bananas he wants.

Output
Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

Input
3 17 4
Output
13
*/
/*
In this problem, a soldier wants to buy w bananas. The cost of each banana increases linearly: the first banana costs k dollars, the 
second costs 2k, the third 3k, and so on, up to w bananas. So, the total cost he needs to pay is the sum of the first w multiples of k, 
which can be calculated using the arithmetic series formula: k * (1 + 2 + ... + w) = k * w * (w + 1) / 2. However, in the code, instead of 
using the formula, a simple loop is used to accumulate the total cost (a) by adding k * i for each banana from 1 to w. After computing the 
total cost, the code compares this amount with the money the soldier already has (n). If he has enough money, the output is 0, meaning he 
doesn't need to borrow. Otherwise, the program prints how much more money he needs, which is the difference a - n. 
The max(0, a - n) ensures that if the soldier already has enough money, the output is zero rather than a negative number.
*/
#include<iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int a=0;
    int i=1;
    while(i<=w)
    {
        a=a+(k*i);
        i++;
    }
    cout << max(0, a - n);
}