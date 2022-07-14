/*Given a Circular Linked List of size N. The task is to delete the given node (excluding the first and last node) in the circular linked list and then print the
reverse of the circular linked list.
Input:
5
2 5 7 8 10
8
Output:
10 7 5 28 
Constraints:
1 <= T <= 100
1 <= n <= 100
1 <= data <= 100
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void deleteNode(struct Node **head, int key)
{

// Your code goes here
Node *temp=*head;
Node *prev=NULL;

while(temp->data!=key){
    prev=temp;
    temp=temp->next;
    
}
prev->next=temp->next;
temp->next=NULL;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{

// Your code goes here
Node *curr=*head_ref;
Node *prev=NULL;
Node *temp;
while(curr->next!=NULL){
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
curr->next=prev;
*head_ref=prev;
}  
  
