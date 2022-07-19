// You are given an array arr of size N. You need to push the elements of the array into a stack and then print them while popping.
//   Input:
// n = 5
// arr = {1 2 3 4 5}
// Output:
// 5 4 3 2 1
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
   stack<int > s;
   for(int i=0; i<n; i++){
       s.push(arr[i]);
   }
   return s;
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> s)
{
    //print top and pop for each element until it becomes empty
    while(!s.empty()){
    cout<< s.top()<< " ";
        s.pop();
        
    }
}
