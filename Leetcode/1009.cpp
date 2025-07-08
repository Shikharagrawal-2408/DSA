/*
1009. Complement of Base 10 Integer

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Constraints:
0 <= n < 109

*/
/*
This function computes the bitwise complement of a given non-negative integer n. The bitwise complement is calculated by flipping all the bits 
in the binary representation of n up to its most significant bit, while leaving leading zeros untouched.

The function first handles the special case where n is 0. Since the binary of 0 is 0, and its complement is 1, the function returns 1 directly.

For all other values, it initializes a variable mask to 0 and copies n to a temporary variable num. The purpose of mask is to construct a bitmask
 with all bits set to 1 for the same length as the number of bits in n. This is done using a loop where, in each iteration, mask is left-shifted
  by one and ORed with 1, while num is right-shifted until it becomes 0. For example, if n = 5 (binary 101), the mask becomes 111 (binary), which
   is 7 in decimal.

Finally, the function returns the result of n ^ mask, which effectively flips only the bits of n that are within the mask, giving us the bitwise
 complement. An alternative expression using (~n) & mask would give the same result.

This implementation ensures that only the relevant bits are flipped and no extra leading bits are included in the result, making it suitable for
 problems like "Complement of Base 10 Integer".
*/

class Solution {
public:
    int bitwiseComplement(int n) {

        if(n==0) return 1;
        
        int num = n;
        int mask = 0;

        while (num > 0) {
            mask = (mask << 1) | 1;
            num >>= 1;
        }

        return n ^ mask;
        //return (~n)&mask;
    }
};