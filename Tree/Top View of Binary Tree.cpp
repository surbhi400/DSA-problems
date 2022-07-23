// Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

//        1
//     /     \
//    2       3
//   /  \    /   \
// 4    5  6   7

// Top view will be: 4 2 1 3 7
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N).
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL){
            return ans;// if tree is empty then return empty vector.
        }
        queue<pair<Node*, int>> q;// takes a queue which stores node and its axis.
        map<int,int> mpp;// take a map which stores the value of node and line.
        q.push({root,0});// push the root node and the axis on which it is present.
        while(!q.empty()){
            auto it=q.front();// gives topmost node
            q.pop();
            Node* node=it.first;
            int line=it.second;// gives the line.
            
            if(mpp.find(line)==mpp.end()) mpp[line]=node->data;// if the line is not present in the map.
            if(node->left!=NULL){
                q.push({node->left,line-1});
            }
            if(node->right!=NULL){
                q.push({node->right, line+1});
                
            }
        }
        for(auto it:mpp){
            ans.push_back(it.second);// push the elements from the map to the resultant vector.
        }
        return ans;// return resultant vector.
    }

};
