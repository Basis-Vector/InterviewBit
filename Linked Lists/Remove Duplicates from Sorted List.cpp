/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
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
    ListNode* tem=A;
   ListNode* tem1=A->next;
    while(tem1!=NULL )
    {
        if(tem->val==tem1->val)
        {
            if(tem1->next==NULL)
            {
                tem->next=NULL;
                break;
            }
            else
            {
                tem1=tem1->next;
            }
        }
        else
        {
            tem->next=tem1;
            tem=tem1;
        }
    }
    return A;
}
