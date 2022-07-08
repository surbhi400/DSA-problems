bool isCircular(Node *head)
{
   // Your code here
  // For an empty linked list
   Node *temp=head;
   if(head==NULL){
       return true;
   }
  // when there are nodes, traverse on the linked list using a pointer and check if pointer becomes equal to head or not. 
  //If yes then return true otherwise false.
   while(temp!=NULL){
      temp=temp->next;
       if(temp==head){
           return true;
       }
        
       
   }
   return false;
}
