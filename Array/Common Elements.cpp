// Given two lists V1 and V2 of sizes n and m respectively. Return the list of elements common to both the lists and return the list in sorted order.
// Duplicates may be there in the output list.
// Input:
// n = 5
// v1[] = {3, 4, 2, 2, 4}
// m = 4
// v2[] = {3, 2, 2, 7}
// Output:
// 2 2 3
// Explanation:
// The common elements in sorted order are {2 2 3}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        vector<int> ans;
        int n=v1.size();
        int m=v2.size();
        sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       int i=0;
       int j=0;
        while(i<n&& j<m){ // iterate in both the vectors and if commn eleents are found push them into our resultant vector.
            if(v1[i]==v2[j]){
                ans.push_back(v1[i]);
                v1[i]=INT_MIN;// update the v1 vector so that we dont push the same elemen again.
                i++;
                j++;
            }
        
                
                else if(v1[i]<v2[j]){ 
                    i++;
                }
                else{
                    j++;
                }
            
        }
      
        return ans;
    }
};
