/*
Given a binary tree, find its maximum depth.

The maximum depth of a binary tree is the number of nodes along the longest path from the root node down to the farthest leaf node.

 NOTE : The path has to end on a leaf node. 
Example :

         1
        /
       2
max depth = 2.
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
 void soln(TreeNode* A,int &ans,int h)
 {
     if(!A->left&&!A->right)
     {
         ans=max(ans,h+1);
         return;
     }
     else if(!A->left)
     {
        soln(A->right,ans,h+1); 
     }
     else if(!A->right)
     {
        soln(A->left,ans,h+1); 
     }
     else
     {
         soln(A->left,ans,h+1);
     soln(A->right,ans,h+1);
     }
     
 }
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL)
    {
        return 0;
    }
    int ans=INT_MIN,h=0;
    soln(A,ans,h);
    return ans;
}
