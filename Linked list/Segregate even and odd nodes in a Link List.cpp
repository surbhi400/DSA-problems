// Given a link list of size N, modify the list such that all the even numbers appear before all the odd numbers in the modified list.
// The order of appearance of numbers within each segregation should be same as that in the original list.
// Input: 
// N = 7
// Link List:
// 17 -> 15 -> 8 -> 9 -> 2 -> 4 -> 6 -> NULL

// Output: 8 2 4 6 17 15 9
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *temp=head;
        if(head==NULL && head->next==NULL){// the case when linked list is empty or has one node.
            return head;
        }
      // we are creating two linked lists odd and even containing odd and even numbers and then merge them(add odd after even).
        Node *odd=new Node(-1);
        Node *even=new Node(-1);
        Node *oddtemp=odd;
        Node *eventemp=even;
        while(temp!=NULL){
            if(temp->data%2==0){// the case of even numbers.
                eventemp->next= temp;
                eventemp=eventemp->next;
            }
            else{// the case of odd numbers.
                oddtemp->next=temp;
                oddtemp=oddtemp->next;
            }
            temp=temp->next;
        }
        oddtemp->next=NULL;
        eventemp->next=odd->next;
        return even->next;
    }
};
