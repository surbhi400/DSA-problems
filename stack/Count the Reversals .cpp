/* Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
A reversal means changing '{' to '}' or vice-versa.

Example 1:

Input:
S = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
â€‹Example 2:

Input: 
S = "{{}{{{}{{}}{{"
Output: -1
Explanation: There's no way we can balance
this sequence of braces.
Your Task:
You don't need to read input or print anything. Your task is to complete the function countRev() which takes the string S as input parameter and returns the minimum number of reversals required to balance the bracket sequence. If balancing is not possible, return -1. 

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ |S| ≤ 105 */

int countRev (string s)
{
    // your code here
    
     int n = s.length();
   
   if( n&1 ) return -1;
   
   // step 2 remove valid part
    stack<char> st;
    
   for(int i=0; i<n; i++){
       
       char curr = s[i];
       
       if(curr == '{'){
           st.push(curr);
       }
       else{ // here curr == '}'
           
             if(!st.empty() && st.top() == '{')
                  st.pop();
             else
                  st.push(curr);
        }
           
    }
    
    // step 3 determine what type of invalid 
    int open = 0 , close = 0;
    
    while(!st.empty()){
        if(st.top() == '{')
          open++;
        else
          close++;
          st.pop();
    }
  if(open == 0) return close/2; // all closed brackets
  
  else{
      if(close == 0) return open/2; // all open brackets
      
      else return ((open + 1) / 2 + (close + 1) / 2); // some closed brackets followed by equal number of open brackets 
  }
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  //CODE 2:-
   /*int open = 0;
   int close = 0;
   int rev=0;
   int n=s.size();
   
   for(int i = 0; i<n; i++){
       char ch=s[i];
       if(ch == '{'){
           open++;
       }else{
           close++;
       }
       if(close>open){
           close--;
           open++;
           rev++;
       }
   }
   int diff = abs(open-close);
   if(diff%2==0){
       return diff/2 + rev;
   }
   else{
       return -1;
   }
}*/
