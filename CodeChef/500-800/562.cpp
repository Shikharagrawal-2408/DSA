/*
Chef and NextGen
Chef is currently working for a secret research group called NEXTGEN. While the rest of the world is still in search of a way to utilize 
Helium-3 as a fuel, NEXTGEN scientists have been able to achieve 2 major milestones:

Finding a way to make a nuclear reactor that will be able to utilize Helium-3 as a fuelObtaining every bit of Helium-3 from the moon's surface
Moving forward, the project requires some government funding for completion, which comes under one condition: to prove its worth, the project 
should power Chefland by generating at least A units of power each year for the next B years.

Help Chef determine whether the group will get funded assuming that the moon has X grams of Helium-3 and 1 gram of Helium-3 can provide Y units 
of power.

Input Format
The first line of input contains an integer T, the number of testcases. The description of T test cases follows.
Each test case consists of a single line of input, containing four space-separated integers A,B,X,Y respectively.

Output Format
For each test case print on a single line the answer — Yes if NEXTGEN satisfies the government's minimum requirements for funding and No 
otherwise.

You may print each character of the answer string in either uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will
all be treated as identical).

Constraints
1≤T≤1000
1≤A,B,X,Y,≤1000

Input
4
1 2 3 4
4 3 2 1
2 18 9 4
1 100 2 49

Output
Yes
No
Yes
No

Test case 1: Chefland requires A=1 units of power for the next B=2 years. In total, the moon must be capable of providing A⋅B=2 units of power. 
There are in total X=3 grams of Helium-3 on the moon which is capable of providing X⋅Y=12 units of power. 12>2, so the project satisfies the 
minimum requirements for funding. Thus, the answer is Yes.
Test case 2: The total amount of power needed by Chefland is A⋅B=12, whereas the total that can be provided by the Helium-3 present on the moon
is X⋅Y=2, which is insufficient to receive funding, so the answer is No.
Test case 3: The total amount of power needed by Chefland is A⋅B=2⋅18=36, and the total that can be provided by the Helium-3 present on the moon
is X⋅Y=9⋅4=36, which is sufficient to receive funding, so the answer is Yes.
Test case 4: The total amount of power needed by Chefland is A⋅B=1⋅100=100, and the total that can be provided by the Helium-3 present on the 
moon is X⋅Y=2⋅49=98, which is insufficient to receive funding, so the answer is No.
*/
/*
This C++ program is designed to determine whether a given amount of helium energy is sufficient to power a machine over a period of years. 
Here's how it works: For each test case, the program takes four integer inputs:
a: the required units of power per year,
b: the number of years the power is needed,
x: the total grams of helium available,
y: the number of power units that can be generated per gram of helium.

The logic is straightforward. The total power required is a * b, and the total power that can be generated from the helium is x * y. If the 
generated power (x * y) is greater than or equal to the required power (a * b), the program prints "Yes", indicating that the helium is 
sufficient. Otherwise, it prints "No".

This kind of check is common in resource allocation problems where you need to verify if the available resources meet the required demand over a
duration. The use of simple arithmetic and conditional checking makes the solution efficient and easy to understand.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;

	    if(a*b<=x*y)
	    cout<<"Yes\n";
	    
	    else
	    cout<<"No\n";
	}
}