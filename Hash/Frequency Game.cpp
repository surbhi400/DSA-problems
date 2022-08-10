/*Given an array A of size N. The elements of the array consists of positive integers. You have to find the largest element with minimum frequency.

Input Format: First line of input contains number of testcases T. For each testcase there will be two lines. First line contains N, next line contains N elements 
separated by spaces.

Output Format: For each testcase, print the largest element with minimum frequency.

Example:

Input: 
5
2 2 5 50 1

Output:
50

Explanation :
Testcase 1: All elements are having frequency 1 except 2.
 50 is the maximum element with minimum frequency.*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int LargButMinFreq(int arr[], int n) {
    // code here
    
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    //create two variables min_freq and max.
  // iterate in the map and if freq of element is less than or equal to min freq then update the freq with
  // the freq of element. And if the value of element is > max then update the value with value of element.
  // at last return max.
  int freq=INT_MAX;
  int max=0;
    
    for(auto it: mp){
      if(it.second<=freq){
          freq=it.second;
          max=it.first;
      }
  }
    
return max;



}
