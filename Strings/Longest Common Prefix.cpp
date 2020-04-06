/*
Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.

For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".



Input Format

The only argument given is an array of strings A.
Output Format

Return longest common prefix of all strings in A.
For Example

Input 1:
    A = ["abcdefgh", "aefghijk", "abcefgh"]
Output 1:
    "a"
    Explanation 1:
        Longest common prefix of all the strings is "a".

Input 2:
    A = ["abab", "ab", "abcd"];
Output 2:
    "ab"
    Explanation 2:
        Longest common prefix of all the strings is "ab".
*/



string Solution::longestCommonPrefix(vector<string> &v) {
    int mn=INT_MAX;
    string s,ans="";
    for(int i=0;i<v.size();i++)
    {
        if(mn>v[i].size())
        {
          mn=v[i].size();
          s=v[i];
        }
      
        
    }
    int  k=INT_MAX;
    int c_d;
    for(int i=0;i<v.size();i++)
    {
        c_d=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==v[i][j])
            {
                c_d++;
            }
            else
            {
                break;
            }
        }
        k=min(k,c_d);
    }
    for(int i=0;i<k;i++)
    {
        ans+=s[i];
    }
    return ans;
}

