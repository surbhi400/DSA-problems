/* Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

 

Example 1:

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        vector<int> ans;
        d=d%n;
        
        for(int i=d; i<n; i++){
            
           ans.push_back(arr[i]);
            
        }
         for(int i=0; i<d; i++){
            
           ans.push_back(arr[i]);
            
        }
        for(int j=0; j<ans.size(); j++){
           arr[j]=ans[j];
        }
        
    }
};
