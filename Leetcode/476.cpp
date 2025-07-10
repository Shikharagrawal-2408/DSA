/*
476. Number Complement
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer num, return its complement.

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
 
Constraints:
1 <= num < 231
*/
/*
The function findComplement computes the bitwise complement of a given positive integer num. The idea is to flip all bits of num only up to the 
most significant bit (MSB), ignoring leading zeroes. To do this, the code first creates a mask that has all bits set to 1, up to the same length
as num in binary. This is done by shifting mask left and setting the lowest bit in each iteration, while simultaneously right-shifting m (a copy
of num) until it becomes 0. For example, if num is 5 (binary 101), the mask becomes 111. Then, it returns num ^ mask, which flips all the bits of
num within the length of the original number. This approach avoids flipping higher-order bits that were not present in the original number. The
check for num == 1 is handled early as a special case to return 0, since the complement of 1 (0001) is 0 (0000).
*/
class Solution {
public:
    int findComplement(int num) {
        int m=num,mask=0;
        if(m==1) return 0;
        while(m!=0)
        {
            mask=(mask<<1)|1;
            m>>=1;
        }
        return num^mask;
    }
};