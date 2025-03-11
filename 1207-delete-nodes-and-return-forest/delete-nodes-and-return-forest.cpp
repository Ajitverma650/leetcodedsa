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
    TreeNode* todelete(TreeNode* root,unordered_set<int>&st, vector<TreeNode*>&results)
    {
          if(root==nullptr)
          {
              return nullptr;
          }
          root->left= todelete(root->left,st,results);
           root->right= todelete(root->right,st,results);

           if(st.find(root->val)!=st.end())
           {    
                 if(root->left!=nullptr)  
                 {
                     results.push_back(root->left);
                 } 
                 if(root->right!=nullptr)  
                 {
                     results.push_back(root->right);
                 } 
                 return nullptr;
           }
           else
           {
              return root;
           }
          
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*>results;
        unordered_set<int>st;
       for( int num:to_delete)
       {
             st.insert(num);
       }

       todelete(root,st,results);
       if(st.find(root->val)==st.end())
       {
           results.push_back(root);
       }
       return results;
    }
};