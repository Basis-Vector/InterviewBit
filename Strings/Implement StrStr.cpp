/*
Implement strStr().

 strstr - locate a substring ( needle ) in a string ( haystack ). 
Try not to use standard library string functions for this question.

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 NOTE: Good clarification questions:
What should be the return value if the needle is empty?
What if both haystack and needle are empty?
For the purpose of this problem, assume that the return value should be -1 in both cases.
*/



int Solution::strStr(const string A, const string B) {
   // return B.size()-A.size();
    if(A.size()==0||B.size()==0)
    {
        return -1;
    }
    if(A.size()<B.size())return -1;
    //int ans=-1;
    for(int i=0;i<=A.size()-B.size();i++)
    
    {
        int cnt=0;
       for(int j=0;j<B.size();j++)
       {
          if(B[j]==A[i+j])
          {
              cnt++;
          }
          else
          {
              break;
          }
         
       }
       if(cnt==B.size())
       {
           return i;
       }
        
    }
    return -1;
}
