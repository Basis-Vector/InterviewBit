/*
Given a linked list, remove the nth node from the end of list and return its head.

For example,
Given linked list: 1->2->3->4->5, and n = 2.
After removing the second node from the end, the linked list becomes 1->2->3->5.

 Note:
If n is greater than the size of the list, remove the first node of the list.
Try doing it using constant additional space.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int n) {
    int cnt=0;
    ListNode* tem=A;
    while(tem)
    {
        cnt++;
        tem=tem->next;
    }
    if(n>=cnt)
    {
        return A->next;
    }
    else
    {
         ListNode* d=NULL;
         ListNode* tm1=A;
         cnt=cnt-n;
         
        while(cnt)
        {
            d=tm1;
            tm1=tm1->next;
            cnt--;
        }
        d->next=tm1->next;
        return A;
    }
}
