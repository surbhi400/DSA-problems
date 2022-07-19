// Given elements of a stack, clone the stack without using extra space.
// Input:
// N = 10
// st[] = {1, 1, 2, 2, 3, 4, 5, 5, 6, 7}
// Output:
// 1 
// The driver code itself prints 1 in the output if the stack st is cloned properly and prints 0 otherwise.
// Expected Time Complexity: O(N*N)
// Expected Auxiliary Space: O(1)
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        // we are using recursion to clone the satck st into stack cloned.
      if(st.empty()){// if the satck to be cloned is empty.
          return;
       }
       int num=st.top(); // we are making an integer num which stores the top value of the stack(1).
       // when we call the function for other next element(1), the element gets stored into the stack(1) and
       // now new 1 becomes the top of the stack and so on.
        st.pop();
        clonestack(st, cloned);// calling clonestack for other elements as well.
        cloned.push(num);
        return;
    
    }
};
