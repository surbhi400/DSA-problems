class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
     Node *curr=head_ref;
     Node *prev=NULL;
     int count=1;
     if(x==1){// The case of delete at head.
         head_ref=head_ref->next;
         head_ref->prev=NULL;
         return head_ref;
     }
     //we will traverse in the linked list and when count becomes equal to x, delete the node at x by pointing it at NULL.
     while(curr!=NULL && count<x){
         prev=curr;
         curr=curr->next;
         count++;
     }
     prev->next=curr->next;
     curr->prev=NULL;
     return head_ref;
    }
};
