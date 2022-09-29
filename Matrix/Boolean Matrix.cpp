/* Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

Example 1:

Input:
R = 2, C = 2
matrix[][] = {{1, 0},
              {0, 0}}
Output: 
1 1
1 0 
Explanation:
Only cell that has 1 is at (0,0) so all 
cells in row 0 are modified to 1 and all 
cells in column 0 are modified to 1. */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
         int row=matrix.size();
        int col=matrix[0].size();
        int c=0;
        
        for(int i=0;i<row;i++)
        {
            if(matrix[i][0]==1) c=1;
            for(int j=1;j<col;j++)
            if(matrix[i][j]==1)
            {
                matrix[i][0]=matrix[0][j]=1;
            }
        }
        
        for(int i=row-1;i>=0;i--)
        {
            for(int j=col-1;j>=1;j--)
            if(matrix[i][0]==1 || matrix[0][j]==1)
            matrix[i][j]=1;
            
            if(c==1)
            matrix[i][0]=1;
        }
    
    }
};
