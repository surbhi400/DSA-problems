class Solution{
public:
void insertAtBottom(stack<int> &St){
   if(!St.empty())  return; // the case when stack is empty.
      
       int topele= St.top(); 
       St.pop();
       insertAtBottom(St);
       St.push(topele);
       
   
}
    vector<int> Reverse(stack<int> St){
        vector<int>ans; //we are making a vector ans.
        insertAtBottom(St);// we are calling a new function insertAtBottom.
        while(!St.empty()){
            ans.push_back(St.top());
            St.pop();
        }
        return ans;
    }
};
