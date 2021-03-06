
Problem 414: Third Maximum Number

Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number.
The time complexity must be in O(n).

Example 1:
Input: [3, 2, 1]
Output: 1
Explanation: The third maximum is 1.

Example 2:
Input: [1, 2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.

Example 3:
Input: [2, 2, 3, 1]
Output: 1
Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.
_______________________________________________________________________________________________

    -->>SOLUTION<<--

class Solution 
{
public:
    int thirdMax(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        priority_queue<int,vector<int>> pq;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])==s.end())
            {
                s.insert(nums[i]);
                pq.push(nums[i]);
            }
        }
        pq.pop();
        pq.pop();
        if(s.size()<3)
            return nums[nums.size()-1];
        return pq.top();
    }
};