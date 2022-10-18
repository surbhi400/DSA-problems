/*Give a N * N square matrix A, return all the elements of its anti-diagonals from top to bottom.

Example 1:

Input: 
N = 2
A = [[1, 2],
     [3, 4]]
Output:
1 2 3 4
Explanation: 

Hence, elements will be returned in the 
order {1, 2, 3, 4}.
  
Expected Time Complexity: O(N*N)
Expected Auxillary Space: O(N*N) */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;ans.push_back(A[0][0]);
		int row=0, col=1;
		
		while(col<N)
		{
		    int i=row, j=col;
		    while(j>=0 && i<N){
		        ans.push_back(A[i][j]);
		        i++;
		        j--;
		    }
		    col++;
		}
		
		col = N-1, row = 1;
		while(row<N)
		{
		    int i=row, j=col;
		    while(j>=0 && i<N){
		        ans.push_back(A[i][j]);
		        j--;
		        i++;
		    }
		    row++;
	}
	return ans;
	}

};
