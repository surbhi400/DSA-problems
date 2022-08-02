// Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] such that all the relative positions of the elements in the first 
// array are the same as the elements in the second array A2[ ].
// See example for better understanding.
// Note: If elements are repeated in the second array, consider their first occurance only.
  
// Input:
// N = 11 
// M = 4
// A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
// A2[] = {2, 1, 8, 3}
// Output: 
// 2 2 1 1 8 8 3 5 6 7 9
// Explanation: Array elements of A1[] are
// sorted according to A2[]. So 2 comes first
// then 1 comes, then comes 8, then finally 3
// comes, now we append remaining elements in
// sorted order.
  
// Expected Time Complexity: O(N * Log(N)).
// Expected Auxiliary Space: O(N).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
       unordered_map<int,int> mp;
       sort(A1.begin(), A1.end());
       vector<int> ans;
       for(int i=0; i<N; i++){
           mp[A1[i]]++;
           
       }
       for(int i=0; i<M; i++){
           if(mp.find(A2[i])!=mp.end()){
               while(mp[A2[i]]!=0){
                   ans.push_back(A2[i]);
                   mp[A2[i]]--;
               }
           }
           
       }
       for(int i=0; i<N; i++){
           if(mp[A1[i]]){
               ans.push_back(A1[i]);
           }
       }
       return ans;
    }  
};
