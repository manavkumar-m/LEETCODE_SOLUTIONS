
Problem 81: Search in Rotated Sorted Array II

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e., [0,0,1,2,2,5,6] might become [2,5,6,0,0,1,2]).

You are given a target value to search. If found in the array return true, otherwise return false.

Example 1:
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

Example 2:
Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false
_____________________________________________________________________

   -->>SOLUTION<<--

class Solution 
{
public:
    bool search(vector<int>& nums, int target) 
    {
        set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        if(s.find(target)!=s.end())
            return true;
        return false;
    }
};

