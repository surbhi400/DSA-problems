// Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.
// Input :
//         1
//       /   \
//      3     2

// Output: 3 2 1
// Explanation:
// Traversing level 1 : 3 2
// Traversing level 0 : 1
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    queue<Node*> q;
    vector<int> ans;
    if(root==NULL) return ans;// if root is null, return empty vector.
    
  
    q.push(root);
  // Our approach is to push the right node first and then the left node. and at last reverse the resultant vector.
    while(!q.empty()){
        Node* temp = q.front();
        ans.push_back(temp->data);
        
        q.pop();
        if(temp->right)
            q.push(temp->right);
        if(temp->left)
            q.push(temp->left);
        
    }
    reverse(ans.begin(), ans.end());
    return ans;// after reversing return the vecor.

}
