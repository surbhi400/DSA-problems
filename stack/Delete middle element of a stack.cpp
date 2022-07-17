/* Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional data structure.
Middle: ceil((size_of_stack+1)/2) (1-based index)
 

Example 1:

Input: 
Stack = {1, 2, 3, 4, 5}
Output:
ModifiedStack = {1, 2, 4, 5}
Explanation:
As the number of elements is 5 , 
hence the middle element will be the 3rd
element which is deleted
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
*/
----------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        //Middle element depends on size of stack so we will find middle element first.
        // by formula start+end-start/2.
        // First step is to push all the elements of stack to a vector.
        // At last we will push elements back to stack execpt middle element.
        vector<int>v;
        int middle;
        int start=0;
        int end=sizeOfStack-1;
        
        middle=(start+(end-start))/2;
        
        /*if(sizeOfStack%2==0){
            middle=(sizeOfStack/2);
        }
        else{
            middle=(sizeOfStack+1)/2;
        }*/
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        int count=0;
        int n=v.size();
        for(int i=n-1; i>=0; i--){
            
            if(count!=middle){
                s.push(v[i]);
            }
            count++;
        }
       return; 
     ----------------------------------------------------   
        /*int middle=ceil(sizeOfStack/2);
        int count=0;
        while(!s.empty()&&count<middle){
            v.push_back(s.top());
            s.pop();
            count++;
        }
        s.pop();
       reverse(v.begin(),v.end());
        int n=v.size();
        
        for(int i=0; i<n; i++){
            
            
                s.push(v[i]);
           
        }
        return;*/
       ----------------------------------------------------
    }
};
