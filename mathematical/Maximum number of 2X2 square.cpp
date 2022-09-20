/*  Given the base (in units) of a right-angled isoceles traingle, find the maximum number of 2X2 squares that can fit in the triangle with given base.

Example 1:

Input: 8
Output: 6 
 
Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)
*/-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        //code here
        long long int n =base/2; 
        return n*(n-1)/2;
    }
};
