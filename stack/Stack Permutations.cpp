/* You are given two arrays A and B of unique elements of size N. Check if one array is a stack permutation of the other array or not.
Stack permutation means that one array can be created from another array using a stack and stack operations.
Example 1:

Input:
N = 3
A = {1,2,3}
B = {2,1,3}
Output:
1
Explanation:
1. push 1 from A to stack
2. push 2 from A to stack
3. pop 2 from stack to B
4. pop 1 from stack to B
5. push 3 from A to stack
6. pop 3 from stack to B

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

 
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
     stack<int> st;
    
        int j=0;
        for(int i =0;i<N;i++){
            st.push(A[i]);
            while(!st.empty() && st.top() == B[j]){
                st.pop();
                j++;
            }
        }
        
        return !st.empty()?0:1;
    }
    
};
