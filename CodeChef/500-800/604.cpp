/*
Elections in Chefland
Election season has started in Chefland and the election commission wants to know the count of eligible voters.

There are 
N
N people in Chefland where the age of the 
i
t
h
i 
th
  person in 
A
i
A 
i
​
 .
Given that a person needs to be at least 
X
X years old to vote, find the number of eligible voters.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
N
N and 
X
X — the number of people in Chefland, and the minimum age required for a person to vote in Chefland.
The next line contains 
N
N space-separated integers, where the 
i
t
h
i 
th
  integer denotes the age of the 
i
t
h
i 
th
  person.
Output Format
For each test case, output on a new line, the number of eligible voters in Chefland.

Constraints
1
≤
T
≤
200
1≤T≤200
1
≤
N
≤
100
1≤N≤100
1
≤
A
i
,
X
≤
100
1≤A 
i
​
 ,X≤100
Sample 1:
Input
Output
4
4 3
5 3 1 2
3 2
1 3 4
4 2
2 1 2 4
5 6
1 2 3 4 5
2
2
3
0
Explanation:
Test case 
1
1: The minimum age to vote in Chefland is 
3
3 years. There are 
2
2 people with age greater than equal to 
3
3 and thus, there are 
2
2 eligible voters.

Test case 
2
2: The minimum age to vote in Chefland is 
2
2 years. There are 
2
2 people with age greater than equal to 
2
2 and thus, there are 
2
2 eligible voters.

Test case 
3
3: The minimum age to vote in Chefland is 
2
2 years. There are 
3
3 people with age greater than equal to 
2
2 and thus, there are 
3
3 eligible voters.

Test case 
4
4: The minimum age to vote in Chefland is 
6
6 years. There are no people with age greater than equal to 
6
6 and thus, there are no eligible voters.
*/
/*
This C++ program processes multiple test cases to determine how many people in each case are eligible based on their age. First, it reads an integer t, the number of test cases. For each test case, it reads two integers: n (the number of people) and x (the minimum required age). It then reads the ages of all n individuals. For each person, if their age is greater than or equal to x, it increments a counter. After checking all individuals in the test case, it prints the count — i.e., how many people meet or exceed the minimum age requirement. This process repeats for all t test cases.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        int age;
	        cin>>age;
	        if(age>=x)
	        count++;
	    }
	    cout<<count<<endl;
	}
}