/*
Given an string A. The only operation allowed is to insert characters in the beginning of the string.

Find how many minimum characters are needed to be inserted to make the string a palindrome string.



Input Format

The only argument given is string A.
Output Format

Return the minimum characters that are needed to be inserted to make the string a palindrome string.
For Example

Input 1:
    A = "ABC"
Output 1:
    2
    Explanation 1:
        Insert 'B' at beginning, string becomes: "BABC".
        Insert 'C' at beginning, string becomes: "CBABC".

Input 2:
    A = "AACECAAAA"
Output 2:
    2
    Explanation 2:
        Insert 'A' at beginning, string becomes: "AAACECAAAA".
        Insert 'A' at beginning, string becomes: "AAAACECAAAA".
*/



int Solution::solve(string A) {
    int i=0,j=A.size()-1;
    int cnt=0;
    string k;
    for(int i=0;i<A.size();i++)
    {
        string s=A.substr(0,A.size()-i);
        k=s;
        reverse(s.begin(),s.end());
        if(s==k)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    
    return cnt;
}
