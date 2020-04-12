/*
Given an integar A.

Compute and return the square root of A.

If A is not a perfect square, return floor(sqrt(A)).

DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY



Input Format

The first and only argument given is the integer A.
Output Format

Return floor(sqrt(A))
Constraints

1 <= A <= 10^9
For Example

Input 1:
    A = 11
Output 1:
    3

Input 2:
    A = 9
Output 2:
    3
*/
    
    
   void soln(int l,int h,int &ans,int n)
{
    int m=l+(h-l)/2;
    if(l>h)
    {
       ans=h;
       return;
    }
    if(m==n/m)
    {
        ans=m;
        return;
    }
    else if(m<n/m)
    {
        soln(m+1,h,ans,n);
    }
    else if(m>n/m)
    {
        soln(l,m-1,ans,n);
    }
}
int Solution::sqrt(int n) {
    if(n==0||n==1)
    {
        return n;
    }
    int ans;
    soln(1,n/2,ans,n);
    return ans;
}
 
