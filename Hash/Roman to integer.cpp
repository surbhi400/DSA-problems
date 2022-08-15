Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        unordered_map<char,int> mp{
           { 'I',1},
           { 'V',5},
             { 'X',10},
             { 'L',50},
             { 'C',100},
             { 'D',500},
             { 'M',1000},
            
        };
        for(int i=0; i<s.size(); i++){
           
                if(mp[s[i]]<mp[s[i+1]]){// in roman numbers big numbers are always written first so if IV is given then ans= --1+5=4. while if VI is given then 1+5=6.
                    sum-=mp[s[i]];
                }
                else{
                    sum+=mp[s[i]];
                }
                
               
            
        }
        return sum;
        
    }
};
