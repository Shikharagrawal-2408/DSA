/*
504. Base 7
Given an integer num, return a string of its base 7 representation.

Input: num = 100
Output: "202"
Example 2:

Input: num = -7
Output: "-10"

Constraints:
-107 <= num <= 107
*/
/*
This function converts a given integer num into its base-7 string representation. It first checks if num is zero and returns "0" immediately if 
so. Then, it determines whether the number is negative by checking if num < 0, storing this in a boolean neg. If the number is negative, it 
takes the absolute value for processing. It then builds the base-7 representation by repeatedly taking the remainder of num % 7 and appending it
to the left of the string ans, effectively constructing the number from least significant digit to most significant. After dividing the number 
by 7 in each iteration, the loop continues until num becomes zero. Finally, if the original number was negative, a - sign is prefixed to the 
result. The resulting string is returned, which represents the number in base-7.
*/
class Solution {
public:
    string convertToBase7(int num) {

        if (num==0) return "0";
        bool neg=num<0;
        num=abs(num);
        string ans="";
        while(num!=0){
            ans=to_string(num%7)+ans;
            num/=7;
        }
        if(neg) ans="-"+ans;

        return ans;
    }
};