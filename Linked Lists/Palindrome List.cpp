/*
Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Notes:

Expected solution is linear in time and constant in space.
For example,

List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    stack<int> s;
    ListNode* tem=A;
    ListNode* tm1=A;
    while(tem)
    {
       s.push(tem->val);
        tem=tem->next;
    }
    while(tm1)
    {
        if(tm1->val==s.top())
        {
            s.pop();
        }
        else
        {
           return 0; 
        }
        tm1=tm1->next;
    }
    return 1;
}

