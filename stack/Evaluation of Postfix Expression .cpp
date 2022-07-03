class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
       for(int i=0;i<S.length();i++)
       {
           if(S[i]>='0' && S[i]<='9')// The case of operands.
           st.push(S[i]-'0');// since S[i] is char so we subtract the ascii value of 0 to make it an integer.
           else
          {
               int op2=st.top(); 
               st.pop();
               int op1=st.top();
               st.pop();
               
               switch(S[i])// the case of operators.
               {
                   case'+':
                   {
                       st.push(op1+op2);
                       break;
                   }
                   case'-':
                   {
                       st.push(op1-op2);
                       break;
                   }
                   case'*':
                   {
                       st.push(op1*op2);
                       break;
                   }
                   case'/':
                   {
                       st.push(op1/op2);
                       break;
                   }
               }
          }
       }
       return st.top();
   }

    
};
