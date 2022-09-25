/* You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.


Example 1:

Input:
n = 6
arr[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are 
[0], [0], [0], [0], [0,0], and [0,0].  
Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
         map<int,int> map;

        ll sum=0; 
        ll count=0; 

        map[0]=1;

        for(int i=0;i<n;i++)

        {

            sum=sum+arr[i];

             count=count+map[sum];

             map[sum]++;

        }

        return count;
    }
};
