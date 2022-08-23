/*Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:


Input: head = [1,2,2,1]
Output: true*/
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
public:
        
        ListNode* reverse(ListNode* temp2){        
    
		if(temp2==NULL || temp2->next==NULL) return temp2;

		ListNode* prev=NULL, *curr=temp2, *temp;

		while(curr!=NULL){
			temp=curr->next;
			curr->next=prev;
			prev=curr;
			curr=temp;
		}
		return prev;
	}

	bool isPalindrome(ListNode* head) {
    
		if(head==NULL || head->next==NULL) return true;

		ListNode* slow=head, *fast=head->next;    

		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}

		ListNode* temp2=slow->next;          
		slow->next=NULL;                      
		ListNode* curr1=reverse(temp2);       
		while(head!=NULL && curr1!=NULL){     

			if(head->val!=curr1->val) return false;
			head=head->next;
			curr1=curr1->next;
		}

		return true;
	
        
    }
};
