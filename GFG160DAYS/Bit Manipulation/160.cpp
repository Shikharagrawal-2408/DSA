/*      Unique Number II
Given an array arr[] containing 2*n + 2 positive numbers, out of which 2*n numbers exist in pairs whereas only two number occur exactly once and
are distinct. Find the other two numbers. Return the answer in increasing order.

Input: arr[] = [1, 2, 3, 2, 1, 4]
Output: [3, 4] 
Explanation: 3 and 4 occur exactly once.

Input: arr[] = [2, 1, 3, 2]
Output: [1, 3]
Explanation: 1 and 3 occur exactly once.

Input: arr[] = [2, 1, 3, 3]
Output: [1, 2]
Explanation: 1 and 2 occur exactly once.

Constraints:
2 ≤ arr.size() ≤ 106 
1 ≤ arr[i] ≤ 5 * 106
arr.size() is even
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> singleNum(vector<int> &arr) {
    
    // Get the XOR of the two numbers we need to find
    int xorVal = 0;
    for (auto i : arr) {
        xorVal = i ^ xorVal;
    }

    // Get its last set bit
    xorVal &= -xorVal;

    vector<int> res(2, 0);
    
    for (int num : arr) {
        // If bit is not set, it belongs to the first set
        if ((num & xorVal) == 0) { 
            res[0] ^= num;
        }
        
        // If bit is set, it belongs to the second set
        else { 
            res[1] ^= num;
        }
    }

    // Ensure the order of the returned numbers is consistent
    if (res[0] > res[1]) {
        swap(res[0], res[1]);
    }

    return res;
}

int main() {
    vector<int> arr = { 1, 2, 3, 2, 1, 4 };
    vector<int> ans = singleNum(arr);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}