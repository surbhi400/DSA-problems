void QueueStack :: push(int x)
{
        // Your Code
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
            
        }
        swap(q2,q1);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code 
        if(q1.empty()) return -1;
        int ans= q1.front();
        q1.pop();
        return ans;
            
            
}
