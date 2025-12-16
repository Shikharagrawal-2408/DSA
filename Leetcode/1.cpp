/*
1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up 
to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 
Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 
Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/
/*
This solution uses a hash map to avoid the brute-force O(n²) approach and solves the problem in linear time. 
As the loop scans the array once, it treats each number as a potential second element of the pair and 
calculates the required complement (diff = target - nums[i]). Before storing the current number, it checks 
whether this complement already exists in the map; if it does, that means the earlier index stored in the map 
and the current index together sum to the target, so the answer is returned immediately. If not found, the 
current number is stored in the map with its index for future lookups. This order is critical—checking before
inserting prevents using the same element twice. The unordered_map gives average O(1) lookup time, making the
overall time complexity O(n) with O(n) extra space.
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            
            // if(mp.find(diff)!=mp.end())
            // return {mp[diff],i};
            

            if(mp.count(diff))
            return {mp[diff],i};
            
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};