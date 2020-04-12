/*
Given a singly linked list and an integer K, reverses the nodes of the

list K at a time and returns modified linked list.

 NOTE : The length of the list is divisible by K 
Example :

Given linked list 1 -> 2 -> 3 -> 4 -> 5 -> 6 and K=2,

You should return 2 -> 1 -> 4 -> 3 -> 6 -> 5

Try to solve the problem using constant extra space.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int q) {

    int cnt=0;
    ListNode* tem=A;
    while(tem)
    {
        cnt++;
        tem=tem->next;
    }
    if(q==1)
    {
        return A;
    }
    int m=cnt/q;
    //cout<<m<<endl;
    vector<ListNode*> vi,vf;
    //vi.push_back(A);
    q=q-1;
    ListNode* kk=NULL,*a=A,*b,*ans;
    bool f=0;
    int k=q;
    while(m)
    {
        
             vi.push_back(a);
             
        while(k)
        {
            b=a->next;
            a->next=kk;
            kk=a;
            a=b;
            k--;
        }
        b=a->next;
        a->next=kk;
        vf.push_back(a);
        //return a;
        
        if(f==0)
        {
            ans=a;
            f=1;
        }
        a=b;
        
        //return b;
        
        kk=NULL;
        m--;
        k=q;
        
    }
    int i=0,j=1;
    while(i<vi.size()&&j<vf.size())
    {
        vi[i]->next=vf[j];
        i++;
        j++;
    }
    
    return ans;
}
