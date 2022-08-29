/* Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not.

Example 1:

Input:
n = 3, m = 3, x = 62
matrix[][] = {{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}}
Output: 0
Explanation:
62 is not present in the matrix, 
so output is 0.
Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(1)

*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==x){
                    return true;
                }
            }
        }
        return false;
    }
};
