/*
Given a binary tree, return the inorder traversal of its nodes’ values.

Example :
Given binary tree

   1
    \
     2
    /
   3
return [1,3,2].

Using recursion is not allowed.
*/


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void soln(TreeNode* A,vector<int> &v)
 {
     if(A==NULL)return;
     soln(A->left,v);
     v.push_back(A->val);
     
     
     soln(A->right,v);
     
 }
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> v;
    soln(A,v);
    return v;
}
