// Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

// For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 
  
// Input:
// n = 5, m = 3
// a[] = {89, 24, 75, 11, 23}
// b[] = {89, 2, 4}

// Output: 1

// Explanation: 
// 89 is the only element 
// in the intersection of two arrays.
  
// Expected Time Complexity: O(n + m).
// Expected Auxiliary Space: O(min(n,m)).
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_set<int> ans;// make an unordered set.
        int count=0;// make a varible count.
        for(int i=0; i<n; i++){
            ans.insert(a[i]);// iterate in array 1 and push it s elements in ans set.
        }
        for(int i=0; i<m; i++){// Now iterate in array 2 and check if its elements is present in ans set
        //or not, if it is present then increment count and remove it from the set to prevent further counting.
            int key=b[i];
            if(ans.find(key)!=ans.end()){
                count++;
                ans.erase(key);
            }
        }
        return count;// return count.
    }
};
