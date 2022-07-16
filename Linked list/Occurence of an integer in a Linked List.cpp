/*Given a singly linked list and a key, count the number of occurrences of given key in the linked list.

Example 1:

Input:
N = 7
Link List = 1->2->1->2->1->3->1
search_for = 1
Output: 4
Explanation:1 appears 4 times.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
  // our approach is to traverse over linked list and count the number of occurences.
    int count(struct node* head, int search_for)
    {
    //add your code here
    node *temp=head;
    int count=0;
    
    while(temp!=NULL){
        if(temp->data==search_for){
            count++;
            
        }
        temp=temp->next;
    }
    return count;
    
    }
};
