class Solution {
public:
    int m ,n;
    int result=0 ;
    int obs=0;
    vector<vector<int>>dirs{{1,0},{-1,0},{0,-1},{0,1}};
    void backtrack(vector<vector<int>>& grid, int count , int i , int j )
    {
          if(i<0 ||i>=m || j<0 ||j>=n || grid[i][j]==-1)
          {
               return ;
          }
          if(grid[i][j]==2)
          {
            if(count==obs)
            {
                result++;
            }
            return ;
          }

          grid[i][j]=-1;

          for(vector<int> dir:dirs)
          {
              int new_i=i+dir[0];
              int new_j=j+dir[1];

              backtrack(grid , count+1, new_i, new_j);
          }

          grid[i][j]=0;
    
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();

        int x=0;
        int y=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                   if(grid[i][j]==0)
                   {
                      obs++;
            
                   }
                   if(grid[i][j]==1)
                   {
                      obs++;
                      x=i;
                      y=j;
                   }

            }

            

        }
        
        backtrack(grid ,0,x,y);

        return result;
        
    }
};