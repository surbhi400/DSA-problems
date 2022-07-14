/* Professor X wants his students to help each other in the chemistry lab. He suggests that every student should help out a classmate who scored less marks than him in chemistry and whose roll number appears after him. But the students are lazy and they don't want to search too far. They each pick the first roll number after them that fits the criteria. Find the marks of the classmate that each student picks.
Note: one student may be selected by multiple classmates.
Input: N = 5, arr[] = {3, 8, 5, 2, 25}
Output: 2 5 2 -1 -1
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
      
        vector<int> v;
        stack<int> s;
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    } 
    
};
