/*
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Example :

Given the below binary tree and sum = 22,

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
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
 void soln(TreeNode* A, int& ans,int ts,int sum)
 {
    
     if(!A->left&&!A->right)
     {
         ts+=A->val;
         if(ts==sum)
         {
             ans=1;
             return;
         }
         else
         {
             return;
         }
     }
     if(!A->right)
     {soln(A->left,ans,ts+A->val,sum);}
     else if(!A->left)
     {
       soln(A->right,ans,ts+A->val,sum);  
     }
     else
     {
         soln(A->left,ans,ts+A->val,sum);
         soln(A->right,ans,ts+A->val,sum); 
     }
 }
int Solution::hasPathSum(TreeNode* A, int sum) {
    int ans=0,ts=0;
    soln(A,ans,ts,sum);
    return ans;
}
