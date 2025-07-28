/*      Too many Floors
Chef and Chefina are residing in a hotel.
There are 10 floors in the hotel and each floor consists of 10 rooms.

Floor 1 consists of room numbers 1 to 10.
Floor 2 consists of room numbers 11 to 20.
Floor i consists of room numbers 10⋅(i−1)+1 to 10⋅i.
You know that Chef's room number is X while Chefina's Room number is Y.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X,Y, the room numbers of Chef and Chefina respectively.

Output Format
For each test case, output the number of floors Chef needs to travel to reach Chefina's room.

Constraints
1≤T≤1000
1≤X,Y≤100
X≠Y

Input
4
1 100
42 50
53 30
81 80

Output
9
0
3
1

Test Case 1: Since Room 1 is on 1st floor and Room 100 is on 10th floor, Chef needs to climb 9 floors to reach Chefina's Room.
Test Case 2: Since Room 42 is on 5th floor and Room 50 is also on 5th floor, Chef does not need to climb any floor.
Test Case 3: Since Room 53 is on 6th floor and Room 30 is on 3rd floor, Chef needs to go down 3 floors to reach Chefina's Room.
Test Case 4: Since Room 81 is on 9th floor and Room 80 is on 8th floor, Chef needs to go down 1 floors to reach Chefina's Room.
*/
/*
In this problem, each floor of the hotel contains 10 consecutive rooms, and the room numbering starts from 1. To determine how many floors 
Chef needs to travel to reach Chefina’s room, we first calculate the respective floors of their room numbers. This is done by using the 
formula ((room_number - 1) / 10) + 1, which maps any room from 1 to 10 to floor 1, 11 to 20 to floor 2, and so on. After finding the floors 
for both Chef (a) and Chefina (b), we compute the absolute difference between them using abs(a - b), which gives the number of floors Chef 
needs to move. This is repeated for each test case. The solution is efficient and directly aligns with the way rooms are structured in the hotel.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    int a=((x-1)/10)+1;
	    int b=((y-1)/10)+1;
	    
	    cout<<abs(a-b)<<endl;
	}
}