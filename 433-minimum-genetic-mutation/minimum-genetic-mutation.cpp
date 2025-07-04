class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {

        unordered_set<string>bankset(bank.begin(),bank.end());
        unordered_set<string>visited;

        queue<string>q;
        q.push(start);
        int level=0;
        visited.insert(start);

        while(!q.empty())
        {
            int n =q.size();

            while(n--)
            {
                  string curr=q.front();
                  q.pop();
                 if(curr==end) return level;

                  for(char ch:"ACGT")
                  {
                       for( int i=0;i<curr.length();i++)
                       {
                            string neighbour=curr;
                            neighbour[i]=ch;

                            if(visited.find(neighbour)==visited.end()&& bankset.find(neighbour)!=bankset.end())
                            {
                              visited.insert(neighbour);
                              q.push(neighbour);
                            }
                       }
                  }
            }
            level++;
        }


      return -1; 
    }
};