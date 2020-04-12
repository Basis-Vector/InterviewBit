/*
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

    342 + 465 = 807
Make sure there are no trailing zeros in the output list
So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int n_a=0,n_b=0;
    ListNode* t_a=A,*t_b=B,*ans;
    while(t_a)
    {
        n_a++;
        t_a=t_a->next;
    }
    while(t_b)
    {
        n_b++;
        t_b=t_b->next;
    }
    
    if(n_a>=n_b)
    {
       ans=A;
       int r=0;
       ListNode* a=A,*b=B,*tp=B,*fr;
       while(a&&b)
       {
           
           int kk=(b->val+a->val+r)%10;
          
           r=(b->val+a->val+r)/10;
            a->val=kk;
         //  cout<<a->val<<" "<<r<<endl;
           if(a->next==NULL)
           {
               fr=a;
               
           }
           a=a->next;
           b=b->next;
       }
       //ListNode* fr;
       //cout<<r<<endl;
       while(a)
       {
           
           int kk=(a->val+r)%10;
           r=(a->val+r)/10;
           
          // cout<<kk<<" "<<r<<endl;
           a->val=kk;
           if(a->next==NULL)
           {
               fr=a;
               
           }
           a=a->next;
       }
      //cout<<r<<endl;;
       if(r>0)
       {
           //cout<<r<<endl;
           
           fr->next=tp;
           tp->val=r;
         //  cout<<tp->val<<endl;
           tp->next=NULL;
       }
       
       return A;
    }
    else
    {
        Solution::addTwoNumbers( B,A);
    }
    
    
    
    
    
  /*  else
    {
      ans=B;
       int r=0;
       ListNode* a=A,*b=B,*tp=A;
       while(a&&b)
       {
           
           int kk=(b->val+a->val+r)%10;
          
           r=(b->val+a->val+r)/10;
            b->val=kk;
         //  cout<<a->val<<" "<<r<<endl;
           
           a=a->next;
           b=b->next;
       }
       ListNode* fr;
       while(b)
       {
           
           int kk=(b->val+r)%10;
           r=(b->val+r)/10;
           
          // cout<<kk<<" "<<r<<endl;
           b->val=kk;
           if(b->next==NULL)
           {
               fr=b;
               
           }
           b=b->next;
       }
      // cout<<fr->val<<r<<endl;;
       if(r>0)
       {
           //cout<<r<<endl;
           fr->next=tp;
           tp->val=r;
           tp->next=NULL;
       }
       //cout<<fr->val<<endl;
       return B;
    }*/
}
