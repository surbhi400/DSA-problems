/* Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
Input:
N = 3 
matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
Output: 45 48 54 87 89 21 70 78 15 
Explanation:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to 
the output as 45 48 54 87 89 21 70 78 15.
Expected Time Complexity: O(N * N)
Expected Auxiliary Space: O(N * N) for the resultant list only.
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
    int size=matrix.size();
       vector<int>ans;
      // for fron traversing part.
       for(int i=0;i<size;i++){
           if(i%2==0){
               for(int j=0;j<size;j++)
               ans.push_back(matrix[i][j]);
           }
           else{// for back traversing part.
               for(int j=size-1;j>=0;j--)
                 ans.push_back(matrix[i][j]);
           }
       }
       return ans;
        
        
    }
};
