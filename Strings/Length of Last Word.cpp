/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Given s = "Hello World",

return 5 as length("World") = 5.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.
*/



int Solution::lengthOfLastWord(const string s) {
    if(s.size()==0)
    {
        return 0;
    }
    int cnt=0,ans=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            cnt++;
            if(i==s.size()-1)
            {
                if(cnt!=0)
            {ans=cnt;}
            }
        }
       
        else
        {
            if(cnt!=0)
            {ans=cnt;}
            cnt=0;
        }
    }
    return ans;
}
