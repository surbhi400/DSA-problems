// Given a Binary Tree of size N, find all the nodes which don't have any sibling. You need to return a list of integers containing all the nodes that don't 
// have a sibling in sorted order.

// Note: Root node can not have a sibling so it cannot be included in our answer.
// Input :
//        37
//       /   
//     20
//     /     
//   113 

// Output: 20 113
// Explanation: 20 and 113 dont have any siblings.

// Expected Time Complexity: O(NlogN)
// Expected Auxiliary Space: O(Height of the tree)
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<int> noSibling(Node* node)
{
    // code here
    vector<int> v;

   queue<Node*> q;

   q.push(node);

   while(!q.empty()){

       Node* temp=q.front();

       q.pop();

       if(temp->right!=NULL && temp->left==NULL){// if a node has left nodes and no right nodes then
       //push it into our returning list.
            v.push_back(temp->right->data);

       }

          
       if(temp->right==NULL && temp->left!=NULL){//if a node has right nodes and no leftt nodes then
       //push it into our returning list
           v.push_back(temp->left->data);
       }

           

       if(temp->left){// push the left node in the queue and then we will check whether its left or
       // right node exists or not and will push the one that exists in the vector and so on.
            q.push(temp->left);
       }

          

       if(temp->right){ // push the right node in the queue and then we will check whether its left or
       // right node exists or not and will push the one that exists in the vector and so on.
           q.push(temp->right);
       }

           

   }

   sort(v.begin(),v.end());// sort the list.

   if(v.size()==0)// If all nodes have a sibling, then the returning list should contain
   //only one element -1.

       v.push_back(-1);

   return v;


    
}
