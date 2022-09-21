/*  Given a string S that consists of only alphanumeric characters and dashes. The string is separated into N + 1 groups by N dashes. Also given an integer K. 

We want to reformat the string S, such that each group contains exactly K characters, except for the first group, which could be shorter than K but still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.

Return the reformatted string.


Example 1:

Input: 
S = "5F3Z-2e-9-w", K = 4
Output: "5F3Z-2E9W"
Explanation: The string S has been split into two
parts, each part has 4 characters. Note that two
extra dashes are not needed and can be removed.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution
{
   public:
    string ReFormatString(string S, int K){
    	string ans = "";
        string res = "";
        for(int i = S.size()-1 ; i >= 0; i--)
        {
            if(S[i]== '-')
                continue;
            else if('0'<=S[i] and S[i]<= '9' || isupper(S[i]))
                res += S[i];
            else
                res+=toupper(S[i]);
            if(res.size() == K)
                ans+=res+'-', res = "";
        }
        if(res.size()) ans+=res;
        reverse(begin(ans),end(ans));
        if(ans[0] == '-') return ans.substr(1,ans.size());
        return ans;
    	
    }
};
