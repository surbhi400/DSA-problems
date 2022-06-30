char* reverse(char *S, int len)
{
    //code here
    stack<char> st;
    char* N=new char[len];// we are making a new char N to store the final reversed string.
    for(int i=0; i<len; i++){
        st.push(S[i]);
    }
  // To print our reversed string.
    int k=0;
    while(!st.empty()){// Till our stack is not empty, we are printing the top  element and then pop that element.
        N[k++]=st.top();
        
        st.pop();
        
        
        
    }
            
        
    
    return N;
       
}
