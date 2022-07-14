/*Given a binary tree, find if it is height balanced or not. 
A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 
  Input:
      1
    /
   2
    \
     3 
Output: 0
Explanation: The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced
Expected time complexity: O(N)
Expected auxiliary space: O(h) , where h = height of tree*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  class Solution{
    public:
    
    /* Here we are completing our function.
    if our node is null then return 0. If not then find the left node(use recursion for rest left nodes).
    if any of left height or rightheight becomes -1 or if absoulte difference of left and right becomes -1
    then return -1.
    */
    
    int height(Node* root) {
       if(root == NULL)
           return 0;
       
       int lh = height(root->left);
       int rh = height(root->right);
       
       if(lh==-1 || rh==-1)
           return -1;
       
       if(abs(lh-rh)>1)
           return -1;
       
       return 1 + max(lh, rh);
   }
   
   //Function to check whether a binary tree is balanced or not.
    // we are making a function height and if it returns -1 then tree is not balanced.
   bool isBalanced(Node* root) {
       if(height(root) == -1)
           return false;
       return true;
   }
    
};
