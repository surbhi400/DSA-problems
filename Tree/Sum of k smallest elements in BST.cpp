/*  Given a Binary Search Tree. Find sum of all elements smaller than and equal to Kth smallest element.

Example 1:

Input: 
          20
        /    \
       8     22
     /    \
    4     12
         /    \
        10    14   , K=3

Output: 22
Explanation:
Sum of 3 smallest elements are: 
4 + 8 + 10 = 22
Expected Time Complexity: O(K)
Expected Auxiliary Space: O(1)
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
int sum(Node* root, int k) 
{ 
  
    // Your code here
 /* Approach: First perform level order traversal and put every element in the vector v.Create a maxheap. Next iterate in the 
 vector and if the size of maxheap is greater than k then pop the elements leaving only the the smallest elements. At last till the heap becomes empty sum
 the elements of the heap.*/
 
    int sum=0;
    priority_queue<int> maxh;
     queue<Node* > q;
      vector<int> v;
      if(root==NULL){// if node is null then return sum.
          return sum;
      }
      
      q.push(root);
    while(!q.empty()){ // till queue becomes empty traverse over every node and print the data. 
        Node* temp=q.front();
        
        if(temp->left!=NULL){
            q.push(temp->left);
        } 
        if(temp->right!=NULL) {
            q.push(temp->right);
        }
        q.pop();
        v.push_back(temp->data);
    }
  
 
  for(int i=0; i<v.size();i++){
      maxh.push(v[i]);
      if(maxh.size()>k){
          maxh.pop();
      }
      
  }
  while(!maxh.empty()){
      sum+=maxh.top();
      maxh.pop();
  }
       

   return sum; 
    
} 
