/*Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers
can be in any order.
 

Example 1:

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
  
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      int count=1,maxCount=1;// we are initialising them from one because the first element is always counted.
      for(int i=0;i<N-1;i++){
          if(arr[i]==arr[i+1]){// if their values are same then continue.
              continue;
          }
          if((arr[i+1]-arr[i])==1){// if they are consecutive then increase count.
              count++;
              if(count>maxCount){//if count is greater than max count then do count==maxcount.
                  maxCount=count;
              }
          }else{// if they are not consecutive then do count=1 again for further counting.
              
             count=1;
          }
      }
     return maxCount;
    } 
    
};
