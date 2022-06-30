void MyStack :: push(int x)
{
    // Your Code
     top++;
    arr[top]=x;
    
    
    
    
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code   
    if(top != -1)
    {
        int ans = arr[top];
        top--;
        return ans;
    }
    return -1;
}
