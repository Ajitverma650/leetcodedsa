class Solution {
public:
    int dp[21][2001];
    int n;
    int count (vector< int> &arr , int sum )
     {      n=arr.size();
            for( int  i=0;i<=n;i++)
            {
                 for( int j =0;j<=sum;j++)
                 {
                      if(j==0)
                      {
                          dp[i][j]=1;
                      }
                      else if(i==0)
                      {
                          dp[i][j]=0;
                      }
                      else
                      {
                          dp[i][j]=0;
                      }
                 }
            }
            
           
            for(int i=1;i<=n;i++)
            {
                
                for( int j =0;j<=sum;j++)
                {
                    
                      if(arr[i-1]<=j)
                      {
                          dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                          
                      }
                      else 
                      {
                          dp[i][j]=dp[i-1][j];
                      }
                }
            }
            
            return dp[n][sum];
     }

    int findTargetSumWays(vector<int>& arr, int target) {
        int sum =0;
       for(int i=0;i<arr.size();i++){

             sum+=arr[i];
        }
        int d=target;
        if (sum < abs(d) || (sum + d) % 2 != 0)
        return 0;

        
        sum=(d+sum)/2;
        sum=abs(sum);
        return count(arr, sum);
    }
};