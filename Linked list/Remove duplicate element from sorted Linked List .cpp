Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(head==NULL){
     return NULL;
 }
 Node *ptr1=head;
 Node *temp;
 //traverse in the linked list and if there are common nodes, delete one.
 while(ptr1->next!=NULL){
     if(ptr1->data==ptr1->next->data){
         temp=ptr1->next->next;
         
         ptr1->next=temp;
     }
     else{
         ptr1=ptr1->next;
     }
 }
 return head;
}
