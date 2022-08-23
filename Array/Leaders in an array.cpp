/* Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        ans.push_back(a[n-1]);// last element is always a leader.
        int max=a[n-1];// store last element as the max element in a variable.
        for(int i=n-2; i>=0; i--){// iterate the array from back and if any element is greater or equal to 
        // current max element then update the variable with it.
            if(a[i]>=max){
                max=a[i];
                ans.push_back(a[i]);// push the element in the vector.
            }
        }
        reverse(ans.begin(),ans.end());// reverse the vector.
        return ans;
        
    }
};
