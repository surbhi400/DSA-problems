/*Adding Array Elements
EasyAccuracy: 48.64%Submissions: 20182Points: 2
Given an array Arr[] of size N and an integer K, you have to choose the first two minimum elements of the array and erase them, then insert the sum of these two 
elements in the array until all the elements are greater than or equal to K and find the number of such operations required.

Example 1:

Input:
N = 6, K = 6 
Arr[] = {1, 10, 12, 9, 2, 3}
Output: 2
Explanation: First we add (1 + 2), now the
new list becomes 3 10 12 9 3, then we add
(3 + 3), now the new list becomes 6 10 12 9,
Now all the elements in the list are greater
than 6. Hence the output is 2 i:e 2 operations
are required to do this. 
  
Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(N)*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
    priority_queue<int, vector<int>, greater<int>> minh;
    int count=0;
    int sum=0;
    // push the elements to the array.
    for(int i=0; i<n; i++){
        minh.push(arr[i]);
    }
    // Till top <k pop first and second minimum and add them and push them back.
    // increase count.
    while(minh.top()<k){
        int first=minh.top();
        minh.pop();
        if(minh.empty()&& first<k) return -1;
        int second=minh.top();
        minh.pop();
       
        sum+=first+second;
        
        minh.push(first+second);
        count++;
    }
    return count;// return count.
    };
}
