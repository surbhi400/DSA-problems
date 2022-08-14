/*You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.

Example 1:

Input:
push(2)
push(3)
pop()
getMin()
push(1)
getMin()
Output: 3 2 1
Explanation: In the first test case for
query 
push(2)  Insert 2 into the stack.
         The stack will be {2}
push(3)  Insert 3 into the stack.
         The stack will be {2 3}
pop()    Remove top element from stack 
         Poped element will be 3 the
         stack will be {2}
getMin() Return the minimum element
         min element will be 2 
push(1)  Insert 1 into the stack.
         The stack will be {2 1}
getMin() Return the minimum element
         min element will be 1
  
Expected Time Complexity : O(1) for all the 3 methods.
Expected Auixilliary Space : O(1) for all the 3 methods.*/

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
    int minEle;
    stack<int> s;
       stack<int> st;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(st.empty()){
               return -1;
           }
           return st.top();
           
           
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty()){
             return -1;
         }
         int ele=s.top();
         s.pop();
         if(ele==st.top()){
             st.pop();
         }
         return ele;
           
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           s.push(x);
         if(st.empty()|| (st.top()>=x)){
            st.push(x);
         }
           
       }
};
