/* Given a Binary search tree. Your task is to complete the function which will return the Kth largest element without doing any modification in Binary Search Tree.


Example 1:

Input:
      4
    /   \
   2     9
k = 2 
Output: 4
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(H) where H is max recursion stack of height h at a given time. */
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here
       priority_queue<int>maxh;

        queue<Node*>q;

        q.push(root);

        while(!q.empty()){

            int count=q.size();

            for(int i=1;i<=count;i++){

                Node*curr=q.front();

                q.pop();

                maxh.push(curr->data);

                if(curr->left!=NULL)q.push(curr->left);

                if(curr->right!=NULL)q.push(curr->right);

            }

        }

        int ans=1;

        while(!maxh.empty()){

            if(ans==K)return maxh.top();

            maxh.pop();

            ans++;

        }
    }
};
