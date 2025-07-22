/*A. PolandBall and Hypothesis

PolandBall is a young, clever Ball. He is interested in prime numbers. He has stated a following hypothesis: "There exists such a positive 
integer n that for each positive integer m number n·m + 1 is a prime number".
Unfortunately, PolandBall is not experienced yet and doesn't know that his hypothesis is incorrect. Could you prove it wrong? Write a program 
that finds a counterexample for any n.

Input
The only number in the input is n (1 ≤ n ≤ 1000) — number from the PolandBall's hypothesis.

Output
Output such m that n·m + 1 is not a prime number. Your answer will be considered correct if you output any suitable m such that 1 ≤ m ≤ 103. It is guaranteed the the answer exists.

Examples
Input
3
Output
1

Input
4
Output
2

A prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself.

For the first sample testcase, 3·1 + 1 = 4. We can output 1.

In the second sample testcase, 4·1 + 1 = 5. We cannot output 1 because 5 is prime. However, m = 2 is okay since 4·2 + 1 = 9, which is not a 
prime number.
*/
/*
In this problem, PolandBall believes in a hypothesis that for a given number n, the expression n × m + 1 will always yield a prime number for 
any positive integer m. However, this hypothesis is not always true, and our task is to find a counterexample — that is, any value of m (from 1 
to 1000) such that n × m + 1 is not a prime number. The program reads the integer n and then tries values of m from 1 up to 1000. For each m, it
computes the result of n * m + 1 and checks whether it is a prime number. If it finds a result that is not prime, it prints that m and stops. 
This successfully proves that PolandBall's hypothesis doesn't hold for all values and gives a valid counterexample.
*/
#include <iostream>
using namespace std;

bool isPrime(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int n,a;
    cin>>n;
    
    for(int i=1;i<1000;i++)
    {
        a=(n*i)+1;
        if(!isPrime(a))
        {
            cout<<i;
            return 0;
        }
    }   
}