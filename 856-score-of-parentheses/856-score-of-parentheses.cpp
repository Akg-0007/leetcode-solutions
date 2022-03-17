class Solution {
public:
    int scoreOfParentheses(string s) {
      stack <int>st;
        int c=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='(')
         {st.push(c);c=0;
         }
         else 
         {c=st.top()+max(c*2,1);
          st.pop();
         }
     }
        return c;
    }
};