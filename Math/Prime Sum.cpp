/*Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 

If a < c OR a==c AND b < d. */







int isPrime(int x)
{
    int cnt=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            cnt++;
            if(cnt>2)
            {
                return 0;
            }
        }
    }
    return 1;
}
vector<int> Solution::primesum(int A) {
    vector<int> ans;
    for(int i=2;i<=A;i++)
    {
        if(isPrime(i))
        {
            //v.push_back(i);
            if(isPrime(A-i))
            {
                 ans.push_back(i);
                ans.push_back(A-i);
                return ans;
            }
        }
        
    }
    //return v;
    
}
