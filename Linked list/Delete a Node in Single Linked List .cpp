Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* temp=head;
    
    if(x==1){ // The case where we have to delete the first node.
        head=head->next;
        return head;
    }
    for(int i=2; i<x; i++){
        temp=temp->next;
        
    }
    temp->next=temp->next->next;
    return head;
}
