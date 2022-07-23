//Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 
//1) Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over 
//the right subtree. 
//2) Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
//3) Reverse right boundary nodes: defined as the path from the right-most node to the root. The right-most node is the leaf node you could reach when you always travel 
//preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.

//Input:
//         1 
//       /   \
//      2     3  
//     / \   / \ 
//    4   5 6   7
//       / \
//      8   9
   
//Output: 1 2 4 8 9 6 7 3
// Expected Time Complexity: O(N). 
// Expected Auxiliary Space: O(Height of the Tree).
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    //is leaf function to check whether a node is leaf node or not. 
    bool isLeaf(Node* root){
        return !root->left && !root->right;
    }
    
    void addLeftBoundary(Node* root, vector<int> &res){
        Node* curr=root->left;// start from left of root.
        while(curr){
            //if node is not leaf node then push it in the resultant vactor.
            // move to the next left node and if left node doesnot exist then right check right node.
            if(!isLeaf(curr)) res.push_back(curr->data);
            if(curr->left) curr=curr->left;
            else curr=curr->right;
        }
    }
    void addRightBoundary(Node* root, vector<int> &res){
        vector<int> temp;// making a new ector temp.
        Node* curr=root->right;// start from right of root.
        while(curr){
            //if node is not leaf node then push it in resultant vector.
            //.move to the next right nodeand if right node  doesnot exist move to left node.
            if(!isLeaf(curr)) temp.push_back(curr->data);
            if(curr->right) curr=curr->right;
            else curr=curr->left;
        }
        //we need right boundary in reverse order so push the elements of temp vector to resultant 
        //vector from back.
        for(int i=temp.size()-1; i>=0; --i){
            res.push_back(temp[i]);
        }
    }
    // Inorder traversal for leaf nodes.
    void addLeaves(Node* root, vector<int> &res){
        if(isLeaf(root)){// if node is leaft node push it in the resultant vector.
            res.push_back(root->data);
            return;
        }
        if(root->left) addLeaves(root->left,res);
        if(root->right) addLeaves(root->right,res);
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> res;
        if(root==NULL){// If tree is empty then return empty vector.
            return res;
        }
        // if root node is not leaf node then push it into the vector.
        // root node is common in both leftboundary and right boundary so push it in the data structure 
        //at first.
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root,res);// function to find left boundary.
        addLeaves(root, res);// finction to find leaf nodes.
        addRightBoundary(root,res);//function to find right node.
        return res;// resultant vector.
    }
};
