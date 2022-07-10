class Solution{
public:
  
    ListNode *moveToFront(ListNode *head){
        ListNode *temp=head;
        ListNode *prev=NULL;
        if(head->next==NULL){
            return head;
        }
        while(temp->next!=NULL){// our approach is to traverse on the linked list and point the 2nd last element to NULL and make last element as new head.
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head;
        head=temp;
        return head;
        
    }
};
