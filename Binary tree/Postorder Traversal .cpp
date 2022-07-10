vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>postOrder;
  if(root==NULL){
      return postOrder;
  }
  // We are making two stacks and till the first stack becomes empty we are checking whether left and right of top node of stack exists or not. 
  // Once we checked push the roots to the 2nd stack.
  stack<Node*> st1, st2;
  st1.push(root);
  while(!st1.empty()){
      root=st1.top();
      st1.pop();
      st2.push(root);
      
      if(root->left!=NULL){
          st1.push(root->left);
      }
      if(root->right!=NULL){
          st1.push(root->right);
      }
  }
  // At last push all the elements of stack 2 to the vector we made and then return the vector.
  while(!st2.empty()){
      postOrder.push_back(st2.top()->data);
      st2.pop();
  }
  return postOrder;
}
