class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *slow = head, *fast = head;
       while(fast != NULL && fast -> next != NULL ) {// The case to check whether there is loop present or not.
           slow = slow -> next;
           fast = fast -> next -> next;
           if(slow == fast) {
               break;
           }
       }
       if(slow != fast) {
           return;
       }
       slow = head;
       if(slow == fast) {
           while(fast -> next != slow) {
               fast = fast -> next;
           }
       }
       else {
           while(slow -> next != fast -> next) {
               slow = slow -> next;
               fast = fast -> next;
           }
       }
       fast -> next = NULL;
   
    }
};
