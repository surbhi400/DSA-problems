class Solution
{
    public:
    Node* reverse(Node* head)
    {
    Node*curr=head;
    Node*prev=NULL;
    while(curr!=NULL){
        Node*next=curr->next; 
        curr->next=prev;// we are pointing the next of curr to prev and then shift all three pointers by one step
        
        prev=curr;
        curr=next;
    }
    return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
       head=reverse(head);
       Node* curr=head;
       int temp=curr->data;
       while(curr->next!=NULL){
           if(curr->next->data<temp){
               curr->next=curr->next->next;
               
           }
           else{
               temp=curr->next->data;
               curr=curr->next;
           }
       }
       head=reverse(head);
       return head;
    }
    
};
