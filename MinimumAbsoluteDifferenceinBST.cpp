
Problem 530: Minimum Absolute Difference in BST

Given a binary search tree with non-negative values, find the minimum absolute difference between values of any two nodes.

Example:
Input:

   1
    \
     3
    /
   2

Output:
1

Explanation:
The minimum absolute difference is 1, which is the difference between 2 and 1 (or between 2 and 3).
 
Note:
There are at least two nodes in this BST.
_____________________________________________________

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    int getMinimumDifference(TreeNode* root) {
     inOrder(root);
        sort(v.begin(),v.end());
        int min_=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            min_=min(abs(v[i]-v[i+1]),min_);
        }
        return min_;
    }
    void inOrder(TreeNode *root){
        if(root==NULL)
            return;
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }   
};