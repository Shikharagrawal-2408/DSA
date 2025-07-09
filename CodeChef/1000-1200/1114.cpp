/*
Discrepancies in the Voters List
As you might remember, the collector of Siruseri had ordered a complete revision of the Voters List. He knew that constructing the list of
voters is a difficult task, prone to errors. Some voters may have been away on vacation, others may have moved during the enrollment and so on.

To be as accurate as possible, he entrusted the task to three different officials. Each of them was to independently record the list of voters
and send it to the collector. In Siruseri, every one has a ID number and the list would only list the ID numbers of the voters and not their 
names. The officials were expected to arrange the ID numbers in ascending order in their lists. Voter ID numbers are unique and not duplicated 
in any lists.

On receiving the lists, the Collector realised that there were discrepancies - the three lists were not identical. He decided to go with the 
majority. That is, he decided to construct the final list including only those ID numbers that appeared in at least 2 out of the 3 lists. 
For example if the three lists were
23  30  42  57  90
21  23  35  57  90  92
21  23  30  57  90 
then the final list compiled by the collector would be: 21  23  30  57  90
The ID numbers 35, 42 and 92 which appeared in only one list each do not figure in the final list.

Your task is to help the collector by writing a program that produces the final list from the three given lists.

Input format
The first line of the input contains 3 integers N1, N2 and N3. N1 is the number of voters in the first list, N2 is the number of voters in the 
second list and N3 is the number of voters in the third list. The next N1 lines (lines 2,...,N1+1) contain one positive integer each and 
describe the first list in ascending order. The following

N2 lines (lines N1+2,...,N1+N2+1) describe the second list in ascending order and the final N3 lines (lines N1+N2+2,...,N1+N2+N3+1) describe the
third list in ascending order.

Output format
The first line of the output should contain a single integer M indicating the number voters in the final list. The next M lines (lines 2,...,M+1)
should contain one positive integer each, describing the list of voters in the final list, in ascending order.

Input
5 6 5
23
30
42
57
90
21 
23 
35 
57 
90 
92 
21 
23 
30 
57 
90 

Output
5
21 
23 
30 
57 
90
*/
/*
This program finds and prints the elements that appear in at least two out of three lists. The three lists represent IDs (possibly student roll
numbers, company IDs, etc.), and the goal is to identify which IDs are common in any two or more of the lists.

It first reads three integers n1, n2, and n3, which denote the sizes of the three lists. Then it reads the elements of each list into vectors:
arr1, arr2, and arr3.

To track how many times each ID appears across all three lists, it uses a map<int, int> freq, where:
The key is the ID.
The value is the number of times the ID has appeared (irrespective of which list).
As the program reads each list, it increments the frequency count for each ID in the map.

After processing all three lists, it goes through the map and adds to the result vector all IDs that have a frequency of 2 or more — meaning 
they appear in at least two lists. 
Finally, it prints:The number of such IDs.
Each of those IDs in ascending order, as maps in C++ automatically store keys in sorted order.

This kind of solution is useful for set intersection problems or when merging data from multiple sources and finding overlaps.
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    vector<int> arr1(n1), arr2(n2), arr3(n3);
    map<int, int> freq;

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
        freq[arr1[i]]++;
    }

    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
        freq[arr2[i]]++;
    }

    for (int i = 0; i < n3; i++) {
        cin >> arr3[i];
        freq[arr3[i]]++;
    }

    vector<int> result;
    for (auto const& [key, val] : freq) {
        if (val >= 2) 
            result.push_back(key);
    }

    cout << result.size() << endl;
    for (int id : result) {
        cout << id << endl;
    }
}