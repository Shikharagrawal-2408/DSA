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

/*
This function takes an integer n as input and returns the result of subtracting the sum of its digits from the product of its digits. The logic 
begins by initializing two variables: p to 1 (for product) and s to 0 (for sum). It then enters a loop that runs until n becomes 0. In each 
iteration, it extracts the last digit of n using n % 10, multiplies that digit into p, and adds it into s. The number n is then reduced by 
removing its last digit using integer division (n /= 10).

After processing all digits, the function returns the difference between the product and the sum of the digits, i.e., p - s. This simple 
digit-wise computation is often seen in basic number manipulation problems to test understanding of arithmetic operations and loops.
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