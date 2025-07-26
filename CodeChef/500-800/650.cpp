/*      Mario and Bullet
Mario's bullet moves at X pixels per frame. He wishes to shoot a goomba standing Y pixels away from him. The goomba does not move.

Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least Z seconds from now.

Input Format
The first line of input will contain an integer T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers X,Y, and Z.

Output Format
For each test case, output in a single line the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the 
goomba after at least Z seconds from now.

Constraints
1≤T≤100
1≤X,Y,Z≤100
X divides Y

Input
3
3 3 5
2 4 1
3 12 8

Output
4
0
4

Test case 1: The speed of the bullet is 3 pixels per frame and the goomba is 3 pixels away from Mario. Thus, it would take 1 second for the 
bullet to reach the goomba. Mario wants the bullet to reach goomba after at least 5 seconds. So, he should fire the bullet after 4 seconds.

Test case 2: The speed of the bullet is 2 pixels per frame and the goomba is 4 pixels away from Mario. Thus, it would take 2 seconds for the 
bullet to reach the goomba. Mario wants the bullet to reach the goomba after at least 1 second. So, he should fire the bullet after 0 seconds. 
Note that, this is the minimum time after which he can shoot a bullet.

Test case 3: The speed of the bullet is 3 pixels per frame and the goomba is 12 pixels away from Mario. Thus, it would take 4 seconds for the 
bullet to reach the goomba. Mario wants the bullet to reach goomba after at least 8 seconds. So, he should fire the bullet after 4 seconds.
*/
/*
This approach efficiently solves the problem by calculating how long the bullet will take to reach the goomba and comparing it with the 
required delay time.

For each test case:
The bullet takes y / x seconds to reach the goomba (since X pixels are covered per second and the goomba is Y pixels away).
But Mario wants the bullet to hit after at least Z seconds. So, he must delay shooting the bullet to ensure this condition is met.
The minimum delay is Z - (Y / X) seconds.
However, if the bullet already takes more than or equal to Z seconds to hit (i.e., Y / X ≥ Z), then Mario can shoot immediately (0 delay).
That's why we take the maximum of 0 and Z - (Y / X) using max(0, z - y / x) to ensure the result is never negative.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    cout<<max(0,z-y/x)<<endl;
	}
}