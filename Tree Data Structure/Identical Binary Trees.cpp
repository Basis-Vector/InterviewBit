/*
Given two binary trees, write a function to check if they are equal or not.

Two binary trees are considered equal if they are structurally identical and the nodes have the same value.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

Example :

Input : 

   1       1
  / \     / \
 2   3   2   3

Output : 
  1 or True
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
 
 void soln2(TreeNode* A,vector<int> &v)
 {
     if(A==NULL)
     {return;}
     soln2(A->left,v);
     v.push_back(A->val);
     soln2(A->right,v);
 }
 void soln1(TreeNode* A,vector<int> &v)
 {
     if(A==NULL)
     {return;}
     soln1(A->left,v);
     v.push_back(A->val);
     soln1(A->right,v);
 }
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    vector<int> v1,v2;
    soln1(A,v1);
    soln2(A,v2);
    cout<<v2[0]<<endl;;
    if(v1.size()!=v2.size())
    {
        return 0;
    }
    else
    {
        int i=0,j=0;
        while(i<v1.size()&&j<v2.size())
        {
            if(v1[i]!=v2[j])
            {
                return 0;
            }
            i++;j++;
        }
        return 1;
    }
}
