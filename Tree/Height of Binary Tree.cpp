// Given a binary tree, find its height.
// Input:
//      1
//     /  \
//    2    3
// Output: 2
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
----------------------------------------------------------------------------------------------
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL){// if there are no nodes.
            return 0;
        }
        int leftHeight=height(node->left);// find the left height.
        int rightHeight=height(node->right);//find the right height.
        return 1+max(leftHeight,rightHeight); // It will return height for every node.
    }
};
