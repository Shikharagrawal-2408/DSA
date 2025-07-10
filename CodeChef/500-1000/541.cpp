/*
Water Filling
Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she 
will wait, and not fill them up now.

You are given three integers - B1,B2 and B3.

If B1 =1, it means that the first bottle is full.
If B1 =0, it means that the first bottle is empty.
Similarly, B2 denotes whether the second bottle is full or empty, and B3 denotes it for the third bottle.

Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The only line of each test case contains three space-separated integers, B1,B2 and B3.

Output Format
For each test case, output on a new line, either "Water filling time", or "Not now".

Constraints
1≤T≤1000

Input
2
0 0 0
1 1 1

Output
Water filling time
Not now

Testcase 1: The inputs are 0,0,0. So all three bottles are empty. Since at least two bottles are empty, it is "Water filling time".
Testcase 2: The inputs are 1,1,1. So all three bottles are full. Since it is not the case that at least two bottles are empty, it is "Not now".
*/
/*
This program determines whether it's time to fill water based on the values of three indicators. For each test case, it reads three integers a,
b, and c, each representing the state of a sensor (possibly 0 or 1). It calculates their sum and stores it in the variable s. If the sum is less 
than 2, it means fewer than two sensors are active, so the program outputs "Water filling time". Otherwise, it prints "Not now". This decision 
logic runs for each test case as specified by the input t.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c,s=0;
        cin>>a>>b>>c;
        s=a+b+c;
        
        if(s<2)
        cout<<"Water filling time\n";
        else
        cout<<"Not now\n";
    }
}