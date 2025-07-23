/*
Find Only Repetitive Element from 1 to n-1

Given an array arr[] of size n, filled with numbers from 1 to n-1 in random order. The array has only one repetitive element. Your task is to 
find the repetitive element. It is guaranteed that there is a repeating element present in the array.

Input: arr[] = [1, 3, 2, 3, 4]
Output: 3 
Explanation: The number 3 is the only repeating element.

Input: arr[] = [1, 5, 1, 2, 3, 4]
Output: 1  
Explanation: The number 1 is the only repeating element.

Input: arr[] = [1, 1]  
Output: 1
Explanation: The array is of size 2 with both elements being 1, making 1 the repeating element.

Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ n-1 
*/
//Brute Force
//time O(n^2)
//space O(1)
int n=arr.size();
for(int i=0;i<n;i++)
{
    for (int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        return arr[i];
    }
}

// Sorting Approach
//time O(nlogn)
//space O(1)
sort(arr.begin(),arr.end());
int n=arr.size();
for(int i=0;i<n;i++)
{
    if(arr[i]==arr[i+1])
    return arr[i];
}

//HashSet approach
//time O(n)
//space O(n)
unordered_set<int>s;
for(int i:arr)
{
    if(s.find(i)!=s.end())
    return i;

    s.insert(i);
}

// correct And most optimized approach
//time O(n)
//space O(1)
// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // code here
        int n=arr.size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        ans=ans^i^arr[i];
            
        return ans;
    }
};