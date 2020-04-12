/*
Given an array with n objects colored red, white or blue,
sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: Using library sort function is not allowed.

Example :

Input : [0 1 2 0 1 2]
Modify array so that it becomes : [0 0 1 1 2 2]
*/

void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int r=0,w=0,b=0;
    for(auto x:A)
    {
        if(x==0)
        {
            r++;
        }
        else if(x==1)
        {
            w++;
        }
        else 
        {
            b++;
        }
    }
    //cout<<b<<endl;
    for(int i=0;i<r;i++)
    {
        A[i]=0;
    }
    for(int i=r;i<w+r;i++)
    {
        A[i]=1;
    }
    for(int i=r+w;i<b+w+r;i++)
    {
        A[i]=2;
    }
}
