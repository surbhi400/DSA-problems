//function to find the length of linked list.
int length(Node* head){
    Node* temp = head;
    int l = 0;
    while(temp!=NULL){
        temp = temp->next;
        l++;
    }
    return l;
}
int getNthFromLast(Node *head, int n)
{
       // Your code here
       
       int l = length(head);
       Node* temp = head;
       int count = 0;
       
       if(n>l){// for the case when node does not exist.
           return -1;
       }
       //otherwise traverse in the linked list and if count becomes equal to the position
       // from start which is l-n+1 then return data of temp;
       else{
           while(temp!=NULL){
               count++;
               if(count == l-n+1){
                   return temp->data;
               }
               temp = temp->next;
           }
       }

}
