class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *temp= new Node(x);
	temp->next=head;
	head=temp;
	return head;
	
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *temp=head;
	Node *temp2= new Node(x);
	
	if(head==NULL){
	    temp2->next=head;
	    head=temp2;
	}
	else{
	    while(temp->next!=NULL)
	        temp=temp->next;
	        temp->next=temp2;
	    
	}
	return head;
    }
};
