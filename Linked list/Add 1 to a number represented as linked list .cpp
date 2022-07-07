class Solution
{
    public:
  //function to reverse the linked list.
    Node* reverse(Node *head){
        Node *curr=head;
        Node *prev=NULL;
        while(curr!=NULL){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *ans=head;
        ans=reverse(ans);
        Node *temp=ans;
        int sum, carry=1;
        Node *prev;
      // we will traverse in the linked list from the leftmost node since we reversed it and add 1 to it. If there is carry keep moving to the next node.
        while(temp!=NULL){
            sum=temp->data;
            sum+=carry;
            carry=sum/10;
            temp->data=sum%10;
            prev=temp;
            temp=temp->next;
            
        }
        if(carry>0){
            prev->next=new Node(carry);
        }
        
        return reverse(ans);
        
    }
};
