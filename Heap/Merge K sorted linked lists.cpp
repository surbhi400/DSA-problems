/*Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

Example 1:

Input:
K = 4
value = {{1,2,3},{4 5},{5 6},{7,8}}
Output: 1 2 3 4 5 5 6 7 8
Explanation:
The test case has 4 sorted linked 
list of size 3, 2, 2, 2
1st    list     1 -> 2-> 3
2nd   list      4->5
3rd    list      5->6
4th    list      7->8
The merged list will be
1->2->3->4->5->5->6->7->8.
  
Expected Time Complexity: O(nk Logk)
Expected Auxiliary Space: O(k)
Note: n is the maximum size of all the k link list*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           Node* newList= new Node(-1);
           Node* ans=newList;
           priority_queue<int, vector<int>, greater<int>> minh;// create a in heap.
      // Iterate in the array of lists and push every element in the min heap.
           for(int i=0; i<K; i++){
               Node* temp= arr[i];
               while(temp!=NULL){
                   minh.push(temp->data);
                  temp=temp->next;
             
               }
             
           }
          // Till heap becomes empty make every element the next of our first node (-1) we created.
           while(!minh.empty()){
               ans->next=new Node(minh.top());
               ans=ans->next;
               minh.pop();
           }
           return newList->next;
    }
};
