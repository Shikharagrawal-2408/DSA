/*      A. Beautiful Year
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 
with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the 
given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the 
answer exists.

Examples
Input
1987

Output
2013

Input
2013
Output
2014
*/
/*
The program finds the smallest year strictly greater than a given year n where all digits are distinct. First, it defines a helper function 
check(int n) that determines if a number has all unique digits. Inside this function, an array arr[10] is used to keep track of digit 
occurrences. The number n is processed digit by digit using n % 10 to extract the last digit, incrementing its count in arr. If any digit 
appears more than once, the function immediately returns false; otherwise, after all digits are checked, it returns true. In main(), the 
program reads n, increments it by 1 to ensure the next year is strictly greater, and then keeps incrementing n until check(n) returns true. 
Finally, it prints the resulting year.
*/
#include<iostream>
using namespace std;

bool check(int n)
{
    int arr[10] = {0};
    while(n>0)
    {
        int d=n%10;
        arr[d]++;
        if (arr[d] > 1) return false;
        n/=10;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    n++;

    while(!check(n))
    n++;
    
    cout<<n<<endl;

}