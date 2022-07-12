/* Given a string S, composed of different combinations of '(' , ')', '{', '}', '[', ']'. The task is to verify the validity of the arrangement.
Note: Ignore the precedence of brackets.

Example 1:

Input:
S = ()[]{}
Output: 1
Explanation: The arrangement is valid.
 

Example 2:

Input:
S = ())({}
Output: 0
Explanation: Arrangement is not valid.
 

Your Task:  
You dont need to read input or print anything. Complete the function valid() which takes S as input and returns a boolean value denoting whether the arrangement is valid or not.


Expected Time Complexity: O(N) where N is the length of S.
Expected Auxiliary Space: O(N) 


Constraints:
1 <= N <= 104*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// our pproach is: While iterating in the string if there exists opening brackets any of the opening btackets then push then it in the stack.
  //now further in string we will check that if for the closing brackets there exists an opening bracket or not.
  //if opening brackets does exists then its a pair and pop it out. 
  // At last if the stack is empty means every bracket founds its pair so return true, otherwise false.
  
  bool valid(string s)
{
    // code here
    stack<char> st;
    int n=s.length();
    
    
    for(int i=0; i<n; i++){
        char ch=s[i];
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
            
        }
        else{
            if(st.empty()){
                return false;
            }
            else if(ch==')' && st.top()!='(') return false;
            else if(ch=='}' && st.top()!='{') return false;
            else if(ch==']' && st.top()!='[') return false;
            st.pop();
        }
            
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
    
    
    
    
}
