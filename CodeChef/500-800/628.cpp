/*.     Watching Movies at 2x
Chef started watching a movie that runs for a total of X minutes.
Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets 
interesting only after the first Y minutes.

How long will Chef spend watching the movie in total?

Note: It is guaranteed that Y is even.

Input Format:- The first line contains two space separated integers  X,Y - as per the problem statement.

Output Format:- Print in a single line, an integer denoting the total number of minutes that Chef spends in watching the movie.

Constraints
1≤X,Y≤1000
Y is an even integer.

Input
100 20

Output
90
For the first Y=20 minutes, Chef watches at twice the usual speed, so the total amount of time spent to watch this portion of the movie is 
Y/2 =10 minutes. For the remaining X−Y=80 minutes, Chef watches at the usual speed, so it takes him 80 minutes to watch the remaining portion 
of the movie. In total, Chef spends 10+80=90 minutes watching the entire movie.

Input
50 24

Output
38
For the first Y=24 minutes, Chef watches at twice the usual speed, so the total amount of time spent to watch this portion of the movie is 
Y/2=12 minutes. For the remaining X−Y=26 minutes, Chef watches at the usual speed, so it takes him 26 minutes to watch the remaining portion of 
the movie. In total, Chef spends 12+26=38 minutes watching the entire movie.
*/
/*
In this problem, Chef is watching a movie that is X minutes long. However, since the initial part of the movie isn't very interesting, Chef 
decides to watch the first Y minutes at double speed. Watching at double speed means the time spent on those Y minutes is effectively halved, 
i.e., Y/2 minutes. The rest of the movie, which is X - Y minutes, is watched at normal speed. So, the total time Chef spends watching the movie 
is the sum of the time taken to watch the first Y minutes at double speed (Y/2) and the remaining X - Y minutes at normal speed. Therefore, the
total time is calculated as (X - Y) + Y / 2. This logic is applied directly in the code, which takes input X and Y, and prints the total time 
accordingly.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	
	cout<<(x-y)+y/2;
}