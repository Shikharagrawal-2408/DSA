/*
367. Valid Perfect Square
Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.

Input: num = 16
Output: true
Explanation: We return true because 4 * 4 = 16 and 4 is an integer.

Input: num = 14
Output: false
Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
 
Constraints:
1 <= num <= 231 - 1
*/
/*
The isPerfectSquare function determines whether the input number num is a perfect square by iteratively checking all integers starting from 1. It 
uses a for loop, where the loop variable i is declared as long long int to prevent overflow during the multiplication i * i. The loop continues 
as long as i * i is less than or equal to num. If at any point i * i is exactly equal to num, the function returns true, indicating that num is a 
perfect square. If the loop finishes without finding such an i, the function returns false, confirming that num is not a perfect square. This 
brute-force method is simple and safe but may be slow for large inputs.
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
       // bool flag=false;
        for(long long int i=1;i*i<=num;++i)
        {
            if (i * i == num) return true;
        }
        return false;
    }
};