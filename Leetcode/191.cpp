/*
191. Number of 1 Bits

Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.

Constraints:

1 <= n <= 231 - 1
*/

/*
the logic is we are checking the last bit if it is one then AND(&) operation will give 1 otherwise 0
and if it is 1 then count++ as we have to calculate no of one's in the digit and then we are doing right shift which will delete the last bit.

*/


class Solution {
public:
    int hammingWeight(int n) {
        int count=0; // to count no of bits

        while(n!=0) // loop will run until number ends
        {
            if(n&1) // if the last bit is 1 then 1&1 will be one 
            count++; //if it true then count++ as we have to count no of ones

            n=n>>1;//right shifting of one to delete the last bit
        }
        return count;//returning the total count od 1's the bit
    }
};