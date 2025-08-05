/*      A. Wrong Subtraction
Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. 
Tanya subtracts one from a number by the following algorithm:

if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
You are given an integer number 𝑛. Tanya will subtract one from it 𝑘 times. Your task is to print the result after all 𝑘 subtractions.

It is guaranteed that the result will be positive integer number.

Input
The first line of the input contains two integer numbers 𝑛 and 𝑘 (2≤𝑛≤10^9, 1≤𝑘≤50) — the number from which Tanya will subtract and 
the number of subtractions correspondingly.

Output
Print one integer number — the result of the decreasing 𝑛 by one 𝑘 times.

It is guaranteed that the result will be positive integer number.

Input
512 4
Output
50

Input
1000000000 9
Output
1

The first example corresponds to the following sequence: 512→511→510→51→50.
*/
/*
In this problem, we are simulating a quirky subtraction process followed by a girl named Tanya. Given a number n, she performs k subtraction 
operations on it with a specific rule: if the last digit of the number is non-zero, she subtracts 1 from the number; but if the last digit is 
zero, she removes the zero by dividing the number by 10. We are asked to apply this operation k times and print the final number. For example, 
if n = 512 and k = 4, the sequence goes as: 512 → 511 (non-zero last digit, subtract 1), 511 → 510, 510 → 51 (last digit was 0, divide by 10), 
51 → 50. The final result is 50. In the code, a while loop runs k times. Inside the loop, it checks whether the last digit of n is zero or not 
using n % 10. If it's non-zero, it decreases n by 1; otherwise, it divides n by 10. After all the operations, the resulting number is printed. 
The constraints are light enough (k ≤ 50) to handle this step-by-step simulation without performance concerns.
*/
#include<iostream>
using namespace std;

int main()
{
    long long int n;
    int m;
    cin>>n>>m;

    while(m--)
    {
        if(n%10!=0)
        n-=1;

        else
        n/=10;
    }
    cout<<n;
}