// Given two linked lists, the task is to complete the function findIntersection(), that returns the intersection of two linked lists. Each of the two linked list contains
// distinct node values.

// Example 1:

// Input:
// LinkedList1: 9->6->4->2->3->8
// LinkedList2: 1->2->8->6
// Output: 6 2 8
  
// Expected time complexity: O(m+n)
// Expected auxiliary space: O(m+n)
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        Node *temp=head1;
        Node *temp1=head2;
        Node *ans= new Node(-1);//Make a new node.
        unordered_set<int> set;// Make an unordered list.
        Node *pt=ans;
        while(temp1!=NULL){// traverse in the 2nd linked list and insert the elements in the set.
            set.insert(temp1->data);
            temp1=temp1->next;
        }
        while(temp!=NULL){// Now we are moving in the first ll and are checking if its nodes exists in the set or not.
          // if it does, then add it in the next of new node(-1).
            if(set.find(temp->data)!=set.end()){
                pt->next=new Node(temp->data);
                pt=pt->next;
                
                
            }
            temp=temp->next;
        }
        
        return ans->next; //at last return next of new node we created.
        
        
        
        
        
        
         
    }
};
