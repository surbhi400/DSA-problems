Node* insertInMiddle(Node* head, int x)
{
	// Code here
	
	    
	Node*temp=head;
	Node*n=new Node(x);
	int Length=1;
	    
	    while(temp->next!=NULL){ // To find the length of the linked list. Finding the length of linked list is necessary because we have to insert a node in the middle of linked list and for even numbers and odd numbers middle element is different.
	        Length++;
	        temp=temp->next;
	    }
	    
	
	if(Length%2==0){ // If the length is even.
	    Length=(Length/2);
	}
	else{
	    Length=(Length/2)+1;// If the length is odd.
	}
	temp=head;
	for(int i=1; i<Length;i++){
	    temp=temp->next;
	}
	Node*newtemp=temp->next; // 
	n->next=newtemp;
	temp->next=n;
	return head;
}
