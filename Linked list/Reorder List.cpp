// Given a singly linked list: A0→A1→…→An-1→An, reorder it to: A0→An→A1→An-1→A2→An-2→…
// For example: Given 1->2->3->4->5 its reorder is 1->5->2->4->3.

// Note: It is recommended do this in-place without altering the nodes' values.
// Example 1:
// Input:
// LinkedList: 1->2->3
// Output: 1 3 2
  
// Example 2:

// Input:
// LinkedList: 1->7->3->4
// Output: 1 4 7 3.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* temp;
    while(curr){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
void reorderList(Node* head) {
    // Your code here
    Node* slow=head;
    Node* fast=head;
    
    // first find the middle of the LL.
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
   // split the list and reverse the 2nd half.
     
    Node* temp1=head;
    Node* temp2=reverse(slow->next);
   slow->next=NULL;
     // reorder them.
     while(temp1 && temp2){
         Node* t1=temp1->next;
         Node* t2=temp2->next;
         temp1->next= temp2;
         temp2->next=t1;
         temp1=t1;
         temp2=t2;
        
     }
   
    }
   
