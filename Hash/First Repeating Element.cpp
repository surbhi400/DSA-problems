/*Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the 
smallest.

 

Example 1:

Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.

Expected Time Complexity: O(n)
Expected Auxilliary Space: O(n)*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        // iterate in the array and push the elements in the map.
      unordered_map<int,int> map;
      for(int i=0; i<n; i++){
          map[arr[i]]++;
          
      }
      // now map will have the same size as array. so iterate in the map and if any element comes more
      // than once then return its index;
      for(int i=0; i<n; i++){
            if(map[arr[i]]>1){
              return i+1;//(one based indexing while returnning index)
          }
          
        }
        return -1;// if all elements appear only once.
          
      
          
        
    }   
    
};
 
