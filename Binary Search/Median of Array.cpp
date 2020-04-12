/*

There are two sorted arrays A and B of size m and n respectively.

Find the median of the two sorted arrays ( The median of the array formed by merging both the arrays ).

The overall run time complexity should be O(log (m+n)).

Sample Input

A : [1 4 5]
B : [2 3]

Sample Output

3
 NOTE: IF the number of elements in the merged array is even, then the median is the average of n / 2 th and n/2 + 1th element.
For example, if the array is [1 2 3 4], the median is (2 + 3) / 2.0 = 2.5 
*/



double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i=0,j=0,tar;
    tar=A.size()+B.size();
    bool f=0;
    if(tar%2==0)
    {
        f=1;
    }
    if(A.size()==0)
    {
        if(f)
        {
            return (B[tar/2]+B[(tar/2)-1])/2.0;
        }
        else
        {
            return B[tar/2]/1.0;
        }
    }
    else if(B.size()==0)
    {
        if(f)
        {
            return (A[tar/2]+A[(tar/2)-1])/2.0;
        }
        else
        {
            return A[tar/2]/1.0;
        }
    }
    else
    {
        int cnt=0;
        
        
        if(!f)
        {
           
           while(cnt<tar/2)
           {
               if(i==A.size())
               {
                   j++;
               }
               else if(j==B.size())
               {
                   i++;
               }
               else
               {
                   if(A[i]<=B[j])
                  {
                   i++;
                   //cout<<i<<" ";
                   }
                  else
                  {
                     // cout<<j<<" ";
                   j++;
                  }
               }
               
               cnt++;
           }//
          // return j;
           if(i==A.size())
               {
                  return (B[j])/1.0;
               }
               else if(j==B.size())
               {
                   return (A[i])/1.0;
               }
           return min(A[i],B[j])/1.0;
        }
        else
        {
           tar--;
            while(cnt<tar/2)
           {
               if(i==A.size())
               {
                   j++;
               }
               else if(j==B.size())
               {
                   i++;
               }
               else
               {
                  if(A[i]<=B[j])
               {
                   i++;
               }
               else
               {
                   j++;
               } 
               }
               
               cnt++;
           }
          // return i/1.0;
          if(i==A.size())
          {
              return (B[j+1]+B[j])/2.0;
          }
          else if(j==B.size())
          {
              return (A[i+1]+A[i])/2.0;
          }
          if(i+1<A.size() &&j+1 <B.size())
            {double s=min(((A[i]+B[j])),min((A[i]+A[i+1]),(B[j]+B[j+1])));
            return s/2.0;}
            else if(i==A.size()-1 && j==B.size()-1)
            {
                return (A[i]+B[j])/2.0;
            }
            else if(j==B.size()-1)
            {
                double s=min((A[i]+A[i+1]),(A[i]+B[j]))/2.0;
                return s;
            }
            else
            {
                 double s=min((B[j]+B[j+1]),(A[i]+B[j]))/2.0;
                 return s;
            }
            
        }
    }
    
      
}
