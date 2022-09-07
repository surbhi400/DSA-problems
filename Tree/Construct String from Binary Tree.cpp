/*  Given the root of a binary tree, construct a string consisting of parenthesis and integers from a binary tree with the preorder traversal way, and return it.

Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.
Example 1:
Input: root = [1,2,3,4]
Output: "1(2(4))(3)"
Explanation: Originally, it needs to be "1(2(4)())(3()())", but you need to omit all the unnecessary empty parenthesis pairs. And it will be "1(2(4))(3)"
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
public:
    string tree2str(TreeNode* root) {
        if (!root) return "";
        
        string ans = to_string(root->val);

        if (root->left) {
            ans += '(';
            ans += tree2str(root->left);
            ans += ')';
        }

        if (root->right) {
            if (!root->left) ans += "()";
            ans += '(';
            ans += tree2str(root->right);
            ans += ')';
        }
        
        return ans; 
    }
};
