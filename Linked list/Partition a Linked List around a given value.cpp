/* Given a linked list and a value x, partition it such that all nodes less than x come first, then all nodes with value equal to x and finally nodes with value greater than x. The original relative order of the nodes in each of the three partitions should be preserved. The partition must work in-place.
 
Example 1:
Input:
1->4->3->2->5->2->3,
x = 3
Output:
1->2->2->3->3->4->5
Explanation: 
Nodes with value less than 3 come first, 
then equal to 3 and then greater than 3.
Expected time complexity : O(n)
Expected Auxiliary Space: O(n)
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
struct Node* partition(struct Node* head, int x) {
    // code here
    struct Node* temp1=new Node(0);
    struct Node* pt1=temp1;
    struct Node* temp2=new Node(0);
    struct Node* pt2=temp2;
    struct Node* temp3=new Node(0);
    struct Node* pt3=temp3;
    struct Node* temp=head;
    while(temp!=NULL){
        if(temp->data==x){
            pt1->next=temp;
            pt1=pt1->next;
        }
         else if(temp->data<x){
            pt2->next=temp;
            pt2=pt2->next;
        }
        else{// if temp->data>x.
            pt3->next=temp;
            pt3=pt3->next;
        }
        temp=temp->next;
    
       
        
    }
        pt3->next=NULL;
        pt1->next=temp3->next;
        pt2->next=temp1->next;
        return temp2->next;
}
