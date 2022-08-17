/*Input: words = ["gin","zen","gig","msg"]
Output: 2
Explanation: The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."
There are 2 different transformations: "--...-." and "--...--.".*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       
      string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            string s="";
            for(int j=0;j<words[i].size();j++){
                s+=arr[words[i][j]-'a'];
            }
            mp[s]++;
        }
        return mp.size();
        
    }
};
