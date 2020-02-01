
Problem 153: Find Minimum in Rotated Sorted Array

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.
You may assume no duplicate exists in the array.

Example 1:
Input: [3,4,5,1,2] 
Output: 1

Example 2:
Input: [4,5,6,7,0,1,2]
Output: 0
______________________________________________________________

   -->>SOLUTION<<--

class Solution
{
public:
    int findMin(vector<int>& nums) 
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
        return pq.top();
    }
};