class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code herE
        Node* slow=head; //we are initializing both slow and fast from head.
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){ //The loop will break if there is no further node for fast to move.
            slow=slow->next;//slow moves from one step while fast moves two step.
            fast=fast->next->next;
            if(fast==slow){ 
                return true;
            }
        }
        return false;
    }
};
