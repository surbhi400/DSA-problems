/* Given a matrix of size N x M. You have to find the Kth element which will obtain while traversing the matrix spirally starting from the top-left corner of the matrix.

Example 1:

Input: 
N = 3, M = 3, K = 4
A[] = {{1, 2, 3}, 
       {4, 5, 6}, 
       {7, 8, 9}}
Output: 
6
Explanation: Spiral traversal of matrix: 
{1, 2, 3, 6, 9, 8, 7, 4, 5}. Fourth element
is 6.
Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(1)
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int row_start=0;
        int row_end=n-1;
        int col_start=0;
        int col_end=m-1;
        vector<int> ans;
        //int count=0;
        
        while(row_start<=row_end && col_start<=col_end){
            for(int col=col_start; col<=col_end; col++){
                ans.push_back(a[row_start][col]);
            }
            row_start++;
            
            for(int row=row_start; row<=row_end; row++){
                ans.push_back(a[row][col_end]);
            }
           col_end--;
            if(row_start<=row_end){
                for(int col=col_end; col>=col_start; col--){
                ans.push_back(a[row_end][col]);
            }
            row_end--;
            }
            
            if(col_start<=col_end){
                for(int row=row_end; row>=row_start; row--){
                ans.push_back(a[row][col_start]);
            }
            col_start++;
            }
            
        
        
        }
        return ans[k-1];
        
    }

};
