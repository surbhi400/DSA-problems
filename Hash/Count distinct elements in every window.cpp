// Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

// Input:
// N = 7, K = 4
// A[] = {1,2,1,3,4,2,3}
// Output: 3 4 4 3
// Explanation: Window 1 of size k = 4 is
// 1 2 1 3. Number of distinct elements in
// this window are 3. 
// Window 2 of size k = 4 is 2 1 3 4. Number
// of distinct elements in this window are 4.
// Window 3 of size k = 4 is 1 3 4 2. Number
// of distinct elements in this window are 4.
// Window 4 of size k = 4 is 3 4 2 3. Number
// of distinct elements in this window are 3.
  
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
       unordered_map<int, int> mp;
        vector<int> ans;
        // for the first windoww of size k.
        for(int i=0; i<k; i++){
            mp[A[i]]++;// push elements and their count in the map.
            
        }
       ans.push_back(mp.size());// push it in the vactor.
    // for further windows.
    for(int i=k; i<n; i++){
        mp[A[i]]++;// add the next element in the map and we have to remove the previous element.
      if(mp[A[i-k]]==1){// if we come across an element that is already prresent in the map and if its
      //frequency is 1 then remove the whole element.
          mp.erase(A[i-k]);
      }
      else{
          mp[A[i-k]]--;
      }
      
      ans.push_back(mp.size());// push it in the ans(resultant vector).
    }
      return ans;// return vector.
    }
    
};
