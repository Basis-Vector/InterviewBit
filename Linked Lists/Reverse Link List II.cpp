/*
Reverse a linked list from position m to n. Do it in-place and in one-pass.

For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.

 Note:
Given m, n satisfy the following condition:
1 ≤ m ≤ n ≤ length of list. Note 2:
Usually the version often seen in the interviews is reversing the whole linked list which is obviously an easier version of this question. 
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode* t1=NULL,*l=A,*t2=A,*r=NULL;
    int m=B,n=C;
    m=m-1;
    while(m)
    {
       t1=l;
       l=l->next;
       m--;
    }
    //t2=l;
    while(n)
    {
        r=t2;
        t2=t2->next;
        n--;
    }
   
    if(l==r)
    {
        return A;
    }
    ListNode* kk=NULL,*a=l,*b;
    int v=(C-B);
//cout<<v<<endl;
    while(v)
    {
        b=a->next;
        a->next=kk;
        kk=a;
        a=b;
        v--;
    }
    
    a->next=kk;
   // return r;
    if(t1==NULL&&t2==nullptr)
    {
        return r;
    }
    else if(t1==NULL)
    {
        l->next=t2;
        return r;
    }
    else if(t2==NULL)
    {
        t1->next=r;
        return A;
    }
    else
    {
        a->next=kk;
    //return a;
    t1->next=a;
    l->next=t2;
    
    return A;
    }
    
}
