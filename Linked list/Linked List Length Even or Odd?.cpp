int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
         Node*temp=head;
         int length=0;
         
         while(temp->next!=NULL){
             temp=temp->next;
             length++;
         
         
         
     }
     if(length%2==0){
         return 1;
         
     }
     else{
         return 0;
     }
         
     
}
