/* Given two strings denoting non-negative numbers X and Y. Calculate the sum of X and Y.


Example 1:

Input:
X = "25", Y = "23"
Output:
48
Explanation:
The sum of 25 and 23 is 48. 

Expected Time Complexity: O(|X| + |Y|)
Expected Auxiliary Space: O(1)

*/
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        string ans="";
        int carry=0;
         int n1 =X.size()-1;
      int n2=Y.size()-1;
        while(n1>=0 || n2>=0 ){
            if(n1<0){// the case when n1 got exhausted.
                ans.push_back(((Y[n2]-48+carry)%10)+48);// we are subtracting 48 to convert string to integer
                // and then we are adding 48 again to to make it a string again as we have to return the 
                // string as answer.
                carry= (Y[n2]-48+carry)/10;
                n2--;
            }
            else if(n2<0){// the case when n2 got exhausted.
                ans.push_back(((X[n1]-48+carry)%10)+48);
                carry= (X[n1]-48+carry)/10;
                n1--;
            }
            else{// when both n1 and n2 exists.
                ans.push_back(((X[n1]-48+Y[n2]-48+carry)%10)+48);
                carry=(X[n1]-48+ Y[n2]-48+carry)/10;
                n1--;
                n2--;
            }
            
        }
        if(carry){
            ans.push_back(carry+48);
            
        } 
          while(ans.back()=='0')
       {
           ans.pop_back();
       }
       reverse(ans.begin(),ans.end());
       if(ans.size()==0)
       {
           ans.push_back('0');
       }
        return ans;
    
    
        
    }
};
