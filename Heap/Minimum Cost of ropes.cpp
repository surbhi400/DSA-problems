/*There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths.
The task is to connect the ropes with minimum cost.
  
Input:
n = 4
arr[] = {4, 3, 2, 6}
Output: 
29
  
Expected Time Complexity : O(nlogn)
Expected Auxilliary Space : O(n)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>,greater<long long>>minh;// create a min heap.
       for(int  i=0;i<n;i++)
       {
           minh.push(arr[i]);// push the elements of the array to the heap.
       }
       long long  tcost=0;
       while(minh.size()>=2)// till the size of heap is >=2
       {
           long long first=minh.top(); //store the top element in the variable first.
           minh.pop();// pop the element.
           long long second=minh.top();//store the top element in the variable second.
          minh.pop();// pop the element.
           tcost+=first+second;// add forst and second to cost each time.
           minh.push(first+second);// then push the sum of first and second in the heap again to follow the same process with rest elements.
       }
       return tcost;//return the total cost.
    }
};
