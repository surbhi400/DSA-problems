// Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
// If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.
  
// Input:
//            1
//          /   \
//        2       3
//      /   \   /   \
//    4      5 6      7
//               \      \
//                8      9           
// Output: 
// 4 2 1 5 6 3 8 7 9 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL) return ans;
        map<int,vector<int>> mpp;
        queue<pair<Node*, int>> q;
        q.push({root,0});// push the root and its line in queue.
        while(!q.empty()){
            auto it= q.front();
            q.pop();
            Node* node=it.first;
            int line=it.second;
            mpp[line].push_back(node->data);// push the elements in the map.
            if(node->left!=NULL){
                q.push({node->left,line-1});
            }
            if(node->right!=NULL){
                q.push({node->right,line+1});
            }
        }
        for(auto it :mpp){// push the elements from the map to our resultant vector.
            for(auto i:it.second){
                ans.push_back(i);
            }
            
        }
        return ans;// return our resultant vector.
            
       
    }
};
