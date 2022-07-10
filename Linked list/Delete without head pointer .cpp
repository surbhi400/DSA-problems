class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       // we are storing the data of next of del in place of del. Now both del and next of del has same data.
       // so we delete one by pointing del->next to del->next->next.
       del->data=del->next->data;
       del->next=del->next->next;
    }

};
