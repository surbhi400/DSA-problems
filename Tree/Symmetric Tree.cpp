// Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.

// ex-1: Input:
//          5
//        /   \
//       10     10
//      /  \     \
//     20  20     30
// Output: False

// ex-2: Input:
//          5
//        /   \
//       1     1
//      /       \
//     2         2
// Output: True
// Explanation: Tree is mirror image of
// itself i.e. tree is symmetric
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetricHelp(struct Node* left, struct Node* right){
        // if left becomes null and right didn't or vice versa then return false.
        if(left!=NULL&&right==NULL||right!=NULL&&left==NULL){
            return false;
        } 
        
        // if both of them are null then return true.
        if(left==NULL && right==NULL){
            return true;
        }
        //When the nodes are not null then check their values.
        if(left->data!=right->data) return false;
        
        return isSymmetricHelp(left->left,right->right)&& isSymmetricHelp(left->right,right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root==NULL){// if tree is empty return trur as it will be symmetric.
	        return true;
	    }
	    isSymmetricHelp(root->left, root->right);// check for left and right nodes.
    }
};
