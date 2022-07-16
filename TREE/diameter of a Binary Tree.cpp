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
