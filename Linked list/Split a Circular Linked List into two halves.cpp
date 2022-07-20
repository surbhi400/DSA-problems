// Given a Cirular Linked List of size N, split it into two halves circular lists. If there are odd number of nodes in the given circular linked list then  out of the
// resulting two halved lists, first list should have one node more than the second list. The resultant lists should also be circular lists and not linear lists.
// Input:
// Circular LinkedList: 1->5->7
// Output:
// 1 5
// 7
// Expected Time Complexity: O(N)
// Expected Auxilliary Space: O(1)
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  //function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.
    
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
   
    if(head==NULL || head->next==NULL){
        return;
    }
    // find the middle of linked list using slow and fast pointer.
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=head && fast->next!=head){
        slow=slow->next;
        fast=fast->next->next;
        
    }
       Node* nextOfMiddle=slow->next;
    // first list.
    *head1_ref=head;
    slow->next=head;//point the next of last node to head to ake it a circular linked list.
    
    // 2nd list.
 
    *head2_ref=nextOfMiddle;// head of 2nd list.
    Node *temp=*head2_ref;
    // make a pointer temp for other list and traverse till last node and point the next of last node to head of 2nd list that is head2_ref.
    while(temp->next!=head){
        temp=temp->next;
        
    }
    
    temp->next=*head2_ref;
}
