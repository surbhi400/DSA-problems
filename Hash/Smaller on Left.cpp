/*Given an array arr[ ] of N positive integers, the task is to find the greatest element on the left of every element in the array which is strictly smaller than itself, if this element does not exist for an index print "-1".

Example 1:

Input:
N = 5
arr[] = {2, 3, 4, 5, 1}
Output: 
-1 2 3 4 -1
Explanation:
Greatest element on the left of 3 smaller 
than itself is 2, for 4 it is 3 and for 5 
it is 1. Since 2 is the first element and 
no element on its left is present, so it's 
greatest smaller element will be -1 and for 
1 no element smaller than itself is present 
on its left, so it's greatest smaller element 
is -1.
Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(N).
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
vector<int> Smallestonleft(int arr[], int n)
{
    // We will not use stack here because we are asked greatest element on left.
    // If we would have been askesd nearest smaller element then we can use stack.
    // Complete the function
    set<int> st;//create a set.
    vector<int> ans;
    for(int i=0; i<n; i++){// Iterate in array and for every element find its lower bound.
    // If the lower bound exists then decrease it to the lowest index in the array and return the value
    // at that index in the vector.
      // if lower bound does not exist then return -1 in the vector. 
       auto it=st.lower_bound(arr[i]);
        if(it==st.begin()){
            ans.push_back(-1);
            
        }
        else{
            it--;
            ans.push_back(*it);
        }
        st.insert(arr[i]);
    }
    return ans;// return the vector.
