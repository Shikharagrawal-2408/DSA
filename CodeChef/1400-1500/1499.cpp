/*
Total Correct Submissions
*/
/*
This program is designed to process multiple test cases where, for each test case, a set of coding submissions by multiple participants is 
analyzed. The input begins with an integer n, representing the number of participants. Each participant makes 3 submissions, so a total of 3 * n
records are expected for each test case.

The program uses a map ps to store the total score for each participant. Each submission consists of a string pc (likely the participant's name 
or ID) and an integer s (the score for that submission). As the program reads each submission, it accumulates the score in the map by adding the
score s to the current total for that participant.

Once all 3 * n submissions have been read and total scores for each participant have been recorded in the map, the values (i.e., total scores) 
are extracted into a vector totalsol. This vector is then sorted in ascending order, and finally, the sorted scores are printed space-separated 
on a single line.

Effectively, the program is computing the total score of each participant across their 3 submissions, and then printing all the total scores in 
sorted order for the current test case. This kind of logic is commonly used in contest scoring systems where total scores need to be compared or
 ranked.
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
	    
	    map<string, int> ps;
	    
	    for (int i = 0; i < 3 * n; ++i) {
            string pc;
            int s;
            cin >> pc >> s;
            
            ps[pc]+=s;
	    }
	    
	    vector <int>totalsol;
	    for (auto const& [key, val] : ps) {
            totalsol.push_back(val);
        }

        sort(totalsol.begin(), totalsol.end());

        for (size_t i = 0; i < totalsol.size(); ++i) {
            cout << totalsol[i] << (i == totalsol.size() - 1 ? "" : " ");
        }
        cout << endl;
	}
}