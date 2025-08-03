/*      A. Bear and Big Brother
Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

Input
The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

Output
Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

Input
4 7
Output
2

Input
4 9
Output
3

Input
1 1
Output
1

In the first sample, Limak weighs 4 and Bob weighs 7 initially. After one year their weights are 4·3 = 12 and 7·2 = 14 respectively 
(one weight is tripled while the other one is doubled). Limak isn't larger than Bob yet. After the second year weights are 36 and 28, 
so the first weight is greater than the second one. Limak became larger than Bob after two years so you should print 2.

In the second sample, Limak's and Bob's weights in next years are: 12 and 18, then 36 and 36, and finally 108 and 72 (after three years). 
The answer is 3. Remember that Limak wants to be larger than Bob and he won't be satisfied with equal weights.

In the third sample, Limak becomes larger than Bob after the first year. Their weights will be 3 and 2 then.
*/
/*
This problem simulates a scenario where two bears, Limak and Bob, are gaining weight each year, but at different rates. Initially, 
Limak’s weight is n and Bob’s weight is m, with the guarantee that Limak's weight is less than or equal to Bob's. Each year, Limak's weight is 
tripled, while Bob's is doubled. The goal is to determine how many complete years it takes for Limak to become strictly heavier than Bob.

The logic is implemented using a while loop that continues as long as Limak’s weight is less than or equal to Bob’s. In each iteration 
(i.e., each year), both Limak’s and Bob’s weights are updated — Limak’s is multiplied by 3, and Bob’s is multiplied by 2. A counter variable 
(count) keeps track of how many years have passed. As soon as Limak's weight exceeds Bob's, the loop stops, and the program prints the value 
of count, which represents the number of years needed for Limak to overtake Bob in weight. This approach efficiently models the year-by-year 
progression and always produces the correct answer due to the exponential nature of the weight growth.
*/
#include <iostream>
using namespace std;
 
int main() {
    int n,m;
    cin>>n>>m;
    
    int count=0;
    while(n<=m)
    {
        count++;
        n*=3;
        m*=2;
    }
    cout<<count;   
}