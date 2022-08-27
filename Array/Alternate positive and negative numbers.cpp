/*Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
Note: Array should start with positive number.
 

Example 1:

Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
Explanation : Positive elements : 9,4,5,0,2
Negative elements : -2,-1,-5,-3
As we need to maintain the relative order of
postive elements and negative elements we will pick
each element from the positive and negative and will
store them. If any of the positive and negative numbers
are completed. we will continue with the remaining signed
elements.The output is 9,-2,4,-1,5,-5,0,-3,2.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
*/
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> positive;
	    vector<int> negative;
	    for(int i=0; i<n;i++){
	        if(arr[i]>=0){
	            positive.push_back(arr[i]);
	        }
	        else if(arr[i]<0){
	            negative.push_back(arr[i]);
	        }
	    }
	    int i=0,j=0,k=0;
	    while(i<positive.size()&& j<negative.size()){
	        if(k%2==0){
	        arr[k++]=positive[i++];
	    }
	    else if(k%2!=0){
	        
	        arr[k++]=negative[j++];
	    }
	    
	    }
	    while(i<positive.size()){
	        arr[k++]=positive[i++];
	    }
	    while(j<negative.size()){
	        arr[k++]=negative[j++];
	    }
	    
	}
};
