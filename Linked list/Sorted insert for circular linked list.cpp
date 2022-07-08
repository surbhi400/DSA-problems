class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       Node *temp=head;
       
       Node *n=new Node(data);
       while(temp->next!=head){
           if(temp->data<data && temp->next->data>=data){
           n->next=temp->next;
           temp->next=n;
       }
       temp=temp->next;
    }
       
    if(head->data>data){
        n->next=head;
        head=n;
        temp->next=head;
    }
    return head;
    }
};
