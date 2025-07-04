class Solution {
public:
    int ladderLength(string start, string end, vector<string>& word) {

        unordered_set<string>bank(word.begin(),word.end());

        queue<string>q;
        q.push(start);

        int level=1;
        while(!q.empty())
        {

             int n =q.size();
             
             while(n--)
             {

                 string curr=q.front();
                 q.pop();
                 if(curr==end) return level;
                 bank.erase(curr);
                 for(int j=0;j<curr.size();j++ )
                 {
                       char c =curr[j];
                       for(int k =0;k<26;k++)
                       {
                          curr[j]='a'+k;
                          if(bank.find(curr)!=bank.end())
                          {
                            q.push(curr);
                          }
                       }

                       curr[j]=c;
                 }
             }

             level++;
        }
       return 0; 
    }
};