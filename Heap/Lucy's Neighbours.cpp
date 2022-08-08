/*Lucy lives in house number X. She has a list of N house numbers in the society. Distance between houses can be determined by studying the difference between house numbers. Help her find out K closest neighbors.
Note: If two houses are equidistant and Lucy has to pick only one, the house with the smaller house number is given preference.

Example 1:

Input:
N = 5, X = 0, K = 4
a[] = {-21, 21, 4, -12, 20}, 
Output:
-21 -12 4 20
Explanation:
The closest neighbour is house
number 4. Followed by -12 and 20. -21 and 21 
are both equal distance from X=0. Therefore, 
Lucy can only pick 1. Based on the given 
condition she picks -21 as it is the smaller 
of the two. 
  
Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N)*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        // Your code goes here 
        vector<int> ans;
        priority_queue<pair<int, int>> maxh;// create a max heap.
        for(int i=0; i<n; i++){// iterate in the array and put the abs value of diff of house numbers 
        // and arr[i] in the heap.
            maxh.push({abs(arr[i]-x),arr[i]});
            if(maxh.size()>k){// if size of maxh >k then pop the element.
                maxh.pop();
            }
        }
        while(!maxh.empty()){// till maxh is not empty push the second of maxh in the vector and pop the 
        // element.
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(ans.begin(), ans.end());// sort the vector.
        return ans;// return the vector.
         
    }  
};
