/*
231. Power of Two
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.

Input: n = 1
Output: true
Explanation: 2^0 = 1

Input: n = 16
Output: true
Explanation: 2^4 = 16

Input: n = 3
Output: false
 
Constraints:
-2^31 <= n <= 2^31 - 1
*/
/*
The function isPowerOfTwo checks whether a given integer n is a power of 2 by repeatedly dividing n by 2. First, it handles edge cases by 
immediately returning false if n is less than or equal to zero, since powers of two are always positive. Then, using a while loop, it keeps 
dividing n by 2 (implemented efficiently with the bitwise right shift operator n >> 1) until n becomes 1. If at any point n is not divisible by 
2 (i.e., n % 2 != 0), the function returns false, indicating n is not a power of 2. If the loop completes without encountering an odd number, 
the function returns true, confirming that n is a power of 2.
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<=0) return false;
        while(n>1)
        {
            if(n%2!=0)
            return false;
            n=n>>1;
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         int ans=0;
//         for(int i=0;i<=30;i++)
//         {
//             ans=pow(2,i);
//             if(ans==n)
//             return true;
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         int ans=1;
//         for(int i=1;i<=30;i++)
//         {
//             if(ans==n)
//             return true;
        
//         if(ans<INT_MAX/2)
//         ans*=2;
//         }
//         return false;
//     }
// };