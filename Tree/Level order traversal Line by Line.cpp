// Given a Binary Tree, your task is to find its level order traversal.
// For the below tree the output will be 1 $ 2 3 $ 4 5 6 7 $ 8 $.

//           1
//        /     \
//      2        3
//    /    \     /   \
//   4     5   6    7
//     \
//      8
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> ans;
  queue<Node*> q;
  if(node==NULL){// if node is empty then return empty vector.
      return ans;
  }
  q.push(node);
  while(!q.empty()){
      int count=q.size();
      vector<int> res;
     
      for(int i=0; i<count; i++){
           Node* temp=q.front();
       res.push_back(temp->data);// push the emements of each level in the res veactor.
       q.pop();
       if(temp->left){
      q.push(temp->left);
  }
  if(temp->right){
      q.push(temp->right);
  }
  }
  
  ans.push_back(res);// at last push the res vector in our resultant vector.
      }
       
  return ans;
}
