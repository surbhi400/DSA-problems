// Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

// Example 1:

// Input:
// N = 3
// value[] = {1,2,1}
// Output: 1
// Explanation: The given linked list is
// 1 2 1 , which is a palindrome and
// Hence, the output is 1.
// Expected Time Complexity: O(N)
// Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* reverse(Node *head){
        Node *curr=head;
        Node *prev=NULL;
        Node *temp;
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        // 1)find the middle node in the linked list.
        Node *slow=head;
        Node *fast=head->next;
        
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
      // 2)reverse the second half of the linked list.
      Node *t1=head;
      Node *t2=reverse(slow->next);
      slow->next=NULL;
      
      //3) compare two halves.
      while(t1!=NULL && t2!=NULL){
          if(t1->data!=t2->data){
              return false;
          }
          else{
              t1=t1->next;
              t2=t2->next;
          }
      }
      return true;
