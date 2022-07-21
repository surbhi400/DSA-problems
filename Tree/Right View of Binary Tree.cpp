// Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.

// Right view of following tree is 1 3 7 8.

//           1
//        /     \
//      2        3
//    /   \      /    \
//   4     5   6    7
//     \
//      8
//      Input:
//        1
//     /    \
//    3      2
// Output: 1 2
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
      // we are using level order traversal to traverse over all the nodes.
       vector<int> v;
       queue<Node*> q;
      if(root==NULL){
           return v;
       }
       q.push(root);
      
       while(!q.empty()){
            int count=q.size();
            for(int i=0; i<count; i++){
                Node* temp= q.front();
                q.pop();
                
                
                if(i==0){// if the node is the first element that is the right most element, we will store it in v.
                  v.push_back(temp->data);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
            }
           
       }
       return v;
    }
};
