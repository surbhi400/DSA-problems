/* Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)

*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
       int j,k;
       for(int i=0;i<n;i++)
       {
           j=i+1;
           k=n-1;
           while(j<k)
           {
               if(A[i] + A[j] + A[k] == X){
                   return true; 
                   
               }
               else if(A[i] + A[j] + A[k] > X)
               {
                   k--;
               }
               else if(A[i] + A[j] + A[k] < X) {
                   j++; }
           }
           
       }
       return false;
   
    }

};
