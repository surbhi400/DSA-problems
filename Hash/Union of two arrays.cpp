// Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element 
// should be printed in the union.

// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output: 
// 5
// Explanation: 
// 1, 2, 3, 4 and 5 are the
// elements which comes in the union set
// of both arrays. So count is 5.
  
// Expected Time Complexity : O((n+m)log(n+m))
// Expected Auxilliary Space : O(n+m)

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> set;// make an unordered set.
        
        for(int i=0; i<n; i++){
            set.insert(a[i]);// push the elements of the array 1 to set.
        }
        for(int i=0; i<m; i++){
            set.insert(b[i]);// push the elements of the array 2 to set.
        }
        return set.size();// return the size of set.
    }
};
