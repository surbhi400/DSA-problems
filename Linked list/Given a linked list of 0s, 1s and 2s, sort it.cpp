// Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only.   The task is to segregate 0s, 1s, and 2s linked list such that all zeros
// segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.
  
// Input:
// N = 8
// value[] = {1,2,2,1,2,0,2,2}
// Output: 0 1 1 2 2 2 2 2
// Explanation: All the 0s are segregated
// to the left end of the linked list,
// 2s to the right end of the list, and
// 1s in between.
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* n=new Node(-1); 
        Node* pt=n;// pointer to new linked list.
        Node* temp=head;
      vector<int> ans;
      while(temp!=NULL){// push the elements of the given linked list in a vector.
          ans.push_back(temp->data);
          temp=temp->next;
      }
      sort(ans.begin(), ans.end());// sort the vector.
      for(int i=0; i<ans.size(); i++){// push the elements of the vector to a new linked list.
          n->next=new Node(ans[i]);
          n=n->next;
      }
       return  pt->next;//return the next of pointer.
        
    }
};
