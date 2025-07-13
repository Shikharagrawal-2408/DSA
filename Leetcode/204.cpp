/*
204. Count Primes
Medium
Topics
premium lock icon
Companies
Hint
Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106
*/
/*

*/
class Solution {
public:
    int countPrimes(int n) {

        if(n<=1) return 0;
        int count=0;
        vector<bool>res(n,true);

        res[0]=res[1]=false;
        for(int i=2;i<n;i++)
        {
            if(res[i])
            count++;

            for(int j=i*2;j<n;j=j+i)
            res[j]=false;
        }
        return count;
    }
};