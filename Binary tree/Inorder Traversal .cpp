
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> inOrder;
        if(root==NULL){
            return inOrder;
            
        }
        stack<Node*> st;
        Node* temp=root;
        
        while(!st.empty() || temp!=NULL){
        while(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }
            
            
        
        temp=st.top();
        inOrder.push_back(temp->data);
        st.pop();
        temp=temp->right;
       
    }
      return inOrder;   
    }    
};
