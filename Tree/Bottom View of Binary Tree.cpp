// Given a binary tree, print the bottom view from left to right.
// A node is included in bottom view if it can be seen when we look at the tree from bottom.

//                       20
//                     /    \
//                   8       22
//                 /   \        \
//               5      3       25
//                     /   \      
//                   10    14

// For the above tree, the bottom view is 5 10 3 14 25.
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root==NULL){// if tree is empty, return the empty vector.
         return ans;
        }
        map<int, int> mpp;
        queue<pair<Node*, int>>q;
        q.push({root,0}); // push the root and its axis in the queue.
        while(!q.empty()){
            auto it=q.front(); //gives topmost node.
            q.pop();
            Node* temp= it.first;
            int line=it.second;// gives the line.
            mpp[line]=temp->data;// if we have already encountered a node on a line and we again 
            // found a node on the same line then replace the earlier node with the new node in the 
            // map.
            
            if(temp->left!=NULL){
                q.push({temp->left,line-1});
                
            }
            if(temp->right!=NULL){
                q.push({temp->right,line+1});
            }
        }
        for(auto it:mpp){// push the elements from the map to the resultant vector.
            ans.push_back(it.second);
        }
        return ans;// return the resultant vector.
    }
};
};
