/*Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.
 

Example 1:

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'
  
Expected Time Complexity: O(26 * n)
Expected Space Complexity: O(26)*/
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int>mp;
		 queue<char>q;
		 
		 string ans="";
		 
		 for(int i=0;i<A.size();i++){
		     mp[A[i]]++;
		     
		     if(mp[A[i]]<=1){
		         q.push(A[i]);
		     }
		     else{
		         while(!q.empty() && mp[q.front()] != 1){
		             q.pop();
		         }
		     }
		     
		     if(q.empty()){
		         ans.push_back('#');
		     }
		     else{
		         ans.push_back(q.front());
		     }
		 }
		 
		 return ans;
		}

};
