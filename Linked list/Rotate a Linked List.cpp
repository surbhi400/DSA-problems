/*Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to
length of the linked list.

Input:
N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
Output: 8 9 2 4 7
Explanation:
Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
Rotate 3: 8 -> 9 -> 2 -> 4 -> 7

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:

    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
         Node*curr=head;
         Node*end=head;
       
       int l=0;
       while(end->next!=NULL){
         l++;
         end=end->next;
       }
       end->next=head;
       
       Node*temp=head;
       Node*pre=NULL;
       int i=0;
       while(i<k){
           pre=temp;
           temp=temp->next;
           i++;
       }
       curr=temp;
       pre->next=NULL;
       
       
       return curr;
   }
        
    
};
