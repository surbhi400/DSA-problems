int length(Node* head){ // We are calculating the length of both the linked lists first.
        int l=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        return l;
    }
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int N=length(head1);
    int M=length(head2);
    int d=0;
    Node* ptr1;
    Node* ptr2;
    if(N>M){ 
        d=N-M;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=M-N;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){ // The case where both the linked lists does not merge at any point.
             return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }    
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return 0;
    
}
