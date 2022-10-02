/* Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.
Note: A palindrome is a word which reads the same backward as forward. Example: "madam".

Example 1:

Input:
S = "abc"
Output: 2
Explanation: 
Add 'b' and 'c' at front of above string to make it
palindrome : "cbabc"

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
*/------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    int minChar(string str){
        //Write your code here
        int n=str.length();
       
        int count=0;
        int start=0;
        int end=n-1;
        int end1=end;
        while(start<end){
            if(str[start]==str[end]){
                start++;
                end--;
            }
            else{
                count++;
                start=0;
                end1--;
                end=end1;
            }
        }
        return count;
    }
};
