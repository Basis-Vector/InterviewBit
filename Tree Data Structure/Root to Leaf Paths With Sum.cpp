/*
Given a binary tree and a sum, find all root-to-leaf paths where each path’s sum equals the given sum.

For example:
Given the below binary tree and sum = 22,

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \    / \
        7    2  5   1
return

[
   [5,4,11,2],
   [5,8,4,5]
]
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
 void soln(TreeNode* A, vector<vector<int> > &ans,vector<int> v,int ts,int sum)
 {
    v.push_back(A->val);
     if(!A->left&&!A->right)
     {
         ts+=A->val;
        // v.push_back(A->val);
         if(ts==sum)
         {
             ans.push_back(v);
             return;
         }
         else
         {
             return;
         }
     }
     
     if(!A->left)
     {
        
        soln(A->right,ans,v,ts+A->val,sum); 
     }
     else if(!A->right)
     {
         //v.push_back(A->val);
        soln(A->left,ans,v,ts+A->val,sum); 
     }
     else
     {
         //v.push_back(A->val);
        soln(A->left,ans,v,ts+A->val,sum); 
       
        soln(A->right,ans,v,ts+A->val,sum); 
     }
     
 }
 
vector<vector<int> > Solution::pathSum(TreeNode* A, int sum) {
    vector<vector<int> > ans;
    vector<int> v;
    
    int ts=0;
    soln(A,ans,v,ts,sum);
    return ans;
}
