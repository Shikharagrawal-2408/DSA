/*
Motivation
Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has X GB of space remaining. His 
friend has N movies represented with 
(Si,Ri) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and X.
N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ri.

Output
For each test case, print a single line containing one integer - the highest rating of an IMDB movie which Chef can store in his hard disk.

Constraints
1≤T≤10
1≤N≤5⋅10 
1≤X≤10 

Sample 1:
Input
3
1 1
1 1
2 2
1 50
2 100
3 2
1 51
3 100
2 50

Output
1
100 
51
Explanation:
Example case 1: Since there is only 1 movie available and requires space equivalent to the empty space in the hard disk, Chef can only obtain 
maximum IMDB rating of 1.
*/
/*
This program is designed to help a user select the best movie they can watch based on available storage space. It processes multiple test cases,
 and for each test case, two integers n and x are read — where n is the number of movies available, and x is the total space available on the
  device (in some unit, like GB).

The program then reads two arrays of length n:

arr[], where each element represents the space required for a movie,

arr1[], where each element represents the IMDb rating of the corresponding movie.

The goal is to find the maximum IMDb rating among all movies that can fit within the given space x. To do this, the program iterates through 
each movie and checks whether its required space (arr[i]) is less than or equal to x. If so, it compares its IMDb rating (arr1[i]) with the 
current maximum and updates the maximum if the rating is higher.

After evaluating all movies, it prints the highest possible IMDb rating among the movies that can be watched (i.e., that fit in the available
space). This logic is particularly useful in decision-making problems where a selection has to be made based on multiple constraints 
(like memory and quality).
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
	    
	    int arr[n],arr1[n];
	    
	    // n no of movies
	    //x no of spaces
	    
	    //arr spaces
	    //arr1 imdb rating
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        cin>>arr1[i];
	    }
	  
	    int max=0;
	    for(int i=0;i<n;i++)
	    {
	        if(x>=arr[i])
	        {
	            if(arr1[i]>max)
	            max=arr1[i];
	        }
	    }
	    cout<<max<<endl;
	}
}
