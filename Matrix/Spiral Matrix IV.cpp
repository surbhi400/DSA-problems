/*  You are given two integers m and n, which represent the dimensions of a matrix.

You are also given the head of a linked list of integers.

Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.

Return the generated matrix.

 

Example 1:
Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
Explanation: The diagram above shows how the values are printed in the matrix.
Note that the remaining spaces in the matrix are filled with -1.
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
       vector<vector<int>> ans(m,vector<int> (n));
        int r1=0;
        int r2=m-1;
        int c1=0;
        int c2=n-1;
       
        while(r1<=r2 && c1<=c2){
            for(int i=c1; i<=c2; i++){
                if(head!=NULL){
                    ans[r1][i]=head->val;
                    head=head->next;
                }
                else{
                    ans[r1][i]=-1;
                }
            }
            r1++;
            for(int i=r1; i<=r2; i++){
                if(head!=NULL){
                    ans[i][c2]=head->val;
                    head=head->next;
                }
                else{
                    ans[i][c2]=-1;
                }
            }
            c2--;
            
            if(r1<r2){
                for(int i=c2; i>=c1; i--){
                    if(head!=NULL){
                        ans[r2][i]=head->val;
                    head=head->next;
                    }
                   else{
                       ans[r2][i]=-1;
                   } 
                }
               r2--;
            
            }
            if(c1<c2){
                for(int i=r2; i>=r1; i--){
                    if(head!=NULL){
                        ans[i][c1]=head->val;
                        head=head->next;
                    }
                    else{
                        ans[i][c1]=-1;
                    }
                }
                c1++;
            }
        }
        return ans;
      
        
    }
};
