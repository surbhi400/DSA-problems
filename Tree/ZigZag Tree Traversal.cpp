// Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.
// Input:
//         3
//       /   \
//      2     1
// Output:
// 3 1 2
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	queue<Node*> q;
    	vector<int> ans;
    	if(root==NULL){
    	    return ans;
    	}
    	q.push(root);
    	bool leftToRight=true;
    	while(!q.empty()){
    	    //take out elements at a particular level and push it in the row vector in the correct psition.
    	    int size=q.size();
    	    vector<int> row(size);
    	    for(int i=0; i<size; i++){
    	        Node* temp=q.front();
    	        q.pop();
    	        //find position in row vector to fill node's value.
    	        //if the leftToRight is true then we will push the nodes value from rear end.
    	        //else push from the front end.
    	        
    	        int index=(leftToRight) ? i:(size-1-i);
    	        row[index]=temp->data;
    	        
    	        if(temp->left) q.push(temp->left);
    	            
    	       
    	        if(temp->right) q.push(temp->right);
    	            
    	    }   
    	        //traverse in th row and put the values in the ans vector.
    	        for(int i=0; i<row.size(); i++){
    	            ans.push_back(row[i]);
    	        }
    	        
    	   //change the value from left to right. 
    	   leftToRight=!leftToRight; 
    	}
    	return ans;
    }
};
