/*
Write a function that takes an unsigned integer and returns the number of 1 bits it has.

Example:

The 32-bit integer 11 has binary representation

00000000000000000000000000001011
so the function should return 3.

Note that since Java does not have unsigned int, use long for Java
*/

int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int ans=0;
unsigned int k=A;
    while(k)
    {
      if(1&k)
        {
            ans++;
        } 
        k=k>>1;
    }
    return ans;
}
