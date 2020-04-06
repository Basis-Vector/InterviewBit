/*
The count-and-say sequence is the sequence of integers beginning as follows:

1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11.
11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2,
the sequence is 11.

*/




string Solution::countAndSay(int n) {
    string s="1",ans=s;
    int cnt;
    for(int i=1;i<n;i++)
    {
        ans="";
        for(int j=0;j<s.size();j++)
        {
            char ch=s[j];
            cnt=0;
            while(ch==s[j]&&j<s.size())
            {
                j++;cnt++;
                
            }
            ans+=to_string(cnt);
            ans+=ch;
            j--;
        }
        s=ans;
    }
    return ans;
}
