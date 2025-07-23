class Solution {
public:
    
    string shortestCommonSupersequence(string s1, string s2) {


      int m = s1.length();
    int n = s2.length();

    // Step 1: Build LCS table
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

      string scs ="";
       int i=m ,j=n;
       while(i>0&&j>0)
       {
           if(s1[i-1]==s2[j-1])
           {
            scs=s1[i-1]+scs;
            i--;
            j--;
           }
           else if(dp[i-1][j]>dp[i][j-1])
           {
               scs=s1[i-1]+scs;
               i--;
           }
           else
           {
            scs=s2[j-1]+scs;
               j--;
           }
       }
       while(i > 0) {
        scs = s1[i-1] + scs;
        i--;
    }
    while(j > 0) {
        scs = s2[j-1] + scs;
        j--;
    }
  return scs;
    }
};