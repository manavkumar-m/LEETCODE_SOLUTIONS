
Problem 33: Search in Rotated Sorted Array

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.
You may assume no duplicate exists in the array.
Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
___________________________________________________________________________________________________________
   -->>SOLUTION<<--

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        stack<int> s;
        for(int i=0;i<nums.size();i++)
            s.push(nums[i]);
        int count=0;
        int u=s.size();
        while(s.empty() == false)
        {
            if(s.top() != target)
            {
                count+=1;
                s.pop();
            }
            else
                break;
        }
        return u-(count+1);
    }
};