/*Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.

Example 1:

Input:
N = 4
value[] = {5,2,2,4}
Output: 5 2 4
Explanation:Given linked list elements are
5->2->2->4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5->2->4
  
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,int> mp;// create an unordered map
     queue<int> q;
     Node* ans=new Node(-1);// make a new node -1 and make a pointer on it pt.
     
     Node *pt=ans;
     Node *temp=head;
     while(temp!=NULL){// traverse in the ll and put the element in the map.
     // if the frequency of element in map is 1 then push it in the queue.
         mp[temp->data]++;
         
             if(mp[temp->data]==1){
             q.push(temp->data);
         }
        temp=temp->next; // move to the next element.
     } 
     // till queue becomes empty, make elements of queue next of -1 node.
     while(!q.empty()){
         pt->next=new Node(q.front());
         q.pop();
         pt=pt->next;
         
     }
      return ans->next;  // return the next of ans.
         
         
     
         
         
         
    }
};
