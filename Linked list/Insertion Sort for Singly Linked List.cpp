/*Given a singly linked list, sort the list (in ascending order) using insertion sort algorithm.

Example 1:

Input:
N = 10
Linked List = 30->23->28->30->11->14->
              19->16->21->25 
Output : 11 14 16 19 21 23 25 28 30 30 
Explanation :
The resultant linked list is sorted.
Expected Time Complexity : O(n2)
Expected Auxiliary Space : O(1)
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        struct Node* result=new struct Node(-1);
        struct Node* pt=result;
        vector<int> ans;
        struct Node* temp=head_ref;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++){
            pt->next=new struct Node(ans[i]);
            pt=pt->next;
        }
        return result->next;
    }
    
};
