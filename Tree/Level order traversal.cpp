// Given a binary tree, find its level order traversal.
// Level order traversal of a tree is breadth-first traversal for the tree.
// Input:
//     1
//   /   \ 
//  3     2
// Output:1 3 2
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node* > q;
      vector<int> v;
      if(node==NULL){// if node is null then return empty vector.
          return v;
      }
      
      q.push(node);
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
      
         
    return v;      
          
    }
};
