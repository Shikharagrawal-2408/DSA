/*      Water Mixing
Chef is setting up a perfect bath for himself. He has X litres of hot water and Y litres of cold water.
The initial temperature of water in his bathtub is A degrees. On mixing water, the temperature of the bathtub changes as following:
The temperature rises by 1 degree on mixing 1 litre of hot water.
The temperature drops by 1 degree on mixing 1 litre of cold water.
Determine whether he can set the temperature to B degrees for a perfect bath.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of four space-separated integers A,B,X, and Y — the initial temperature of bathtub, 
the desired temperature of bathtub, the amount of hot water in litres, and the amount of cold water in litres respectively.

Output Format
For each test case, output on a new line, YES if Chef can get the desired temperature for his bath, and NO otherwise.

Constraints
1≤T≤2000
20≤A,B≤40
0≤X,Y≤20

Input
4
24 25 2 0
37 37 2 9
30 20 10 9
30 31 0 20

Output
YES
YES
NO
NO

Test case 1: The initial temperature of water is 24 and the desired temperature is 25. Chef has 2 litres of hot water. 
He can add 1 litre hot water in the tub and change the temperature to 24+1=25 degrees.

Test case 2: The initial temperature of water is 37 and the desired temperature is also 37. Thus, Chef does not need 
to add any more water in the bathtub.

Test case 3: The initial temperature of water is 30 and the desired temperature is 20. Chef needs to add 10 litres of cold water to 
reach the desired temperature. Since he only has 9 litres of cold water, he cannot reach the desired temperature.

Test case 4: The initial temperature of water is 30 and the desired temperature is 31. Chef needs to add 1 litre of hot 
water to reach the desired temperature. Since he has no hot water, he cannot reach the desired temperature.
*/
/*
This problem is about adjusting the temperature of a bathtub using available hot and cold water. The initial temperature of the bath is A, 
and the desired temperature is B. Adding 1 liter of hot water increases the temperature by 1 degree, and adding 1 liter of cold water 
decreases it by 1 degree. Chef has X liters of hot water and Y liters of cold water.

To determine if Chef can reach the desired temperature B, we evaluate three cases. First, if A is already equal to B, then 
no adjustment is needed and the answer is "YES". Second, if A < B, Chef needs to increase the temperature. To do this, he must 
have at least B - A liters of hot water (i.e., X ≥ B - A). Third, if A > B, he needs to cool the water and must have at least 
A - B liters of cold water (i.e., Y ≥ A - B). If any of these conditions are not met, it means Chef does not have enough water to 
make the adjustment, so the answer would be "NO". The code checks these conditions and prints "YES" or "NO" accordingly for each test case.

We can also solve this problem using an alternate and more concise approach. Instead of handling different cases separately 
(like when the desired temperature is higher, lower, or equal to the current temperature), we directly check if the target temperature B 
lies within the achievable range. The temperature can decrease by up to Y degrees using cold water or increase by up to X degrees 
using hot water. So, the lowest possible temperature is A - Y, and the highest is A + X. If the desired temperature B lies within 
this range — i.e., A - Y <= B <= A + X — then it's possible to achieve it, and we print "Yes". Otherwise, we print "No". 
This method simplifies the logic into a single condition and handles all scenarios efficiently.
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
	    
	    if(a==b)
	    cout<<"Yes\n";
	    
	    else
	    {
	        if(a<b && (a+x)>=b)
	        cout<<"Yes\n";
	        
	        else if(a>b && (a-y)<=b)
	        cout<<"Yes\n";
	        
	        else
	        cout<<"No\n";
	    }

        /*
        if(a-y<=b && b<=a+x)
	    cout<<"Yes\n";
	    
	    else
	    cout<<"No\n";
    */
	}
}