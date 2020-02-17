
Problem 628: Maximum Product of Three Numbers

Given an integer array, find three numbers whose product is maximum and output the maximum product.

Example 1:
Input: [1,2,3]
Output: 6 

Example 2:
Input: [1,2,3,4]
Output: 24 

Note:
The length of the given array will be in range [3,10^4] and all elements are in the range [-1000, 1000].
Multiplication of any three numbers in the input won't exceed the range of 32-bit signed integer.
___________________________________________________________________________________________________________________

   -->>SOLUTION<<--

class Solution 
{
public:
    int maximumProduct(vector<int>& nums) 
    {
        int ans=1;
        sort(nums.begin(),nums.end());
        if(nums.size()<=3)
        {
            for(int i=0;i<nums.size();i++)
                ans*=nums[i];
        }
        else
        {
            ans=max((nums[0]*nums[1]*nums[nums.size()-1]),
                    (nums[nums.size()-3]*nums[nums.size()-2]*nums[nums.size()-1]));
        }
        return ans;
    }
};