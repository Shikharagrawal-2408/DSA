/*
1475. Final Prices With a Special Discount in a Shop

You are given an integer array prices where prices[i] is the price of the ith item in a shop.

There is a special discount for items in the shop. If you buy the ith item, then you will receive a discount equivalent to prices[j] where j is
the minimum index such that j > i and prices[j] <= prices[i]. Otherwise, you will not receive any discount at all.

Return an integer array answer where answer[i] is the final price you will pay for the ith item of the shop, considering the special discount.

Input: prices = [8,4,6,2,3]
Output: [4,2,4,2,3]
Explanation: 
For item 0 with price[0]=8 you will receive a discount equivalent to prices[1]=4, therefore, the final price you will pay is 8 - 4 = 4.
For item 1 with price[1]=4 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 4 - 2 = 2.
For item 2 with price[2]=6 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 6 - 2 = 4.
For items 3 and 4 you will not receive any discount at all.

Input: prices = [1,2,3,4,5]
Output: [1,2,3,4,5]
Explanation: In this case, for all items, you will not receive any discount at all.

Input: prices = [10,1,1,6]
Output: [9,0,1,6]
 
Constraints:
1 <= prices.length <= 500
1 <= prices[i] <= 1000
*/
/*
The finalPrices function calculates the final prices of items after applying a special discount. For each item in the prices array, the discount
is the price of the first item to its right that is less than or equal to its own price. The function iterates through each item using a nested
loop: the outer loop picks an item at index i, and the inner loop scans forward from i+1 to find the first such qualifying item. If such an item 
is found at index j (prices[j] <= prices[i]), its value is subtracted from the original price at index i, and the loop breaks to move to the
next item. This process is repeated for all elements, modifying the original prices vector in place. Finally, the updated prices vector with all
discounts applied is returned.

*/

/*
Brute force approach
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        //vector <int>answer(prices);
        for (int i=0;i<prices.size();i++)
        {
            for (int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i])
                {
                   // answer[i]=prices[i]-prices[j];
                    prices[i]-=prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};
*/

/*

*/
f