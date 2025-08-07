/*      Dracula Eats        Eat, drink, and be scary

There are N spooky days left until Halloween.Dracula dines at a mysterious restaurant that changes its spooky menu daily. 
He particularly enjoys what they serve on Tuesday.

Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next 
N days (including today) before Halloween.

Note that Dracula follows the standard 7-day calendar, with Tuesday immediately following Monday.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The only line of each test case contains a single integer N, denoting the number of spooky days.

Output Format
For each test case, output on a new line the number of times Dracula would have had his favorite meal after N days.

Constraints
1≤T≤1000
1≤N≤1000

Input
4
1
10
15
16

Output
0
2
2
3

Test case 1: The first day is Monday, and Dracula has only one day. So, no Tuesdays are encountered, and the answer is 0.
Test case 2: The first day is Monday, so the second and ninth days are Tuesdays.Dracula can eat his favorite meal twice.
Test case 3: Once again, the second and ninth days are Tuesday, so in 15 days, Dracula still gets to eat his favorite meal only twice.
Test case 4: After the ninth day, the 16-th day is also a Tuesday. So, this time Dracula gets to eat his favorite meal three times - on 
days 2,9,16.
*/
/*
In this problem, Dracula wants to count how many Tuesdays occur in the next N days, starting from Monday (Day 1). Since Tuesday always comes 
right after Monday in the standard 7-day week, the first Tuesday will be on Day 2, the next one on Day 9, then Day 16, and so on — i.e., every 
7 days after Day 2. So, to calculate how many Tuesdays fall within the given N days, we simply need to count how many terms of the arithmetic 
progression 2, 9, 16, ... are less than or equal to N. This is done by starting with a = 2 (first Tuesday) and repeatedly adding 7 (a += 7) 
while a <= N, and we keep increasing a counter (cnt++) each time. At the end of the loop, the value of cnt represents 
how many Tuesdays Dracula can enjoy his favorite meal within the given spooky days. This logic is repeated for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int cnt=0;
        
        int a=2;
        while(a<=n)
        {
            cnt++;
            a+=7;
        }
        cout<<cnt<<endl;
    }
}