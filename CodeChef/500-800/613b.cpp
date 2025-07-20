/*
Bus Seat Numbering
There is a bus with 30 seats. The seats are numbered from 1 to 30, and the numbering is as depicted in this image.


As can be seen in the image, the bus is divided into two decks - The Lower deck, and the Upper deck, with 15 seats each. And some of the seats 
come as Single and some as Double. For example, Seats 1 and 2 are Double, whereas Seat 11 is a Single.

You will be given a Seat number, and your job is to classify it as one of these 4 types:

Lower Single
Lower Double
Upper Single
Upper Double

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input which contains a single integers N — the seat number.

Output Format
For each test case, output on a new line, the type of seat.

Constraints
1≤T≤100
1≤N≤30

Input
5
6
28
16
13
10

Output
Lower Double
Upper Single
Upper Double
Lower Single
Lower Double

Testcase 1: The seat number 6 is in the Lower deck, and it is a Double. Hence the output is "Lower Double".
Testcase 2: The seat number 28 is in the Upper deck, and it is a Single. Hence the output is "Upper Single".
Testcase 3: The seat number 16 is in the Upper deck, and it is a Double. Hence the output is "Upper Double".
Testcase 4: The seat number 13 is in the Lower deck, and it is a Single. Hence the output is "Lower Single".
Testcase 5: The seat number 10 is in the Lower deck, and it is a Double. Hence the output is "Lower Double".
*/
/*
In this problem, a bus has 30 seats numbered from 1 to 30, divided into two decks — Lower deck (seats 1 to 15) and Upper deck (seats 16 to 30).
Within each deck, some seats are Single and others are Double. Specifically, in the Lower deck, seats 1 to 10 are Double, and 11 to 15 are 
Single. In the Upper deck, seats 16 to 25 are Double, and 26 to 30 are Single. Given a seat number N, your task is to classify it into one of 
the four categories: Lower Single, Lower Double, Upper Single, or Upper Double, based on its position and type. Depending on the seat's range, 
the correct classification is printed as the output.
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
	    
	    if(n<=15)
	    {
	        if(n<=10)
	        cout<<"Lower Double\n";
	        else
	        cout<<"Lower Single\n";
	    }
	    else
	    {
	        if(n>=26)
	        cout<<"Upper Single\n";
	        else
	        cout<<"Upper Double\n";
	    }
	}
}