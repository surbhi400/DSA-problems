/*Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
  
 
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(log(n))*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int kthSmallest(int arr[], int l, int r, int k) {
        //code here
      int n=r+1;//length of the array.
     
      sort(arr, arr + n);// sort the array.
       int count=0;
       for(int i=0; i<n; i++){// iterate in the array and return the value at index equal to k-1;
          
           if(count==k-1){
               return arr[i];
           }
            count++;
       }
        //method-2.
        priority_queue<int> maxh;// create a maxheap.
        int n=r+1;
        for(int i=0; i<n; i++){// iterate in the array and push all the elements in the heap.
            maxh.push(arr[i]);
            if(maxh.size()>k){// pop all the elements which are greater than k.
                maxh.pop();
            }
        }
        return maxh.top();// return the top element.
        
    }
};
