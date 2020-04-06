/*
Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer
*/


int Solution::reverse(int n) {
    int f=0;
    if(n<0)
    {
        f=1;
    }
    
    string s=to_string(n);
   
    long long num=0;
    
    if(f)
    {
      
       for(int i=1;i<s.size();i++)
       {
           num+=(s[i]-'0')*pow(10,i-1);
       }
       num=0-num;
       if(num<INT_MIN)
       {
           return 0;
       }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            num+=(s[i]-'0')*pow(10,i);
        }
        if(num>INT_MAX)
        {
            return 0;
        }
    }
    
    return (int)num;
}
