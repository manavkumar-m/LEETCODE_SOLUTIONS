
Problem 101: Symmetric Tree

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:
    1
   / \
  2   2
 / \ / \
3  4 4  3
 
But the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3

Note:
Bonus points if you could solve it both recursively and iteratively.
___________________________________________________________________________

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
    bool isSymmetric(TreeNode* root) {
   	TreeNode* a=root,*b=root;
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return true;
        }
        return isSymmetric(a,b);
    }
    bool isSymmetric(TreeNode* a,TreeNode* b){
        if(a==NULL && b==NULL){
            return true;
        }
        if((a==NULL && b!=NULL) || (a!=NULL && b==NULL)){
            return false;
        }
        return((a->val==b->val) && isSymmetric(a->left,b->right) && isSymmetric(a->right,b->left));
    }
};