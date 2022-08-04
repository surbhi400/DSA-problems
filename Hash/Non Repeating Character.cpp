/*Given a string S consisting of lowercase Latin Letters. Return the first non-repeating character in S. If there is no non-repeating character, return '$'.

Example 1:

Input:
S = hello
Output: h
Explanation: In the given string, the
first character which is non-repeating
is h, as it appears first and there is
no other 'h' in the string.
  
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |S| */
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       unordered_map<char,int> map; // create an unordered  map.
       char ch='$';
       for(int i=0; i<S.size(); i++){
           map[S[i]]++;// Push all the elements of array to map.
       }
       for(int i=0; i<S.size(); i++){// then in the map print the element whose frequency is 1 i.e the element which is non repeating.
           if(map[S[i]]==1){
               return S[i];
           }
           
       }
       return ch;// If there are no non-repeating characters then return '$'.
       
    }

};
