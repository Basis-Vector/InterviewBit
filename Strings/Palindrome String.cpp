/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
*/



int Solution::isPalindrome(string A) {
    string s="",k;
    int d;
    for(int i=0;i<A.size();i++)
    {
        d=A[i];
        if(d>='A' && d<='Z')
        {
            
            s+=tolower(A[i]);
        }
        else if(d>='a' && d<='z')
        {
           s+=A[i]; 
        }
        else if(d>='0' && d<='9')
        {
            s+=A[i];
        }
        
    }
    k=s;
    
    reverse(s.begin(),s.end());
   
    if(k==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
