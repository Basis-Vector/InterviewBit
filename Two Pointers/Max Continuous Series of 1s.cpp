/*
You are given with an array of 1s and 0s. And you are given with an integer M, which signifies number of flips allowed.
Find the position of zeros which when flipped will produce maximum continuous series of 1s.

For this problem, return the indices of maximum continuous series of 1s in order.

Example:

Input : 
Array = {1 1 0 1 1 0 0 1 1 1 } 
M = 1

Output : 
[0, 1, 2, 3, 4] 

If there are multiple possible solutions, return the sequence which has the minimum start index.
*/


vector<int> Solution::maxone(vector<int> &A, int m) {
    vector<int> zp,kk;
    int id=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        {
            zp.push_back(i);
        }
    }
    int i=0,j=0,ans=INT_MIN,k=0,cnt=0;
    //bool f=false;
    while(j<A.size())
    {
        if(A[j]==0)
        {
            cnt++;
        }
        if(cnt>m)
        {
           // ans=max(ans,(j+1-i-cnt));
          // cout<<j<<" "<<i<<" " <<m<<endl;
           if(((j)-i-m)>ans )
           {
               ans=(j)-i-m;
               
               id=i;
               
           }
            cnt--;
            i=zp[k]+1;
            k++;
            
        }
        j++;
    }
   
    
       // cout<<ans<<" "<<j<<" "<<cnt<<" "<<i<<" "<<id<<endl;
       if((j-i-m)>ans )
           {
               ans=j-i-m;
               id=i;
               
           }
    
   
    for(int v=id;v<ans+m+id;v++)
    {
        kk.push_back(v);
    }
    return kk;
}
