// Given array A[] of integers, the task is to complete the function findMaxDiff which finds the maximum absolute difference between nearest left and right smaller element
// of every element in array.If the element is the leftmost element, nearest smaller element on left side is considered as 0. Similarly if the element is the rightmost 
// elements, smaller element on right side is considered as 0.
// Input : arr[] = {2, 1, 8}
// Output : 1
// Left smaller  LS[] {0, 0, 1}
// Right smaller RS[] {1, 0, 0}
// Maximum Diff of abs(LS[i] - RS[i]) = 1 

// Input  : arr[] = {2, 4, 8, 7, 7, 9, 3}
// Output : 4
// Left smaller   LS[] = {0, 2, 4, 4, 4, 7, 2}
// Right smaller  RS[] = {0, 3, 7, 3, 3, 3, 0}
// Maximum Diff of abs(LS[i] - RS[i]) = 7 - 3 = 4 

// Input : arr[] = {5, 1, 9, 2, 5, 1, 7}
// Output : 1
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
    public:
    /*You are required to complete this method */
   
    
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      vector<int> leftSmall;
      vector<int> rightSmall;
     
       stack<int> s1;
       stack<int> s2;
     // To find the nearest left smallest.
          for(int i=0; i<n; i++ ){
               while(!s1.empty() && s1.top()>=A[i]){
                 s1.pop();
               }
               if(s1.empty()){
                   leftSmall.push_back(0);
              }
              else{
                   leftSmall.push_back(s1.top());
               }
               s1.push(A[i]);
                   
           }
           // to find the nearest ight smallest.
           for(int i=n-1; i>=0; i-- ){
               while(!s2.empty() && s2.top()>=A[i]){
                   s2.pop();
               }
               if(s2.empty()){
                   rightSmall.push_back(0);
               }
               else{
                   rightSmall.push_back(s2.top());
               }
               s2.push(A[i]);
                   
           }// reverse the output of right smallest.
            reverse(rightSmall.begin(), rightSmall.end());
          int maxi=INT_MIN;
           for(int i=0; i<n; i++){
               maxi=max(maxi,abs(leftSmall[i]-rightSmall[i]));// the max of difference of minimums.
           }
           return maxi;
    }
};
