/* Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]] */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>> map;
        
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            map[s].push_back(strs[i]);
        }
        
        vector<vector<string> > ans(map.size());
        int t=0;
        
        for(auto it:map){
            auto v = it.second;
            
            for(int i=0;i<v.size();i++){
                ans[t].push_back(v[i]);
            }
            
            t++;
        }
        
        return ans;
    }
};
