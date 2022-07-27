// Given a Binary Tree with all unique values and two nodes value, n1 and n2. The task is to find the lowest common ancestor of the given two nodes.  We may assume
// that either both n1 and n2 are present in the tree or none of them are present.
// Input:
// n1 = 2 , n2 = 3  
//        1 
//       / \ 
//      2   3
// Output: 1
// Explanation:
// LCA of 2 and 3 is 1.
// Expected Time Complexity:O(N).
// Expected Auxiliary Space:O(Height of Tree).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------class Solution
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(!root || root->data==n1 || root->data==n2){
           return root;
       }
       Node *left=lca(root->left, n1, n2);
       Node *right=lca(root->right, n1, n2);
       // WHILE returning.
       if(left && right){// if both left and right are not null.
           return root;
       }
       else if(left==NULL){
           return right;
       }
       else{// when right becomes NULL.
           return left;
       } 
       
    }
};
