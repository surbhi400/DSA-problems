void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
    
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code 
        if(s1.empty()) return -1;
        
        while(!s1.empty()){// If the first stack is not empty then push the values to the 2nd stack and then pop the values from the second stack.
            s2.push(s1.top());
            s1.pop();
        }
        int ans=s2.top();
        s2.pop();
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
        
           
        
        
}
