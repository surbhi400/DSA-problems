int getMiddle(Node *head)
    {
        // Your code here
  // we will find the length of the linked list.
        Node* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        
        temp=head;
        int N=length/2;
        
        
        while(N--){
            
            
            temp=temp->next;
        }
        return temp->data;
    }
};
