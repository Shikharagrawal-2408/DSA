/*
1281. Subtract the Product and Sum of Digits of an Integer

Given an integer number n, return the difference between the product of its digits and the sum of its digits.

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
Example 2:

Constraints:

1 <= n <= 10^5
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1,s=0;
        while(n>0)
        {
            int d=n%10;
            p*=d;
            s+=d;
            n/=10;
        }
        return (p-s);
    }
};