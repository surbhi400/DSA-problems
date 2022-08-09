/*Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements 
are same, then smaller number comes first.

Example 1:

Input:
N = 5
A[] = {5,5,4,6,4}
Output: 4 4 5 5 6
Explanation: The highest frequency here is
2. Both 5 and 4 have that frequency. Now
since the frequencies are same then 
smallerelement comes first. So 4 4 comes 
firstthen comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.
  
Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N). */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> mp;
       
        vector<int> ans;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
         priority_queue<pair<int,int>> maxh;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            maxh.push({it->second, -1*(it->first)});// we are multiplying -1 because of the case that if two
            // numbers have same frequency, smaller one will br printed first.
            // since we made maxheap after multiplying -1, the numbers will become -5, -4 and -6.
            // In maxheap -4 will be at top then -5 and then -6.
            // it will go in vector in that way too.
        }
        while(!maxh.empty()){
            int frequency= maxh.top().first;
            int element= maxh.top().second;
             
           for(int i=0; i<frequency;i++){
               ans.push_back(-1*element);
              
                
           }
            maxh.pop();
        }
        return ans; 
    }
};
