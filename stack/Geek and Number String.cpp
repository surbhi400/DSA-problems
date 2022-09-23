/* Geek has a string Sof size Nconsisting of characters from '0'to '9'. He wants to minimise the length of the string. In each minimising operation, geek can remove any two consecutive characters if they are of the form {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"}.
Find the minimum possible length of the string after applying minimising operations. 
 

Example 1:

Input: 
N = 5 
S = "12213"
Output: 1
Explanation: Geek can get the string of 
length 1 in two minimising operation,
In 1st operation Geek will remove "12" 
from "12213" then Geek left with "213"
In 2nd operation Geek will remove "21" 
from "213" then Geek left with "3"
};  */
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution{
public:
    int minLength(string s, int n) {
        // code here
        stack<char> st;
 
        vector<string>res={"12","21","34","43","56","65","78","87","09","90"};
       
        for(int i=0; i<n; i++){
            
             st.push(s[i]);
             if(st.size()>1){
                 string pt="";
                 char a=st.top(); st.pop();
                 char b=st.top(); st.pop();
                 pt+=a;
                 pt+=b;
                 if(find(res.begin(),res.end(),pt)==res.end())

                {

                    st.push(b);

                     st.push(a);

                }
             }
             
             
        }
        return st.size();
    } 
};
