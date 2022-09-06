/* Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer,
or transmitted across a network connection link to be reconstructed later in the same or another computer environment.


Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work.
You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative 
and come up with different approaches yourself. 
ex 1:- 
Input: root = [1,2,3,null,null,4,5]
Output: [1,2,3,null,null,4,5]
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode * root) {
      string ans;
      queue < TreeNode * > q;
      q.push(root);
      while (!q.empty()) {
        int s = q.size();
        while (s--) {
          TreeNode * temp = q.front();
          q.pop();
          if (temp != NULL)
            ans.append(to_string(temp -> val));
          else {
            ans.append("null ");
            continue;
          }
          q.push(temp -> left);
          q.push(temp -> right);
          ans.append(" ");
        }
      }
      
      return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty()) return NULL;

    TreeNode * root = nullptr;
    stringstream ss;
    ss << data;
    string temp;
    int found;
    queue < TreeNode * > q;
    int left = 0;

    cout << endl;
    while (!ss.eof()) {
      ss >> temp;
      //cout<<temp<<endl;
      if (stringstream(temp) >> found) {

        if (ss.eof()) return root;

        TreeNode * node = new TreeNode(found);
        q.push(node);
        if (root == NULL) {
          root = node;
          continue;
        }
        TreeNode * t_node = q.front();
        if (left == 0) {
          t_node -> left = node;
          left = 1;
        } else {
          TreeNode * t_node = q.front();
          left = 0;
          t_node -> right = node;

          q.pop();
        }
        continue;
      }
      if (temp == "null") {
        if (left == 0) left = 1;
        else {
          left = 0;
          if (!q.empty())
            q.pop();
        }
      }
    }
    return root;
  }
};
