/*
860. Lemonade Change
At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified 
by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each 
customer so that the net transaction is that the customer pays $5.

Note that you do not have any change in hand at first.

Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with the correct 
change, or false otherwise.

Input: bills = [5,5,5,10,20]
Output: true
Explanation: 
From the first 3 customers, we collect three $5 bills in order.
From the fourth customer, we collect a $10 bill and give back a $5.
From the fifth customer, we give a $10 bill and a $5 bill.
Since all customers got correct change, we output true.

Input: bills = [5,5,10,10,20]
Output: false
Explanation: 
From the first two customers in order, we collect two $5 bills.
For the next two customers in order, we collect a $10 bill and give back a $5 bill.
For the last customer, we can not give the change of $15 back because we only have two $10 bills.
Since not every customer received the correct change, the answer is false.
 

Constraints:
1 <= bills.length <= 105
bills[i] is either 5, 10, or 20.
*/
/*
The lemonadeChange function simulates a lemonade stand scenario where each lemonade costs $5, and customers pay with $5, $10, or $20 bills. The
goal is to determine if it’s possible to provide the correct change to every customer in the order they appear. The function maintains two 
counters: five for $5 bills and ten for $10 bills. As it iterates over each bill in the bills vector, it updates these counters accordingly. If 
the customer pays with a $5 bill, no change is needed, and the counter is incremented. If the bill is $10, the seller must give back a $5 bill 
as change — if no $5 is available, the function returns false. If the customer pays with a $20 bill, the seller prioritizes giving one $10 and 
one $5 as change (since that conserves $5 bills), and if that’s not possible, it tries to give three $5 bills instead. If neither option is 
available, the function returns false. If all transactions can be processed with correct change, the function returns true.
*/
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;

        for (int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            five++;

            else if(bills[i]==10)
            {
                if(five==0) return false;
                five--;
                ten++;
            }
            else
            {
                if(ten>0 && five>0)
                {ten--;
                five--;
                }
                else if(five>=3)
                five-=3;

                else
                return false;
            }
        }
        return true;
    }
};