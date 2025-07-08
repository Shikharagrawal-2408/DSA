/*
7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer 
range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Input: x = 123
Output: 321

Input: x = -123
Output: -321

Input: x = 120
Output: 21
 

Constraints:

-2^31 <= x <= 2^31 - 1
*/
/*
This function takes an integer n as input and returns its reversed form. If the reversed number exceeds the range of a 32-bit signed integer 
(INT_MIN to INT_MAX), it returns 0 to indicate overflow.

The logic uses a variable ans initialized to 0 to build the reversed number digit by digit. In each iteration of the loop, it extracts the last 
digit of n using n % 10 and checks if appending this digit would cause an overflow. The overflow check is done using:

if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))return 0;
This condition ensures that multiplying ans by 10 and adding the next digit won't exceed the allowed integer limits.

If it's safe, the digit is added to the result by computing ans = ans * 10 + d, and the original number n is shortened by one digit using integer
 division (n /= 10). The loop continues until n becomes 0. Finally, the reversed number is returned.

This function is useful in problems where you need to reverse digits of a number safely while handling potential overflows, such as those found
in Leetcode-style coding challenges.

*/


class Solution {
public:
    int reverse(int n) {
        int ans=0;
        while(n!=0)
        {
            int d=n%10;
            if((ans>INT_MAX/10) || (ans<INT_MIN/10))
            return 0;

            ans=(ans*10)+d;
            n/=10;
        }
        return ans;
    }
};