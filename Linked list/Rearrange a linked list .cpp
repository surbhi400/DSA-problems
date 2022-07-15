/* Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together and all even positions node are together.
Assume the first element to be at position 1 followed by second element at position 2 and so on.
Note: You should place all odd positioned nodes first and then the even positioned ones. (considering 1 based indexing). Also, the relative order of odd positioned nodes and even positioned nodes should be maintained.

Example 1:

Input:
LinkedList: 1->2->3->4
Output: 1 3 2 4 
Explanation: 
Odd elements are 1, 3 and even elements are 
2, 4. Hence, resultant linked list is 
1->3->2->4.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       // The case when linked list is empty.
       if(head==NULL && head->next==NULL){
           return;
       }
       Node *curr=head;// pointer for odd positions.
       Node *temp=head->next;// pointer for even positions.
       Node *evenStart=temp;
       /* Here we are basically combining all the odd nodes together(i.e next of 1 will be 3 and next of 3(1->3)) and even nodes together(2->4) and then 
       point the next node of last odd to first of even(1->3->2->4).*/
       while(curr->next!=NULL && temp->next!=NULL){
           
               curr->next=temp->next;
               curr=curr->next;
               temp->next=curr->next;
               temp=temp->next;
           }
           curr->next=evenStart;
           
           
      
      
    }
};
