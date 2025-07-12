class Solution {
public:
   vector<int> toposort(int num , vector< int>&indegree, unordered_map<int , vector< int>>adj)
   {

        vector< int>result;

        queue< int>q;

        for( int i=0;i<num;i++)
        {
              if( indegree[i]==0)
              {
                result.push_back(i);
                q.push(i);
              }
        }
        while(!q.empty())
        {
              int u =q.front();
              q.pop();

              for( int &v :adj[u])
              {
                  
                    indegree[v]--;
                    if(indegree[v]==0)
                    {
                         result.push_back(v);
                         q.push(v);
                    }
              }
        }

        if(result.size()==num)
        {
            return result ;
        }
        return {};
   }
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        
        unordered_map<int , vector< int>>adj;

        vector< int>indegree(num, 0);

        for(auto & v: pre)
        {
              int a =v[0];
              int b =v[1];

              adj[b].push_back(a);
              indegree[a]++;


        }

        return toposort(num, indegree , adj);
    }
};