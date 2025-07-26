/*  Small factorials
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1 <= n <= 100

Output
For each integer n given at input, display a line with the value of n!

Input
4
1
2
5
3

Output
1
2
120
6
*/
/*
In this problem, we are tasked with calculating the factorial of small positive integers, where the factorial of a number n is defined as the 
product of all integers from 1 to n. The challenge here is that the factorial values can grow extremely large, even for relatively small values
of n (e.g., 100! has 158 digits), and such large numbers cannot be stored in standard integer data types. To solve this, the code uses a 
vector<int> to store individual digits of the result, treating the number like how we do manual multiplication. Initially, the result is set 
to 1. Then, for each number from 2 to n, it multiplies the current result with that number using the multiply function, which handles 
digit-by-digit multiplication while managing carry. After completing the multiplication, the vector holds the digits of the factorial in 
reverse order, so the result is printed from the last digit to the first. This process is repeated for each test case input. This approach
ensures correct computation of very large factorials that go beyond the limit of built-in data types.
*/
#include <bits/stdc++.h>
using namespace std;

void multiply(int x, vector<int>& res) {
    int carry = 0;

    for (int i = 0; i < res.size(); i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> res;
    res.push_back(1); 

    for (int i = 2; i <= n; i++) {
        multiply(i, res);
    }

    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        factorial(n);
    }

    return 0;
}