/*      Complementary Strand in a DNA
You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character A,T,C, and G only.

Chef knows that:
A is complementary to T.
T is complementary to A.
C is complementary to G.
G is complementary to C.

Using the string S, determine the sequence of the complementary strand of the DNA.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case contains an integer N - denoting the length of string S.
Second line contains N characters denoting the string S.

Output Format
For each test case, output the string containing N characters - sequence of nucleotides of the complementary strand.

Constraints
1≤T≤100
1≤N≤100

S contains A, T, C, and G only

Input
4
4
ATCG
4
GTCC
5
AAAAA
3
TAC

Output
TAGC
CAGG
TTTTT
ATG

Test case 1: Based on the rules, the complements of A, T, C, and G are T, A, G, and C respectively. Thus, the complementary string of the given 
string ATCG is TAGC.

Test case 2: Based on the rules, the complements of G, T, and C are C, A, and G respectively. Thus, the complementary string of the given string
GTCC is CAGG.

Test case 3: Based on the rules, the complement of A is T. Thus, the complementary string of the given string AAAAA is TTTTT.

Test case 4: Based on the rules, the complements of T, A, and C are A, T, and G respectively. Thus, the complementary string of the given string
TAC is ATG.
*/
/*
The program processes multiple test cases where each test case represents a DNA strand. For every test case, the program first reads the 
length n and then the actual strand s, which may include spaces between characters. It removes all the spaces to get the clean DNA sequence 
and then constructs a complementary string of the same length. This is done using a switch-case block where each character is replaced with its 
biological complement: A becomes T, T becomes A, C becomes G, and G becomes C. Finally, the complementary DNA strand is printed. This approach 
ensures that both properly formatted and space-separated inputs are handled correctly, making the program robust and flexible within the given 
constraints.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        
        string s, cleaned;

        getline(cin, s); 
        
        for (char c : s) {
            if (c != ' ') {
                cleaned += c;
            }
        }

        string a(n, ' '); 

        for (int i = 0; i < n; ++i) {
            switch (cleaned[i]) {
                case 'A': a[i] = 'T'; break;
                case 'T': a[i] = 'A'; break;
                case 'C': a[i] = 'G'; break;
                case 'G': a[i] = 'C'; break;
            }
        }
        cout << a << endl;
    }
}