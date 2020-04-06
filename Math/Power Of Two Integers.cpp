/*Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

Example

Input : 4
Output : True  
as 2^2 = 4. */



int Solution::isPower(int A) {
    if(A==1)
    {
        return 1;
    }
    for(int a=2;a<A;a++)
    {
        int ans=A;
        while(ans)
        {
            if(ans%a==0)
            {
                ans=ans/a;
                if(ans==1)
                {
                    return 1;
                }
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}
