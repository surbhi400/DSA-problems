/*Given an array arr[ ] of n integers, for every element, find the closest element on it's right that has a greater frequency than its own frequency.

Frequency is the number of times the element appears in the array.

 

Example 1:

Input:
n = 6
arr[] = {2 1 1 3 2 1}
Output:
1 -1 -1 2 1 -1 
Explanation:
1 appears 3 times.
2 appears 2 times.
3 appears 1 time. 

For arr[0] ie, 2
arr[1] ie 1 is the closest element on its 
right which has greater frequency than the 
frequency of 2. For the arr[1] and arr[2] no element 
on the right has greater frequency than 1, 
so -1 will be printed. and so on. 
  
Expected time complexity: O(n)
Expected space complexity: O(n)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        unordered_map<int,int> map;
        vector<int> ans;
        stack<int> st;
        // first store the frequency of elements using a map.
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
     // then use an stack to find the next greater frequency.
       for(int i=n-1; i>=0; i--){
           // if the frequency of next element is greater pop it.
           while(!st.empty() && map[arr[i]]>=map[st.top()]){             
           st.pop();
           }
           // if stack becomes empty then push -1 in our vector.
           if(st.empty()){
               ans.push_back(-1);
           }
           // otherwise push top in it.
           else{
               ans.push_back(st.top());
           }
           st.push(arr[i]);
       }
         reverse(ans.begin() , ans.end()) ;  // reverse the resultant vetor.  
         return ans;// return the resultant vetor.
    }
};


