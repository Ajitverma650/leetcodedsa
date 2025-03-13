/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void graph(unordered_map<int, vector<int>>&adj, int parent , TreeNode* curr)
    {      if(curr==nullptr )return ;
            if(parent!=-1)
            {
                adj[curr->val].push_back(parent);
            }
            if(curr->left!=nullptr)
            {
                 adj[curr->val].push_back(curr->left->val);
            }
            if(curr->right!=nullptr)
            {
                 adj[curr->val].push_back(curr->right->val);
            }
            graph(adj, curr->val,curr->left);
            graph(adj,curr->val,curr->right);
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int, vector<int>>adj;
       
       graph(adj , -1 ,root);
       queue<int>q;
       unordered_set<int>visited;

       q.push(start);
       visited.insert(start);
       int minutes =0;
       while(!q.empty())
       {
             int n =q.size();
             while(n--)
             {   
                  int curr=q.front();
                  q.pop();
                  for( int nbr:adj[curr])
                  {
                     if(visited.find(nbr)==visited.end())
                    {
                       q.push(nbr);
                       visited.insert(nbr);
                     }
                  }
                  
                   
             }
             minutes++;
       }

       return minutes -1;

    }
};