class Solution {
public:
    bool toposort(vector< int>& indegree , int num ,unordered_map< int, vector<int>>adj )
    {
          
            int count =0;
            queue< int>q;

            

            for(int i=0;i<num;i++)
            {
                if(indegree[i]==0)
                {   count++;
                    q.push(i);
                }
            }

            while(!q.empty())
            {

                  int u=q.front();
                  q.pop();

                   
                   for(int &v:adj[u])
                   {
                       indegree[v]--;
                       if(indegree[v]==0)
                       {
                        count++;
                        q.push(v);
                       }
                   }
            }

            return count==num;
    }

    bool canFinish(int num, vector<vector<int>>& pre) {
        

       unordered_map< int, vector<int>>adj;
       vector<int>indegree(num,0);

       for(auto & v:pre)
       {
          int  a =v[0];
          int b =v[1];

          adj[b].push_back(a);
          indegree[a]++;

       }




      return toposort(indegree , num,adj);
    }
};