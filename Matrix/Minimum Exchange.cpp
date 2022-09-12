/* Given a matrix of size n*m. Every cell of matrix contains either 'A' or 'B'. Exchange is defined as swaping the characters between two cells. Your task is to find the minimum number of exchange needed to rearrange the given matrix such that no adjacent cell contains the same characters.
Two cells are adjacent if they share one of their common sides (left,right,front or back if exists). 
 

Example 1:

Input: matrix = {{A,A,B,A},{B,A,B,A},{B,B,A,B}}
Output: 4
Explanation: Minimum number of students whose 
sets got changed are 4 (indexes: ((0,1),(0,2),
(0,3),(2,0))). The final alloted sets are:
A B A B
B A B A
A B A B
Expected Time Complexity: O(n*m)
Expected Space Compelxity: O(1)
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
public:
        int MinimumExchange(vector<vector<char>>matrix) {
		// Code here
		int n = matrix.size();
		int m = matrix[0].size();
		vector<vector<char>>p1(n, vector<char>(m));
		vector<vector<char>>p2(n, vector<char>(m));

		int i, j;
		int c1 = 0, c2 = 0;


		// int p1=0,p2=0,p3=0,p4=0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				if ((i + j) % 2 == 0) {
					p1[i][j] = 'A';
					p2[i][j] = 'B';
				}
				else {
					p1[i][j] = 'B';
					p2[i][j] = 'A';
				}
			}
		}

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				c1 += (matrix[i][j] != p1[i][j]);
				c2 += (matrix[i][j] != p2[i][j]);
			}
		}
		return min(c1, c2);


	}

};
