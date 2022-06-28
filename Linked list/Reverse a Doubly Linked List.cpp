Node* reverseDLL(Node * head)
{
    //Your code here
    
    Node* temp=head;
    while(temp){
        swap(temp->next,temp->prev);
        head=temp;
        temp=temp->prev;
        
    }
    return head;
    
    
    
}
