// Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a
// multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).
// Input:
// LinkedList: 1->2->2->4->5->6->7->8
// K = 4
// Output: 4 2 2 1 8 7 6 5 
// Explanation: 
// The first 4 elements 1,2,2,4 are reversed first 
// and then the next 4 elements 5,6,7,8. Hence, the 
// resultant linked list is 4->2->2->1->8->7->6->5.
// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)
------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
         node* prev = NULL;
      node* curr = head;
      node* next = NULL;
      int count= 0;
      while(curr != NULL && count < k)
      {
          next = curr->next;
          curr->next = prev;
          prev = curr;
          curr = next;
          count++;
      }

      // If there are nodes left then call the reverse function again for those nodes.
      if(next != NULL)
           head->next = reverse(next,k);// why did we do head->next bcz lets take example 1->2->3->4->5
           // and k=3 then after reversing first k i.e 3->2->1, the head is on 1 and the next of it 
           // will add more nodes.
       return prev;
        
    }
};
