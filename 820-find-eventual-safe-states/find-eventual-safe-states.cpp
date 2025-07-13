class Solution {
public:
   vector< int> toposort(vector<vector< int>>&reverse, vector< int>&indegree, int n )
   {
         vector<bool >result(n,false);
         queue< int>q;

         for( int i=0;i<n ;i++)
         {
              if( indegree[i]==0)
              {
                  indegree[i]++;
                  result[i]=true;
                  q.push(i);
              }
         }
         while(!q.empty())
         {

               int u =q.front ();
               q.pop();
               for( int &v :reverse[u])
               {
                     indegree[v]--;
                     if(indegree[v]==0)
                     {    result[v]=true;
                          q.push(v);
                     }
               }
         }

         vector< int>ans;
         for( int i=0;i<n ;i++)
         {
              if(result[i])
              {
                ans.push_back(i);
              }
         }
         return ans ;
   }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        

        int n =graph.size();
        vector<vector< int>>reverse(n);
         vector< int>indegree(n);
        for( int u=0;u<n;u++)
        {
               for( int &v:graph[u])
               {
                      
                      reverse[v].push_back(u);
                       indegree[u]++;
               }
        }


        return toposort(reverse ,indegree,n);
    }
};