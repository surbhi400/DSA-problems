/*Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.


Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
  
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0; i<n; i++){
            
            
            if(mp.find(k-arr[i])!=mp.end())// if the difference of k- arr[i] exists in the map then add the frequency of difference to the count.
            {
                count+=mp[k-arr[i]];
            }
            mp[arr[i]]++;// push the number in the map.
        }
       return count;
    }
};
