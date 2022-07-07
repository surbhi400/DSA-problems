Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* temp1=head1;
    Node* temp2=head2;
    Node*n= new Node(-1);// we are making a new linked list.
    Node*ans=n;
    
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<=temp2->data){
                    n->next=new Node(temp1->data);
                    n=n->next;
                    temp1=temp1->next;
                }
                else{
                    n->next=new Node(temp2->data);
                    n=n->next;
                    temp2=temp2->next;
                }
            }
        while(temp1!=NULL){ // the case when 2nd linked list has no elements.
            n->next=new Node(temp1->data);
            n=n->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){// the case where 1st linked list has no elements.
            n->next=new Node(temp2->data);
            n=n->next;
            temp2=temp2->next;
        }
                
        return ans->next;
       
   
}
