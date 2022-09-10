/* Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 

Example 1:
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
      //start from the top right end(0,n).
        int i= 0;
        int j=n-1;
         while(j>=0 && i<m){
        if(matrix[i][j]==target){// if the matrix is equal to target then return true.
            return true;
        }
        else if(matrix[i][j]<target){// if target is greater than matrix then search in next row i.e increase the row number as the matrix is gven in given
          //in sorted order from left to right.
            i++;
        }
        else if(matrix[i][j]>target){// if target is less than matrix then decrease the column number as matrix is in sorted oreder from top to bottom..
            j--;
        }
     }
       return false; 
    }
};
