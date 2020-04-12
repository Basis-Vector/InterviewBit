/*
Given a binary tree, invert the binary tree and return it.
Look at the example for more details.

Example :
Given binary tree

     1
   /   \
  2     3
 / \   / \
4   5 6   7
invert and return

     1
   /   \
  3     2
 / \   / \
7   6 5   4




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
 void soln(TreeNode* A)
 {
     if(A==NULL)
     {
         return;
     }
     else
     {
        TreeNode* tem=A->left;
        A->left=A->right;
        A->right=tem;
     }
     soln(A->left);
     soln(A->right);
     
 }
 
TreeNode* Solution::invertTree(TreeNode* A) {
    soln(A);
    return A;
}
