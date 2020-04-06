/*
Given a string A representing a roman numeral.
Convert A into integer.

A is guaranteed to be within the range from 1 to 3999.

NOTE: Read more
details about roman numerals at Roman Numeric System



Input Format

The only argument given is string A.
Output Format

Return an integer which is the integer verison of roman numeral string.
For Example

Input 1:
    A = "XIV"
Output 1:
    14

Input 2:
    A = "XX"
Output 2:
    20
*/



int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 
  

int romanToDecimal(string &str) 
{ 
   
    int res = 0; 
  
 
    for (int i=0; i<str.length(); i++) 
    { 
       
        int s1 = value(str[i]); 
  
        if (i+1 < str.length()) 
        { 
          
            int s2 = value(str[i+1]); 
  
           
            if (s1 >= s2) 
            { 
                
                res = res + s1; 
            } 
            else
            { 
                res = res + s2 - s1; 
                i++; 
            } 
        } 
        else
        { 
            res = res + s1; 
             
        } 
    } 
    return res; 
} 
int Solution::romanToInt(string str) {
   return romanToDecimal(str);
}
