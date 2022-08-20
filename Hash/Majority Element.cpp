/* Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        unordered_map<int,int> mp;
        for(int i=0; i<size; i++){// put the elements in the map.
            mp[a[i]]++;
            
    }
        for(auto it:mp ){// iterate in the map and return the element with freq greater than half the size of array.
            if(it.second>size/2){
                return it.first;
            }
        }
        // if there is no such element then retun -1.    
        return -1;    
        
        
        
        
    }
};
