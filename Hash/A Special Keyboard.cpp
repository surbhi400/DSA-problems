/*Imagine you have a special keyboard with all keys in a single row. The layout of characters on a keyboard is denoted by a string S1 of length 26. S1 is indexed from 0 to 25. Initially, your finger is at index 0.
To type a character, you have to move your finger to the index of the desired character. The time taken to move your finger from index i to index j is |j-i|, where || denotes absolute value.Find the time taken to type the string S2 with the given keyboard layout.


Example 1:

Input: 
S1 = "abcdefghijklmnopqrstuvwxyz"
S2 = "cba"
Output: 
4
Explanation:
Initially we are at index 0. To type 'c',
it will take a time of abs(0-2) = 2. To, type
'b' next, it will take abs(2-1) = 1. And, for
'a', it will take abs(1-0) = 1 unit time.
So, total time = 2+1+1 = 4.
  
Expected Time Complexity:  O(|S2|)
Expected Auxilliary Space: O(1)*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
  public:
    int findTime(string S1, string S2) {
        // code here
        unordered_map<char,int> map;
        int totalTime=0;
        int index=0;
        for(int i=0; i<S1.length(); i++){
            map[S1[i]]=i;// At first iterate in the first string and store their indexes in the map.
        }
        // iterate in the 2nd string,find Time by subtracting the index of char of 
        // S2 in S1 from the intial index.
        for(int j=0; j<S2.length(); j++){
            totalTime+=abs(index-map[S2[j]]);
            index=map[S2[j]];// make the index of earlier character new index.
        }
        return totalTime;
    }
};
