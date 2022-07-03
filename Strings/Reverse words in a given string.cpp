class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        // we are using satck to solve the question.
        stack<string> st; 
        string word=""; 
        for(int i=0; i<S.size(); i++){
            if(S[i]!='.')
                
            word+=S[i];
            else{
                st.push(word);
                word="";
            }
            
        }   
            
    st.push(word);
    string ans;
    while(st.size()>0){
        if(st.size()==1){
            ans+=st.top();
            st.pop();
        }
        else{
            ans+=st.top()+".";
            st.pop();
        }
    }
    return ans;
    
    }        
            
};
