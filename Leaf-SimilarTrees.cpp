
Problem 872: Leaf-Similar Trees

Consider all the leaves of a binary tree.  From left to right order, the values of those leaves form a leaf value sequence.

For example, in the given tree above, the leaf value sequence is (6, 7, 4, 9, 8).
Two binary trees are considered leaf-similar if their leaf value sequence is the same.
Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar. 

Note:
Both of the given trees will have between 1 and 100 nodes.
________________________________________________________________

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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        preOrder(root1,v1);
        preOrder(root2,v2);
        int count=0;
        if(v1.size()!=v2.size())
            return false;
        else{
            for(int i=0;i<v1.size();i++){
                if(v1[i]!=v2[i]){
                    count+=1;
                }
            }    
        }
        if(count==0)
            return true;
        return false;
    }
    void preOrder(TreeNode* root,vector<int> &v){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            v.push_back(root->val);
        preOrder(root->left,v);
        preOrder(root->right,v);
    }
};