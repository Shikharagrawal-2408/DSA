/*      Fill Candies
Chef received N candies on his birthday. He wants to put these candies in some bags. A bag has K pockets and each pocket can hold at most 
M candies. Find the minimum number of bags Chef needs so that he can put every candy into a bag.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing three space-separated integers N,K,M.

Output Format
For each test case, print the minimum number of bags Chef needs so that he can put all the candies in one of the bags.

Constraints
1≤T≤1000
1≤N,K,M≤100

Input
4
6 2 3
3 1 2
8 4 1
25 4 2

Output
1
2
2
4

Test case 1: Chef puts 3 candies in the first pocket of a bag and the remaining 3 candies in the second pocket. 
Thus Chef will need only one bag.

Test case 2: Chef puts 2 candies in the only pocket of the first bag and the remaining 1 candy in the only pocket of the second bag. 
Thus Chef will need two bags.

Test case 3: Chef puts 4 candies in the first bag, one candy in each of the 4 pockets and the same for the second bag. 
Thus Chef will need two bags.

Test case 4: Chef puts 2 candies in each of the 4 pockets of three bags, one candy in a pocket of the fourth bag.
*/
/*
In this approach, we aim to calculate the minimum number of bags required to store N candies, where each bag contains K pockets 
and each pocket can hold up to M candies. This means each bag can store a total of K × M candies. For every test case, we divide 
the total number of candies N by the capacity of one bag (K × M) and use the ceil() function to round up, since even if there are 
leftover candies that don't completely fill a bag, Chef still needs a whole bag to store them. This ensures we account for all candies. 
This method is efficient and directly follows the real-world logic of storage — partial space still needs a full container. An 
alternative integer-only way to avoid floating point operations is to use: (N + K*M - 1) / (K*M), which uses integer arithmetic to 
perform ceiling division.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    double n,k,m;
	    cin>>n>>k>>m;
	    
	    cout<<ceil(n/(m*k))<<endl;
	    
	    //int bags = (n + (k * m) - 1) / (k * m); 
	    //cout<<bags;
	}
}