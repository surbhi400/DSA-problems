/*Given an array consisting of only prime numbers, remove all duplicate numbers from it. 

Example 1:

Input:
N = 6
A[] = {2,2,3,3,7,5}
Output: 2 3 7 5
Explanation: After removing the duplicate
2 and 3 we get 2 3 7 5.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        unordered_map<int,int> map;// make an unordered map.
       
        vector<int> v;
        for(int i=0; i<n; i++){// iterate in the vector and put the elements in the map.
        // and then push the first occurence of elements to the vector.
            map[arr[i]]++;
            if(map[arr[i]]==1){
                v.push_back(arr[i]);
            }
        }
        return v;// return our resultant vector.
    }
};
