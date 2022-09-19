/*  Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3). 
Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
     long long ans=0;
void mergesort(long long arr[], long long l, long long m, long long r){
       long long n1=m-l+1;
       long long n2=r-m;
       long long left[n1], right[n2];
       for (long long i=0; i<n1; i++){
           left[i]=arr[l+i];
       }
       for (long long i=0; i<n2; i++){
           right[i]=arr[m+i+1];
       }
       int i=0, j=0, k=l;
       while (i<n1 && j<n2){
           if (left[i]<=right[j]){
               arr[k]=left[i];
               i++;
           }
           else{
               ans+=n1-i;
               arr[k]=right[j];
               j++;
           }
           k++;
       }
       while (i<n1){
           arr[k++]=left[i++];
       }
       while (j<n2){
           arr[k++]=right[j++];
       }
       
   }
void merge(long long arr[], long long l, long long r){
       if (l<r){
           int m=(l+r)/2;
           merge(arr, l, m);
           merge(arr, m+1, r);
           mergesort(arr, l, m, r);
       }
   }
long long int inversionCount(long long arr[], long long N)
   {
       merge(arr, 0, N-1);
       return ans;
   
    }

};
