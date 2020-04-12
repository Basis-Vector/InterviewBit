/*
Given a list, rotate the list to the right by k places, where k is non-negative.

For example:

Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int k) {
    if(k==0)
    {
        return A;
    }
    int cnt=0;
    ListNode* tem=A;
    while(tem)
    {
        cnt++;
        tem=tem->next;
    }
    if(k%cnt==0)
    {
        return A;
    }
    int l=cnt-k%cnt;
    //cout<<l<<endl;
    ListNode* d=NULL;
    ListNode* tm1=A;
    ListNode* ans;
    while(l)
    {
        d=tm1;
        tm1=tm1->next;
        l--;
    }
    d->next=NULL;
    ans=tm1;
    while(tm1->next!=NULL)
    {
        tm1=tm1->next;
    }
    tm1->next=A;
    return ans;
}
