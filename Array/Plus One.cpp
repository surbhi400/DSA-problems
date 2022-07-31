// Given a non-negative number represented as a list of digits, add 1 to the number (increment the number represented by the digits). 
// The digits are stored such that the most significant digit is first element of array.
  
// Input: 
// N = 3
// arr[] = {9,9,9}
// Output: 
// 1 0 0 0
// Explanation:
// 999+1 = 1000, and so the output

// Expected Time Complexity:  O(N)
// Expected Auxilliary Space: O(1)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        //code here
         reverse(arr.begin(),arr.end());
        int sum=0;
        int carry=1;
        for(int i=0; i<N; i++){
            sum=arr[i]+carry;
            carry=floor(sum/10);
            sum=sum%10;
            arr[i]=sum;
        }
        if(carry!=0) arr.push_back(1);
         reverse(arr.begin(), arr.end());
         return arr;
        
        
    }
};
