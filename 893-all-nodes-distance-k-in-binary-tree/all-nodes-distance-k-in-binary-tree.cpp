/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*  ,TreeNode*>parents;
     void inorder(TreeNode* root)
     {
          if(root==nullptr)
          {
              return ;
          }
          if(root->left!=nullptr)
          parents[root->left]=root;
          inorder(root->left);
          
          if(root->right!=nullptr)
          {
            parents[root->right]=root;
          }
          
          inorder(root->right);

     }

     void bfs(TreeNode* target, int k,vector<int>&result)
     {   
           
           queue<TreeNode*>q;
           q.push(target);
           unordered_set<int>visited;
           visited.insert(target->val);
           while(!q.empty())
           {

                 int n =q.size();
                 if(k==0) break;
                  while(n--)
                  {
                       TreeNode * curr= q.front();
                       q.pop();
                        
                       if(curr->left!=nullptr && !visited.count(curr->left->val))
                       {
                        q.push(curr->left);
                        visited.insert(curr->left->val);

                       }
                       if(curr->right!=nullptr &&!visited.count(curr->right->val)
                       )
                       {
                        q.push(curr->right);
                         visited.insert(curr->right->val);
                        
                       }
                        if(parents.count(curr) && !visited.count(parents[curr]->val))
                       {
                        q.push(parents[curr]);
                        visited.insert(parents[curr]->val);

                       }
                       

                  }
                  k--;
           }
           while(!q.empty())
           {
              TreeNode * curr= q.front();
              q.pop();
              result.push_back(curr->val);
           }


     }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
     vector<int>result;
     
      inorder(root);
      
      bfs(target, k ,result);
      return result;
    }
};