vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> preorder;
 //Node *temp=NULL;
  if(root==NULL){
      return preorder;
  }
  stack<Node*> st;
  
  st.push(root);
  while(!st.empty()){
      root=st.top();
      st.pop();
      preorder.push_back(root->data);
      
      if(root->right!=NULL){
          st.push(root->right);
      }
      if(root->left!=NULL){
          st.push(root->left);
      }
      
  }
  return preorder;
}
