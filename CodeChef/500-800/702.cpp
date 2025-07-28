/*      Chef and his Apps
Chef's phone has a total storage of S MB. Also, Chef has 2 apps already installed on his phone which occupy X MB and Y MB respectively.

He wants to install another app on his phone whose memory requirement is Z MB. For this, he might have to delete the apps already installed 
on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four integers S,X,Y and Z — the total memory of Chef's phone, 
the memory occupied by the two already installed apps and the memory required by the third app.

Output Format
For each test case, output the minimum number of apps Chef has to delete from his phone so that he can install the third app.

Constraints
1≤T≤1000
1≤S≤500
1≤X≤Y≤S
X+Y≤S
Z≤S

Input
4
10 1 2 3
9 4 5 1
15 5 10 15
100 20 30 75

Output
0
1
2
1

Test Case 1: The unused memory in the phone is 7 MB. Therefore Chef can install the 3 MB app without deleting any app.

Test Case 2: There is no unused memory in the phone. Chef has to first delete one of the apps from the phone and then only he can install 
the 1 MB app.

Test Case 3: There is no unused memory in the phone. Chef has to first delete both the apps from the phone and then only he can install 
the 15 MB app.

Test Case 4: The unused memory in the phone is 50 MB. Chef has to first delete the 30 MB app from the phone and then only he can install 
the 75 MB app.
*/
/*
An alternate way to solve this problem is by first calculating the available free space on Chef’s phone after accounting for the 
two already installed apps. If the remaining storage, i.e., S - (X + Y), is enough to install the new app requiring Z MB, then Chef 
doesn’t need to delete any apps, and the output is 0. However, if there isn't enough free space, we then check whether deleting just 
one of the two apps will make room for the new one. If deleting either X or Y alone gives enough space (i.e., x + z ≤ s or y + z ≤ s), 
then only one app needs to be removed, and the output is 1. Otherwise, both apps must be deleted to create the required space, leading 
to an output of 2. This approach ensures we find the minimum number of deletions needed efficiently for each test case.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    
	    if(s-(x+y)<z)
	    {
	        if(y+z<=s)
	        cout<<"1\n";
	        else if(x+z<=s)
	        cout<<"1\n";
	        else
	        cout<<"2\n";
	    }
	    else
	    cout<<"0\n";
	}
}