
Problem 238. Product of Array Except Self

Given an array nums of n integers where n > 1,  
return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:
Input:  [1,2,3,4]
Output: [24,12,8,6]

Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array 
(including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).

Follow up:
Could you solve it with constant space complexity? 
(The output array does not count as extra space for the purpose of space complexity analysis.)
_________________________________________________________________________________________________________

class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
       int n=nums.size();
       vector<int> left(n),right(n),ans(n);
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<nums.size();i++){ //LEFT PRODUCT OF ARRAY
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){  //RIGHT PRODUCT OF ARRAY
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
       return ans;
    }
};

Space Complexity: O(3n) 