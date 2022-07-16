/*
The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes.
The diagram below shows two trees each with diameter nine, the leaves that form the ends of the 
longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).
Input:
       1
     /  \
    2    3
Output: 3
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int diameter(Node* root) {
        // Your code here
        int dia=0;
        height(root,dia);
        return dia;
    }
    int height(Node* root, int& dia){
        if(!root){
            return 0;
        }
        int lh=height(root->left, dia);
        int rh=height(root->right,dia);
        dia=max(dia, (lh+rh)+1);
        return 1 + max(lh,rh);
    }
};
