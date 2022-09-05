/*Given an n-ary tree, return the level order traversal of its nodes' values.

Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).
  
Example 1:
Input: root = [1,null,3,2,4,null,5,6]
Output: [[1],[3,2,4],[5,6]]
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
      vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> temp;
            int s = q.size();
            
            for(int i = 0; i < s; i++){
                temp.push_back(q.front()->val);
                
                Node* temp = q.front();
                q.pop();
                
                for(Node* child : temp->children)
                q.push(child);
            }
            ans.push_back(temp);
        }
        return ans;
          
    }
};
