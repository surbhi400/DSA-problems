/*Given an array of strings words and an integer k, return the k most frequent strings.

Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

 

Example 1:

Input: words = ["i","love","leetcode","i","love","coding"], k = 2
Output: ["i","love"]
Explanation: "i" and "love" are the two most frequent words.
Note that "i" comes before "love" due to a lower alphabetical order.*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       
   
    vector<string> ans;
    unordered_map<string,int> mp;
    for(auto it:words){
      
            mp[it]++;
       
    }
         auto compare = [](const pair<string, int> &a, const pair<string, int> &b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second > b.second;
        };
        priority_queue<pair<string,int>, vector<pair<string,int>>,  decltype(compare)> minh(compare);
        
        for(auto is=mp.begin(); is!=mp.end(); is++){
            minh.push({is->first,is->second});
             if(minh.size()>k){
                minh.pop();
             }
        }
        
        while(!minh.empty()){
            ans.push_back(minh.top().first);
            minh.pop();
        }
    reverse(ans.begin(), ans.end());
    return ans;
        
        
    }
};
