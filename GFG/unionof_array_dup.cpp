//link:-https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?sortBy=submissions&category%5B%5D=Hash&page=1&difficulty%5B%5D=-1
/*
Union of Arrays with Duplicates
You are given two arrays a[] and b[], return the Union of both the arrays in any order.

The Union of two arrays is a collection of all distinct elements present in either of the arrays. If an element appears more than once in one or
both arrays, it should be included only once in the result.

Note: Elements of a[] and b[] are not necessarily distinct.
Note that, You can return the Union in any order but the driver code will print the result in sorted order only.

Examples:

Input: a[] = [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
Output: [1, 2, 3]
Explanation: Union set of both the arrays will be 1, 2 and 3.

Input: a[] = [1, 2, 3], b[] = [4, 5, 6] 
Output: [1, 2, 3, 4, 5, 6]
Explanation: Union set of both the arrays will be 1, 2, 3, 4, 5 and 6.

Input: a[] = [1, 2, 1, 1, 2], b[] = [2, 2, 1, 2, 1] 
Output: [1, 2]
Explanation: Union set of both the arrays will be 1 and 2.

Constraints:
1 ≤ a.size(), b.size() ≤ 106
0 ≤ a[i], b[i] ≤ 105
*/
/*
This function computes the union of two integer vectors a and b. To achieve this, it uses an unordered map freq to store the frequency of each
element, thereby automatically handling duplicates. First, it iterates through vector a and increments the frequency of each element in the map.
Then it does the same for vector b. As a result, every unique element from both vectors gets stored once in the map. Finally, it traverses the
map and pushes each unique key (element) into the result vector result. The resulting vector contains all distinct elements present in either a 
or b. However, note that the final result is not sorted, as unordered maps do not maintain order. If a sorted union is needed, you should sort 
the result before returning it.
*/
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>freq;
        vector<int>result;
        for(int i=0;i<a.size();i++)
        freq[a[i]]++;
        
        for(int i=0;i<b.size();i++)
        freq[b[i]]++;
        
        for (auto it : freq)
        result.push_back(it.first);  

        return result;
    }
};