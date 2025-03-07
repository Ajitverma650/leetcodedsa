class Solution {
public:
    int countHomogenous(string s) {
        //vector<string>arr;
        int mod=1000000007;  
       int n = s.size();
       if(n==1)return 1;
       long long ans=0;
        for(int i=0;i<s.size()-1;i++)
        {     long long c=1;
              while(i<n&&s[i]==s[i+1])
              {
                  c++;
                  i++;
              }

               ans=ans%mod+((c*(c+1))/2)%mod;
               ans=ans%mod;
            
        }
        if(s[n-1]!=s[n-2]) ans=ans+1;

        return ans;
    }
};