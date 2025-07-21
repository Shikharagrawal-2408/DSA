/* A. Bit++
The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

The language is that peculiar as it has exactly one variable, called x. Also, there are two operations:

Operation ++ increases the value of variable x by 1.
Operation -- decreases the value of variable x by 1.
A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable x. The statement is written without spaces, 
that is, it can only contain characters "+", "-", "X". Executing a statement means applying the operation it contains.

A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it
contains.

You're given a programme in language Bit++. The initial value of x is 0. Execute the programme and find its final value (the value of the 
variable when this programme is executed).

Input
The first line contains a single integer n (1 ≤ n ≤ 150) — the number of statements in the programme.

Next n lines contain a statement each. Each statement contains exactly one operation (++ or --) and exactly one variable x (denoted as letter 
«X»). Thus, there are no empty statements. The operation and the variable can be written in any order.

Output
Print a single integer — the final value of x.

Input
1
++X
Output
1
Input
2
X++
--X
Output
0
*/
/*
In this problem, we are given a fictional programming language called Bit++, which has only one variable x, initially set to 0. Each line of 
the program contains a statement that either increments (++) or decrements (--) the variable x by 1. These operations can appear before or after 
thevariable (like ++X, X++, --X, X--), but the effect remains the same — increasing or decreasing x by 1. Given n such statements, the task is 
to execute each one in order and determine the final value of x. The solution reads all the statements, checks whether the operation is an 
increment or decrement by looking at the second character of the string, and updates x accordingly. Finally, the result is printed.
*/
#include<iostream>
using namespace std;

int main()
{
    int n,x=0;
    cin>>n;

    while(n--)
    {
        string a;
        cin>>a;

        if(a[1]=='+')
        x++;

        else
        x--;
    }
    cout<<x<<endl;
}