Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* n=new Node(-1); // we are making a new node -1.
    Node* ans=n; //we are making a pointer ans at -1 and we will return next of ans get new linked list containing intersection elements.
    while(ptr1!=NULL &&ptr2!=NULL){ 
        if(ptr1->data==ptr2->data){
            n->next=new Node(ptr1->data); // adding the common data in new linked list.
            n=n->next;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            
        }
        else if(ptr1->data>ptr2->data){// In case ptr1 data is greater than ptr2 data then we will move ptr 2 to check for other data in 2nd linked list.
            ptr2=ptr2->next;
        }
        else{
            ptr1=ptr1->next;// In case ptr 2 data is greater than ptr1 data then we will move ptr1 for the same purpose.
        }
    }
    return ans->next;
    
}
