/*
Remove Duplicates from Sorted Array

Given a sorted array, remove the duplicates in place such that each element can appear atmost twice and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

Note that even though we want you to return the new length, make sure to change the original array as well in place

For example,
Given input array A = [1,1,1,2],

Your function should return length = 3, and A is now [1,1,2]
*/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i=0,j=0,cnt=0;
   // bool f=false;
    if(A.size()==1)
    {
        return 1;
    }
    while(j<A.size())
    {
        if(A[i]!=A[j] ||j==A.size()-1)
        {
            if(cnt>=2)
            {
                
                //A[i]=A[i];
                if(j==A.size()-1 && A[i]==A[j])
                {
                    A[i+1]=A[i];
                    A[i+2]=A[j];
                    i++;
                    //f=true;
                }
                else
                {
                 A[i+1]=A[i];
                A[i+2]=A[j];
                i=i+2;
                cnt=1;   
                }
                
            }
            else
            {
                i++;
                A[i]=A[j];
                cnt=1;
            }
        }
        else
        {
            cnt++;
        }
        j++;
    }
    A.erase(A.begin()+i+1,A.end());
   /* if(f)
    {
      A.erase(A.begin()+i,A.end());  
    }
    else
    {
        A.erase(A.begin()+i+1,A.end());
    }
    */
    return A.size();
}
