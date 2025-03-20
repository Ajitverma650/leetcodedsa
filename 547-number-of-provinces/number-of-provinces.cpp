class Solution {
public:

    void dfs (vector<vector<int>>& isConnected,vector<int>&visited , int node )
    {
           visited[node]=1;
           int n =isConnected.size();
           for(int i =0;i<n;i++)
           {
                if(isConnected[node][i]==1 && !visited[i])
                {     
                     dfs(isConnected, visited,i);
                }
           }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {

      int n =  isConnected.size();
      vector<int>visited(n, 0);
      int count=0;
      for( int i=0;i<n;i++)
      {
                  if(!visited[i])
                {     
                     dfs(isConnected, visited,i);
                     count++;
                }

      }
      return count;
        
    }
};