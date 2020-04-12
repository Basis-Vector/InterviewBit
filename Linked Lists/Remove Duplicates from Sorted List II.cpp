/*
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
  
    map<int,int> m;
    ListNode* tem=A,*k=A,*dr;
    while(tem)
    {
        m[tem->val]++;
        tem=tem->next;
    }
    bool b=0;
    for(auto x:m)
    {
        if(x.second==1)
        {
            k->val=x.first;
            dr=k;
            k=k->next;
            b=1;
        }
      //  x++;
    }
    if(b==1)
    {
        dr->next=NULL;
      // k=NULL;
        return A;
    }
    else
    {
        return NULL;
    }
    
}
