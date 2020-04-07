/*
Divide two integers without using multiplication, division and mod operator.

Return the floor of the result of the division.

Example:

5 / 2 = 2
Also, consider if there can be overflow cases. For overflow case, return INT_MAX.

Note: INT_MAX = 2^31 - 1
*/


int Solution::divide(int dividend, int divisor){
  /*  bool f=0;
    
    int a=abs(A),b=abs(B);
    if(a==INT_MAX||b==INT_MAX)return INT_MAX;
    if(A<0&&B>0 ||A>0&&B<0 )
    {
        f=true;
    }
    if(a==b)
    {
        if(f)
        {return -1;}
        return 1;
    }    
    if(a<b) return 0;
    
  long long  int ans=1;
   unsigned long long int k=b;
   k=k<<1;
    while(k<=(unsigned long long int)a)
    {
        
        
        ans=ans<<1;
        k=k<<1;
    }
    while(k=>a)
    {
        ans=ans-1;
        k=k-b;
    }
    
    if(f)
    {
        return 0-(int)ans;
    }
    return (int)ans;*/
    int sign = 1;
    if (dividend<0){sign = -sign;}
    if (divisor<0){sign = -sign;}
     
    unsigned long long tmp = abs((long long)dividend);
    unsigned long long tmp2 = abs((long long)divisor);
            
    unsigned long c = 1;
    while (tmp2 < tmp){
        tmp2 = tmp2<<1;    
        c = c<<1;
    }
     
    long long res = 0;
    while (tmp>=abs((long long)divisor)){
        while (tmp2 <= tmp){
            tmp -= tmp2;
            res = res+c;
        }
        tmp2=tmp2>>1;
        c=c>>1;    
    }
     
    return (sign*res >= INT_MAX ||  sign*res < INT_MIN) ? INT_MAX : sign*res;
}
