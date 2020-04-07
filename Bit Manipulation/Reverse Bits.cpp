/*
Reverse the bits of an 32 bit unsigned integer A.

Input Format:

    First and only argument of input contains an integer A
Output Format:

    return a single unsigned integer denoting minimum xor value
Constraints:

0 <= A < 2^32
For Examples :

Example Input 1:
    A = 0
Example Output 1:
    0
Explanation 1:
        00000000000000000000000000000000  
=>      00000000000000000000000000000000
Example Input 2:
    A = 3
Example Output 2:
    3221225472
Explanation 2:
          00000000000000000000000000000011 
=>        11000000000000000000000000000000
*/

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
     unsigned int k=A,ans=0;
     vector<int> v;
     while(k)
     {
         v.push_back(1&k);
         k=k>>1;
     }
     int s=v.size(),x=31;
     for(int i=0;i<s;i++)
     {
         ans+=v[i]*pow(2,x);
         x--;
     }
    return ans;
}
