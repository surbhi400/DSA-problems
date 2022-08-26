/* Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

Example 1:

Input:
N = 4
X[] = 5,15,1,3
Output:
5
10
5
4
Explanation:Flow in stream : 5, 15, 1, 3 
5 goes to stream --> median 5 (5) 
15 goes to stream --> median 10 (5,15) 
1 goes to stream --> median 5 (5,15,1) 
3 goes to stream --> median 4 (5,15,1 3) 
Expected Time Complexity : O(nlogn)
Expected Auxilliary Space : O(n)
*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>max;
    priority_queue<int,vector<int>,greater<int>>min;
    
    void insertHeap(int &x)
    {
       if(max.empty() || max.top() > x) //incoming is smaller
            max.push(x);
        else 
            min.push(x);
        
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
      if(max.size() > min.size()+1){
            min.push(max.top());
            max.pop();
        }
        else if(min.size() > max.size()+1){
            max.push(min.top());
            min.pop();  
    }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(max.size() == min.size())
            return (max.top()+min.top())/2.0;
        
        return max.size()>min.size() ? max.top() : min.top(); 
    }
};
