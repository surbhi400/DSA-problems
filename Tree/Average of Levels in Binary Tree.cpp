/* Given the root of a binary tree, return the average value of the nodes on each level in the form of an array. Answers within 10-5 of the actual answer will be accepted.
 

Example 1: Input: root = [3,9,20,null,null,15,7]
Output: [3.00000,14.50000,11.00000]
Explanation: The average value of nodes on level 0 is 3, on level 1 is 14.5, and on level 2 is 11.
Hence return [3, 14.5, 11].*/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(!q.empty()){
            double size = q.size();
            double sum = 0;
          
            for(int i = 0; i < size; i++){
                auto temp = q.front();
                q.pop();
                sum += (temp->val);
				if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(sum/ size);
        }
        return ans;
    }
};
