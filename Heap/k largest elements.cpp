/* Given an array Arr of N positive integers, find K largest elements from the array.  The output elements should be printed in decreasing order.

Example 1:

Input:
N = 5, K = 2
Arr[] = {12, 5, 787, 1, 23}
Output: 787 23
Explanation: 1st largest element in the
array is 787 and second largest is 23.

Expected Time Complexity: O(N + KlogK)
Expected Auxiliary Space: O(K+(N-K)*logK)
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int, vector<int>, greater<int>> pq;// create a min heap.
	    vector<int> ans;
	    for(int i=0; i<n; i++){// iterate in the array and push the elements to the heap while maintaining
	    // the size of the heap to be equal to k.
	        pq.push(arr[i]);
	        if(pq.size()>k){
	            pq.pop();
	        }
	    }
	    while(!pq.empty()){//till heap becomes empty push the elements to the vector.
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    reverse(ans.begin(), ans.end());// reverse the vector.
	    return ans;// return the vector.
	}

};
