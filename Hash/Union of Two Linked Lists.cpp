/*Given two linked lists, your task is to complete the function makeUnion(), that returns the union of two linked lists. This union should include all the distinct
elements only.
  
Example 1:

Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 1 2 3 4 6 8 9
  
Expected Time Complexity: O(N * Log(N))
Expected Auxiliary Space: O(N)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    code here
    set<int> set; // make a hash set.

    Node* ans=new Node(-1);
    Node*pt=ans;
    Node* temp1=head1;
    Node* temp2=head2;
  // Push the elements of the linked lists into hash set.
    while(temp1!=NULL){
        set.insert(temp1->data);
        temp1=temp1->next;
        
    }
     while(temp2!=NULL){
        set.insert(temp2->data);
        temp2=temp2->next;
     }
  // iterate in the set and make them the next nodes of -1 node.
     for(auto it=set.begin(); it!=set.end(); it++){
         pt->next=new Node(*it);
         pt=pt->next;
     }
     return ans->next;// return the next of -1 node;
    
    //Method-2
     
    unordered_set<int> set;// make an unordered hash set.
    vector<int> v;
    Node* ans=new Node(-1);
    Node*pt=ans;
  // Push the elements of the linked lists into hash set.
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL){
        set.insert(temp1->data);
        temp1=temp1->next;
        
    }
     while(temp2!=NULL){
        set.insert(temp2->data);
        temp2=temp2->next;
     }
  // push the elements of the set to the vector.
     for(auto it=set.begin(); it!=set.end(); it++){
         v.push_back(*it);
         
     }
  // sort the vectors.
     sort(v.begin(), v.end());
     // Iterate in the vector and make them the next nodes of -1 node.
     for(int i=0; i<v.size(); i++){
         pt->next=new Node(v[i]);
         pt=pt->next;
     }
     return ans->next;
}
