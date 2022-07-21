// Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. 
// The task is to complete the function leftView(), which accepts root of the tree as argument.
// Input:
//    1
//  /  \
// 3    2
// Output: 1 3
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   queue<Node*> q;
   if(root==NULL){
       return v;
   }
   q.push(root);
   while(!q.empty()){
       int count=q.size();
       for(int i=0; i<count; i++){
            Node *temp=q.front();
            q.pop();
           
        if(i==0){
            v.push_back(temp->data);
        }  
           
       
       
       if(temp->left!=NULL){
           q.push(temp->left);
             
       }
       
       //else{//(root->left==NULL)
           
        if(temp->right!=NULL){
               q.push(temp->right);
           }
       
       
       
       }
          
       
       
       
       
      
   }
   return v;
}
