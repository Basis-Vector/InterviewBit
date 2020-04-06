/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.

[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0
*/



int Solution::searchInsert(vector<int> &A, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   //auto it=find(A.begin(),A.end(),n);
    //if(it!=A.end())
    if(binary_search(A.begin(),A.end(),n))
    {
        return (lower_bound(A.begin(),A.end(),n)-A.begin());
    }
    else
    {
       return  (upper_bound(A.begin(),A.end(),n)-A.begin());
    }
}
