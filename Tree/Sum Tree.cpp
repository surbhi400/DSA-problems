// Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right 
// subtree's value. Else return false.

// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.
// Input:
//     3
//   /   \    
//  1     2

// Output: 1
// Explanation:
// The sum of left subtree and right subtree is
// 1 + 2 = 3, which is the value of the root node.
// Therefore,the given binary tree is a sum tree.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(Height of the Tree)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //function to return the sum.
     int sum(Node*root)
   {

    if(root==NULL)
       return  0;
      
    
     return root->data + sum(root->left) + sum(root->right);
          
   }
   bool isSumTree(Node* root)
   {
        // Your code here
        if(root==NULL)
        return true;
        
        if (root->left==NULL&&root->right==NULL)
        return true;
        
        
      
       
       int sumLeft=sum(root->left);
       int sumRight=sum(root->right);
     
       // if for every node the sum of left and right is equal to root, then return true.
       if(sumLeft+sumRight==root->data &&isSumTree(root->right)&&isSumTree(root->left))
       {
           return true;
       }
        // if not then return false.
        return false;
   }
     
    
};
