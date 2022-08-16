/*Given a sorted linked list, delete all nodes that have duplicate numbers (all occurrences), leaving only numbers that appear once in the original list. 

Example 1:

Input: 
N = 8
Linked List = 23->28->28->35->49->49->53->53
Output: 
23 35
Explanation:
The duplicate numbers are 28, 49 and 53 which 
are removed from the list.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here
        map<int,int> mp;// create a map.
        struct Node* ans=new struct Node(-1);// make a new node.
       struct Node* pt=ans;
        struct Node* temp=head;
        while(temp!=NULL){// iterate in the ll and put the elements in the map.
            mp[temp->data]++;
            temp=temp->next;
        }
        for(auto it:mp){// iterate in the map and make the elements which occurs once the nextnode of -1.
            if(it.second==1){
                pt->next=new Node(it.first);
                pt=pt->next;
            }
        }
        return ans->next;
    }
};
