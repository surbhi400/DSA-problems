/*Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', find out the length of the longest valid(well-formed) parentheses substring.
NOTE: Length of the smallest valid substring ( ) is 2.

Example 1:

Input: S = "(()("
Output: 2
Explanation: The longest valid 
substring is "()". Length = 2. 
Expected Time Complexity:O(n)
Expected Auxiliary Space: O(1)   
*/

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
       
       /* stack<char> st;
        int count=0;
        int n=s.size();
        
        for(int i=0; i<n; i++){
            char ch=s[i];
             if(ch=='('){
           st.push(ch);
       }
       else if(ch==')' && st.top()=='('){
           count+=2;
           st.pop();
           
           
       }
        }
        return count;*/
        stack<int> st;
        st.push(-1);// create a stack and push -1 in it.
        int result=0;
        int n=s.size();
        for(int i=0; i<n; i++){// traverse in the string and if opening bracket, push it in the stack.
            if(s[i]=='('){
                st.push(i);
            }
            else{ // if closing bracket pop the index of its previous bracket.
            st.pop();
        }//if stack is not empty then find the length of current valid substring by taking
        // difference btw current index and top of the stack.
        // if length is more than the result then update the result.
        if(!st.empty()){
            result=max(result, i-st.top());
        }
        
        else{
            // if stack becomes empty push the current index as base for next valid substring
            //(if any)
            st.push(i);
        }
        
        
        } 
        return result;
    }
};
