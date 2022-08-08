/*Given an array of n elements, where each element is at most k away from its target position, you need to sort the array optimally.

Example 1:

Input:
n = 7, k = 3
arr[] = {6,5,3,2,8,10,9}
Output: 2 3 5 6 8 9 10
Explanation: The sorted array will be
2 3 5 6 8 9 10
  
Expected Time Complexity : O(nlogk)
Expected Auxilliary Space : O(n)
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
       priority_queue<int,vector<int>,greater<int>> minh;//create a in heap
        vector<int>ans;
        // iterate in the array and if size of heap>k then push that element in the vector.
        for(int i=0;i<num;i++){
            minh.push(arr[i]);
            if(minh.size()>K){
                ans.push_back(minh.top());
                minh.pop();
            }
        }
        // At last push the rest elements to the vector.
        for(int i=0;i<K;i++){
            ans.push_back(minh.top());
            minh.pop();
        }
        return ans;// return the vector.
         
        
    }
};
