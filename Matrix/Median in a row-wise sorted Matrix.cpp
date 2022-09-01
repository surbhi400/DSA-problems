/* Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
Expected Time Complexity: O(32 * R * log(C))
Expected Auxiliary Space: O(1)
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        vector<int> ans;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        int n=ans.size();
        int median= (n+1)/2;
       return ans[median-1];
       
    }
};
