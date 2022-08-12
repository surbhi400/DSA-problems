/*Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

Example 1:

Input:
N = 6, X = 16
Arr[] = {1, 4, 45, 6, 10, 8}
Output: Yes
Explanation: Arr[3] + Arr[4] = 6 + 10 = 16
  
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	   map<int,int> mp;// create a map;
	    for(int i=0; i<n; i++){// iterate in the array and push the element in the map. If the difference of x and arr[i] exists in the map then return true.
	        if(mp.count(x-arr[i])){
	            return true;
	        }
	        mp[arr[i]]++;
	    }
	    return false;// else return false.
	}
};
