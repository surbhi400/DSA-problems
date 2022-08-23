/* Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2. */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            ans.push_back(nums1[i]);
        }
        
        for(int i=0; i<nums2.size(); i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        
        double median;
        
       if (n%2!=0){
           median=ans[((n+1)/2)-1];
       }
        else if(n%2==0){
            median=((double)ans[(n/2)-1]+ ans[((n/2)+1)-1])/2;
        }
       
       
      return median;  
        
       
        
        
    }
};
