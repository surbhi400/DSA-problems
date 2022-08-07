/*Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.
  
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        
        
       unordered_map<int,int> map;//create an unorderd map
        vector<int> ans;
        for(int i=0; i<n; i++){// iterste in the map and push all the elements of the map in the array.
            map[arr[i]]++;
        }
        for(auto it:map){// now iterate in the map and if any element has frequenncy mare than 1, push it in
        //our resultant vector.
            if(it.second>1){
                ans.push_back(it.first);
            }
            
        }
        if(ans.size()==0){// if vector is empty then no element occurs twice so push -1 in our resultant vector
            ans.push_back(-1);
        }
        sort(ans.begin(),ans.end());//sort the vector and return it.
        return ans;
    }
};
