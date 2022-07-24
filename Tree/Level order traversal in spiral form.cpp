// Complete the function to find spiral order traversal of a tree.
//   Input:
//            10
//          /     \
//         20     30
//       /    \
//     40     60
// Output: 10 20 30 60 40 
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> res;
    queue<Node*> q;
    if(root==NULL){
        return res;// if tree is empty then return empty vector.
    }
    bool rightToLeft=true;
   
    q.push(root);
    while(!q.empty()){
         int size=q.size();
        vector<int> vec(size);
        for(int i=0; i<size; i++){
            Node* temp=q.front();
            q.pop();
            //find position in vec to fill nodes value.
            // if right to left is true then push the value to the front end.
            //else push the value from rear end.
            
            int index=(rightToLeft) ? (size-1-i):i;
            vec[index]=temp->data;
            
            if(temp->left) q.push(temp->left);
                
           
            if(temp->right) q.push(temp->right);
                
            
            
            }
            for(int i=0; i<vec.size(); i++){// push the elements of vec to the resultant vector.
                res.push_back(vec[i]);
        }
        rightToLeft=!rightToLeft;// change the value from  right To left.
        
    }
    return res;// return the resultant vector.
}
 
