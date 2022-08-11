/*Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.
Example 1:

Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6], 
[7, 8, 9]]
The merged list will be 
[1, 2, 3, 4, 5, 6, 7, 8, 9].

Expected Time Complexity: O(K2*Log(K))
Expected Auxiliary Space: O(K)*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<int,vector<int>, greater<int>> minh;// Create a minheap.
        vector<int> ans;
        for(int i=0; i<K; i++){//Iterate in the matrix and push the elements in heap.
            for(int j=0; j<K; j++){
                minh.push(arr[i][j]);
            }
        }
        while(!minh.empty()){// till heap becomes empty push the elements in the vector.
            ans.push_back(minh.top());
            minh.pop();
        }
        return ans;// return vector.
    }
};
