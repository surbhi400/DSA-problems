/*Given a string str and another string patt. Find the minimum index of the character in str that is also present in patt.


Example 1:

Input:
str = geeksforgeeks
patt = set
Output: 1
Explanation: e is the character which is
present in given str "geeksforgeeks"
and is also presen in patt "set". Minimum
index of e is 1. 
  
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        unordered_map<char,int> map; // create an unordered map.
        for(int i=0; i< patt.size(); i++){
            map[patt[i]]++;// push the elements of patt in map.
           
    }
    for(int i=0; i<str.size(); i++){// iterate in str array and find whether its elements lie in the map or not. if yes then return its index and if not then return -1.
        if(map.find(str[i])!=map.end()){
            return i;
        }
    }
    
    return -1;
 }
    
};
