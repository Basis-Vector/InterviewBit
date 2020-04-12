/*
Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A->next==NULL)
    {
        return A;
    }
    ListNode* ans=A->next;
    ListNode* l=A;
    ListNode* tem,*h=NULL;
    while(l!=NULL && l->next!=NULL)
    {
        //h=l->next->next;
        
        tem=l->next;
        if(h!=NULL)
       { h->next=tem;}
        l->next=l->next->next;
        tem->next=l;
        l=tem->next->next;
        h=tem->next;
    }
    return ans;
}
