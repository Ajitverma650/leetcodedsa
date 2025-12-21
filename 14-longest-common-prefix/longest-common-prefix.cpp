class Solution {
public:
    string solve( string &s1 , string &s2)
    {    string str="";
        int n =s1.length();
        int m =s2.length();
        int l =min(n,m);
        for( int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
            str+=s1[i];
            else
            {
                break;
            }
        }
        return str;
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        string temp="";
        int n =strs.size();
        string str=strs[0];
        for(int  i=1;i<n;i++)
        {   
             temp=strs[i];
              str=solve(str,temp);
            
        }
      return str;
    }
};