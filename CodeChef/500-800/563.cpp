/*
Sugarcane Juice Business
While Alice was drinking sugarcane juice, she started wondering about the following facts:
The juicer sells each glass of sugarcane juice for 50 coins.
He spends 20% of his total income on buying sugarcane.
He spends 20% of his total income on buying salt and mint leaves.
He spends 30% of his total income on shop rent.
Alice wonders, what is the juicer's profit (in coins) when he sells N glasses of sugarcane juice?

Input Format
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer N, as described in the problem statement.

Output Format
For each test case, output on a new line the juicer's profit when he sells N glasses of juice.

Constraints
1≤T≤1000
1≤N≤10^6

Input
4
2
4
5

Output
10
30
60
75
150

Test case 1: The total income is 50×2=100 coins. The juicer spends 20 coins on sugarcane, 20 coins on salt and mint leaves and 30 coins on rent.
Thus, the profit is 100−(20+20+30)=30 coins.
Test case 2: The total income is 50×4=200 coins. The juicer spends 40 coins on sugarcane, 40 coins on salt and mint leaves and 60 coins on rent.
Thus, the profit is 200−(40+40+60)=60 coins.
Test case 3: The total income is 50×5=250 coins. The juicer spends 50 coins on sugarcane, 50 coins on salt and mint leaves and 75 coins on rent.
Thus, the profit is 250−(50+50+75)=75 coins.
Test case 4: The total income is 50×10=500 coins. The juicer spends 100 coins on sugarcane, 100 coins on salt and mint leaves and 150 coins on 
rent. Thus, the profit is 500−(100+100+150)=150 coins.
*/
/*
This program calculates the final amount left after deducting certain percentages from an initial value based on the input. For each test case, 
the program reads an integer n, which is used to compute the base amount a as n * 50. This signifies that each unit contributes 50 to the total.
From this total amount a, the program deducts three portions: 20% for the first deduction, another 20% for the second, and 30% for the third. 
These deductions together account for 70% of the original amount. The remaining 30% of the total is considered the final value, which is then 
printed as the output. Essentially, for each input n, the program outputs 30% of n * 50, effectively calculating and displaying the net value 
after all deductions are made. This simulates a scenario where out of a total generated amount, specific percentages are reserved or used up, 
and only a fraction remains.
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
	    
	    int a=n*50;
	    int b=0.2*a;
	    int c=0.2*a;
	    int d=0.3*a;
	    
	    cout<<a-(b+c+d)<<endl;
	}
}