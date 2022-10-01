/* Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

 

Example 1:

Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int i=0;
        for(i=0; i*i<=x; i++){
            if(i*i==x){
                return i;
            }
           
        }
         return i-1;
    }
};
