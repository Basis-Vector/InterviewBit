/*
Implement pow(x, n) % d.

In other words, given x, n and d,

find (xn % d)

Note that remainders on division cannot be negative.
In other words, make sure the answer you return is non negative.

Input : x = 2, n = 3, d = 3
Output : 2

2^3 % 3 = 8 % 3 = 2.
*/



unsigned long long int soln(unsigned long long int x,unsigned long long int n,unsigned long long int d)
{
    
    if(n==0)
    {
        return 1%d;
    }
   else if(n%2==0)
    {
        return ((soln(x,n/2,d)%d)*(soln(x,n/2,d)%d)%d);
    }
    else if(n%2!=0)
    {
       return ((x%d)*(soln(x,n/2,d)%d)*(soln(x,n/2,d)%d)%d); 
    }
    
}
#define ll long long int
int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
if(x==0)
{
    return 0;
}
if(x<0)
{
    while(x<0)
    {
        x+=d;
    }
}
unsigned long long int a=x,b=n,c=d;
  unsigned long long int ans= soln(a,b,c);
  
  return (int)ans;
}
