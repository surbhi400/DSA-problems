void MyQueue:: push(int x)
{
        // Your Code
        QueueNode* n= new QueueNode(x);
        if(front==NULL){
            
            front=n;
            rear=n;
            
        }
        else{
            rear->next=n;
            rear=n;
        }
        
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code     
        if(front==NULL){
            return -1;
        } 
    
        int ans=front->data;
        QueueNode *todelete =front;
        front=front->next;
        delete todelete;
      
        return ans;  
}
