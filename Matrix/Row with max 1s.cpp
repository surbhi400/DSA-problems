/* Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing). */
Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   
	  int ans = 0;
    int cnt = 0;
    int row =-1;
    for(int i = 0;i<n;i++)
    {
        cnt = 0;
        for(int j = 0;j<m;j++)
        {
            if(arr[i][j]==1)
                cnt++;
        }
        if(cnt>ans)
        {
            ans = cnt;
            row = i;
        }
    }
    return row;
	    
	   
	}

};
