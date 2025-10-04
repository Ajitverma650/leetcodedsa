class Solution {
public:
    string removeOuterParentheses(string s) {
        

         int n =s.length();
         int count =0;
         string ans="";
         int idx=0;
         for( int i=0;i<n;i++)
         {
              if(s[i]=='(')
              {
                count++;
              }
              else
              {
                count--;
              }
              if(count==0)
              {
                  idx++;
                  while(idx<i)
                  {
                     ans+=s[idx++];
                  }
                idx++;
              }

         }

         return ans;
    }
};