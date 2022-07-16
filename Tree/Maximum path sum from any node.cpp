/*Given a binary tree, the task is to find the maximum path sum. The path may start and end at any node in the tree.

Example 1:

Input:
     10
    /  \
   2   -25
  / \  /  \
 20 1  3  4
Output: 32
Explanation: Path in the given tree goes
like 10 , 2 , 20 which gives the max
sum as 32.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int maxi=INT_MIN;// we are initalising maxi with min value;
        maxPathDown(root, maxi);// making a function maxPathDown which takes root and maxi as inputs.
        return maxi;
        
    }
    int maxPathDown(Node* root, int &maxi){
        // the case when there are no nodes.
        if(root==NULL){
            return 0;
        }
        // if the maxpathdowm is negative then return 0.
        int left=max(0, maxPathDown(root->left,maxi));
        int right=max(0,maxPathDown(root->right,maxi));
        maxi=max(maxi,left+right+root->data);
        return root->data + max(left,right); // Will gives the max sum.
    }
};
