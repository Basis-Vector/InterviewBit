/*
Merge two sorted linked lists and return it as a new list.
The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.

For example, given following linked lists :

  5 -> 8 -> 20 
  4 -> 11 -> 15
The merged list should be :

4 -> 5 -> 8 -> 11 -> 15 -> 20
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
   ListNode* tem,*ans,*a=A,*b=B;
   if(A->val<=B->val)
   {
       tem=A;
       a=a->next;
   }
   else
   {
       tem=B;
       b=b->next;
   }
   ans=tem;
   //return ans;
   while(a!=NULL&&b!=NULL)
   {
       if(a->val<=b->val)
       {
           tem->next=a;
           tem=a;
           a=a->next;
           
       }
       else
       {
          tem->next=b;
          tem=b;
           b=b->next;
           
       }
   }
   //return ans;
   while(a)
   {
       tem->next=a;
       tem=a;
           a=a->next;
           
   }
   while(b)
   {
      tem->next=b;
      tem=b; 
           b=b->next;
           
   }
   return ans;
}
