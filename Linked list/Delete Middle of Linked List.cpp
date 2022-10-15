Node* deleteMid(Node* head)
{
    // Your Code Here
  //we are initialising both the pointers from head.
    Node* temp=head;
    Node* newtemp=head;
  //To find te length of the linked list
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
  // Our approach is to point the element preceding the middle element to element succeeding the middle element and point the middle element to null.
    temp=head;
    int del= (length/2);
    while(del>1){
        temp=temp->next;
        newtemp=newtemp->next;
        del--;
    }
     newtemp=newtemp->next;
     temp->next=temp->next->next;
     newtemp->next=NULL;
     return head;
    
}
