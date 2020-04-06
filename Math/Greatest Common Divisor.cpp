/*
Given 2 non negative integers m and n, find gcd(m, n)

GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

Example

m : 6
n : 9

GCD(m, n) : 3 
*/




int Solution::gcd(int A, int B) {
    int mn=min(A,B);
   // int ans=0;
   if(mn==0)
   {return max(A,B);}
    while(mn)
    {
        if(A%mn==0&&B%mn==0)
        {
           return mn;
        }
        else
        {
            mn--;
        }
    }
}
