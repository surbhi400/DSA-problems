/*Given a linked list, you have to perform the following task:

Extract the alternative nodes starting from second node.
Reverse the extracted list.
Append the extracted list at the end of the original list.
â€‹Example 1:

Input:
LinkedList = 10->4->9->1->3->5->9->4
Output: 10 9 3 9 4 5 1 4
Explanation: Reversing the alternative
nodes from the given list, and then
appending them to the end of the list
results in a list with the elements as
10 9 3 9 4 5 1 4.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    // function to reverse even posn nodes.
    Node* reverseList(Node *odd){
        Node *newcurr=odd;
        Node *newprev=NULL;
        Node *newnext;
        while(newcurr!=NULL){
            newnext=newcurr->next;
            newcurr->next=newprev;
            newprev=newcurr;
            newcurr=newnext;
        }
        
        return newprev;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
        if(odd==NULL && odd->next==NULL){// when linked list is empty.
            return;
        }
        /* our approach is to put all odd posn nodes together(1->3->5) and all even posn together(2->4)
        then reverse the even posn nodes and point the next of last odd posn node to the first even posn node*/
        Node *temp=odd->next;
        Node *curr=odd;
        Node *reverse=temp;
        
       
        while(temp!=NULL && temp->next!=NULL){
            curr->next=curr->next->next;
            curr=curr->next;
            temp->next=temp->next->next;
            
            temp=temp->next;
        }
        reverse=reverseList(reverse);
        curr->next=reverse;
    }
};
