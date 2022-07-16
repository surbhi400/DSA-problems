/*Given two binary trees, the task is to find if both of them are identical or not. 
  Input:
     1          1
   /   \      /   \
  2     3    2     3
Output: Yes
Explanation: There are two trees both
having 3 nodes and 2 edges, both trees
are identical having the root as 1,
left child of 1 is 2 and right child
of 1 is 3.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
      
        if(r1 == NULL || r2 == NULL)  return(r1 == r2); // if r1 becoes null and r2 becomes null too then it will return true while if any one becomes true it will becomes false.
      // our next step is to check if the the left and right nodes of each tree are eqal or not. if equal then we will return true.
        return(r1 -> data == r2 -> data)
        && isIdentical(r1 -> left, r2 -> left)
        && isIdentical(r1 -> right, r2 -> right);
    }
};
