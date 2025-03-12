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
    int maxLevelSum(TreeNode* root) {
          int ans=0;
         int maxsum=INT_MIN;
         queue<TreeNode*>q;
         q.push(root);
          int level=1;
         while(!q.empty())
         {
                int sum=0;
              int n =q.size();
              while(n--)
              {
                  TreeNode* curr=q.front();

                  q.pop();
                  sum=sum+curr->val;
                  if(curr->left)
                  {
                     q.push(curr->left);
                     
                  }
                  if(curr->right)
                  {
                     q.push(curr->right);
                  }

              }
              if(sum>maxsum)
              {
                 maxsum=sum;
                 ans=level;
              }
              level++;

         }
       return ans ;
    }
};