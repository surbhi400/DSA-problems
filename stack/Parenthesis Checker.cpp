class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int n= x.size();
        stack<char> st;
        //iterate on the string and if we get any of the brackets, then push it in the stack.
        for(int i=0; i<n; i++){
            char ch=x[i];
            if(ch=='{' || ch=='(' || ch=='['){ 
                st.push(ch);
            }
          // In the string we will further check that whether stack is empty or not and if the closing brackets of the string matches the opening brackets of the stack then pop the bracket. 
            else{
                if(!st.empty()){
                    char top= st.top();
                    if((ch==')' && top == '(') || (ch==']' && top == '[') || (ch=='}' && top == '{')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
                
                
            }
            if(st.empty()){// the case when stack is empty.
                return true;
            }
            else{
                return false;
            }
    }
    

};
