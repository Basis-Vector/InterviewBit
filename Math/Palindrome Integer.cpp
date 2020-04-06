/*Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False*/


int Solution::isPalindrome(int A) {
    string s= to_string(A);
    int i=0,j=s.size()-1;
    
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }
        else
        {
            i++;j--;
        }
    }
    return 1;
}
