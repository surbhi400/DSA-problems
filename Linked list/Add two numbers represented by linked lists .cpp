class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr)
        {
            Node* nxt = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = nxt;
        }
        
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
      // we are making a new function reverse.
        Node* ptr1=reverse(first);
        Node* ptr2=reverse(second);
        int carry=0;
        Node* n=new Node(-1);// we are making a new linked list starting with -1 as its first node and we will add the sum of given two linked list a its new nodes.
        Node* ans=n;
        while(ptr1 || ptr2 || carry){
           int sum=0;
           if(ptr1!=NULL){ 
               sum+=ptr1->data;
               ptr1=ptr1->next;
           }
           if(ptr2!=NULL){
               sum+=ptr2->data;
               ptr2=ptr2->next;
           }
           sum= sum+carry;
           carry= sum/10;
           Node* node = new Node(sum%10);
            ans->next = node;
            ans = ans->next;
        }
        
        Node* result = reverse(n->next);
        
        return result;
        
    
    }
};
