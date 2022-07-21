// You are given an array A of size N. You need to first push the elements of the array into a stack and then print minimum in the stack at each pop.
// Input:
// N = 5
// A = {1 2 3 4 5}
// Output: 
// 1 1 1 1 1
// Explanation: 
// After pushing elements to the stack, 
// the stack will be "top -> 5, 4, 3, 2, 1". 
// Now, start popping elements from the stack
// popping 5: min in the stack is 1.popped 5
// popping 4: min in the stack is 1. popped 4
// popping 3: min in the stack is 1. popped 3
// popping 2: min in the stack is 1. popped 2
// popping 1: min in the stack is 1. popped 1

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int> st;
   int mini=arr[0];// we are initialising mini from arr[0];
   for(int i=0; i<n; i++){// we are then iterating in the array and finding the mini for each element of 
   //the array.
       
       mini=min(mini,arr[i]);
       st.push(mini);// push mini in the stack.
   }
   return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    //your code here
    
    while(!s.empty()){// till stack becomes empty pop elements from the top as stack contains only
    //minimum elements.
        cout<<s.top()<<" ";
        s.pop();
    }
}
