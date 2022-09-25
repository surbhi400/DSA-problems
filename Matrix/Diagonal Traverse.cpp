/* Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.

 

Example 1:


Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,4,7,5,3,6,8,9]
Example 2:

Input: mat = [[1,2],[3,4]]
Output: [1,2,3,4]
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
          int m = mat.size();
        int n = mat[0].size();
        int row = 0;
        int col = 0;
        vector<int> res(m*n);
        for(int i = 0; i < m*n; i++)
        {
            res[i] = mat[row][col];
            
            if((row + col) % 2 == 0)    
            {
                if(col == n-1) row++;    
                else if(row == 0) col++; 
                else row--,col++;       
            }
            else        
            {
                if(row == m-1) col++;   
                else if(col == 0) row++; 
                else row++,col--;       
            }
        }
        return res;
    }
};
