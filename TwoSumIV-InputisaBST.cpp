
Problem 653: Two Sum IV - Input is a BST

Given a Binary Search Tree and a target number, return true if there exist two elements in the BST such that their sum is equal to the given target.

Example 1:
Input: 
    5
   / \
  3   6
 / \   \
2   4   7

Target = 9
Output: True
 

Example 2:
Input: 
    5
   / \
  3   6
 / \   \
2   4   7

Target = 28

Output: False
__________________________

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
    vector<int> ans;
    bool findTarget(TreeNode* root, int k) {
       inOrder(root);
       int i=0,j=ans.size()-1;
        
        while(i<j){
            if(ans[i]+ans[j]==k){
                return true;
            }
            else if(ans[i]+ans[j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
    void inOrder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inOrder(root->left);
        ans.push_back(root->val);
        inOrder(root->right);
    }
};