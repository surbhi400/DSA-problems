// Given an array a of integers of length n, find the nearest smaller number for every element such that the smaller element is on left side.
// If no small element present on the left print -1.
// Input: n = 3
// a = {1, 6, 2}
// Output: -1 1 1
// Explaination: There is no number at the 
// left of 1. Smaller number than 6 and 2 is 1.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int> ans;
        stack<int> st;
       for(int i=0; i<n; i++){
           //iterate in the array and if top element of stack is greater than a[i] then pop top elements
           //till we get smaller one and while popping if stack becomes empty return -1 else return st.top
           //push the element of array in the stack.
           while(!st.empty() && st.top()>=a[i]){
               st.pop();
           }
           if(st.empty()){
               ans.push_back(-1);
           }
           else{
               ans.push_back(st.top());
           }
           st.push(a[i]);
       }
       return ans;// return the resultant vector.
    }
};
