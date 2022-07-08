class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node *n=new Node(data);
        Node *temp=head;
        Node *prev=NULL;
        // when the value of temp is less than data to be inserted, keep traversing.
        while(temp!=NULL && temp->data<data){
            prev=temp;
            temp=temp->next;
        }
        // the case for insert at head.
        if(temp==head){
            n->next=head;
            return n;
        }
        //the case when temp is greater than data to be inserted.
        prev->next=n;
        n->next=temp;
        return head;
        
    }
};
