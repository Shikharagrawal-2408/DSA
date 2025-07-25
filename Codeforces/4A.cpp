/* A. Watermelon
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After
that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they
faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs 
even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal 
as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of 
them should get a part of positive weight.

Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Examples
Input
8
Output
YES
For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).
*/
/*
This C++ program checks whether a given integer n can be divided into two even positive integers, each greater than zero. It first takes an 
integer input n. Then, it checks if n is even (n % 2 == 0) and also greater than or equal to 4. If both conditions are satisfied, it prints 
"YES", meaning that such a division is possible. Otherwise, it prints "NO". This logic is based on the fact that the smallest even number 
greater than 0 is 2, so the smallest possible sum of two even numbers is 2 + 2 = 4. Hence, values less than 4 or odd numbers cannot be split 
this way.
*/
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    if(n%2==0&&n>=4)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}