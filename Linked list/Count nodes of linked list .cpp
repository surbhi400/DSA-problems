class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int countNodes=0;
        while(head){
            countNodes++;
            head=head->next;
        }
        return countNodes;
        
        
    
    }
};
