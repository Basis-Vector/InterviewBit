/*
Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

Example:

Input : [1, 0]
Return : [0, 1]
 Lets say N = size of the array. Then, following holds true :
All elements in the array are in the range [0, N-1]
N * N does not overflow for a signed integer
*/


void Solution::arrange(vector<int> &arr) {
   
int n=arr.size();
    for (int i=0; i < n; i++) 
        arr[i] += (arr[arr[i]]%n)*n; 
  
    
    for (int i=0; i<n; i++) 
        arr[i] /= n; 
}
