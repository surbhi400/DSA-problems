class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node*prevptr=NULL; // We are making 3 pointers namely prevptr, currptr and nextptr.
        Node*currptr=head;
        Node*nextptr;
        while(currptr!=NULL){// AS the head is given by currptr so the loop will break when currptr points at Null.
            nextptr=currptr->next;
            currptr->next=prevptr;// Here we are pointing the arrow of next of currptr to prevptr.
            prevptr=currptr;
            currptr=nextptr;
            
        }
        return prevptr; 
        
    }
    
    
};
