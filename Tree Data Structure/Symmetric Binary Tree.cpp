/*
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

Example :

    1
   / \
  2   2
 / \ / \
3  4 4  3
The above binary tree is symmetric.
But the following is not:

    1
   / \
  2   2
   \   \
   3    3
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
 
 void soln1(TreeNode* A,vector<int>&v)
 {
     if(A==NULL)
     {
         return;
     }
     
     
     soln1(A->right,v);
     v.push_back(A->val);
     soln1(A->left,v);
 }
 
 void soln(TreeNode* A,vector<int>&v)
 {
     if(A==NULL)
     {
         return;
     }
     soln(A->left,v);
     v.push_back(A->val);
     soln(A->right,v);
 }
int Solution::isSymmetric(TreeNode* A) {
    vector<int> v1,v2;
    soln(A,v1);
    soln1(A,v2);
    int i=0;
    while(i<v1.size())
    {
        if(v1[i]!=v2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
