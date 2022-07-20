// Given a circular linked list, your task is to complete the method printList() that prints the linked list.
//   Input:
// 2
// 7
// 374 363 171 497 282 306 426
// 2
// 162 231
// Output:
// 426 306 282 497 171 363 374
// 231 162
// Note : Input items are inserted at the front of linked list that is why output is in reverse order.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void printList(struct Node *head)
{
  // code here
if(head==NULL){// if linked list is empty.
    return;
} 
Node *temp=head;
do{
    cout<<temp->data<<" ";
    temp=temp->next;
}while(temp!=head);// till we reach the end of circular linked list, print each node.


}
