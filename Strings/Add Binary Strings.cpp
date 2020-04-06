/*
Given two binary strings, return their sum (also a binary string).

Example:

a = "100"

b = "11"
Return a + b = “111”.
*/


string Solution::addBinary(string A, string B) {
    int k;
    string ans="";
    if(A.size()>B.size())
    {
        k=A.size()-B.size();
        string tm="";
        while(k--)
        {
            tm+='0';
        }
        
        tm=tm+B;B=tm;
    }
    else if(A.size()<B.size())
    {
        k=B.size()-A.size();
        string tm="";
        while(k--)
        {
            tm+='0';
        }
        
        tm=tm+A;A=tm;
        
    }
    int r=0,kk;
    for(int i=A.size()-1;i>=0;i--)
    {
        int num=(A[i]-'0')+(B[i]-'0')+r;
       
        
        r=num/2;
        ans+=to_string(num%2);
        
    }
    if(r==1)
    {
        ans+='1';
    }
    reverse(ans.begin(),ans.end());
    return ans;
   
    
}
