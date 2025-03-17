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
  void inorder(TreeNode* root, int k, vector<int>&arr)
  {
      if(root==nullptr)return ;
      if(root->left)
      {
          inorder(root->left,k, arr);

      }
      arr.push_back(root->val);
      if(root->right)
      {
          inorder(root->right, k ,arr);
          
      }
  }
    bool findTarget(TreeNode* root, int k) {

      vector<int>arr;

        inorder(root , k , arr);
      unordered_map<int ,int >mp;

      for( int num:arr)
      {    int target=k-num;
           if(mp.find(target)!=mp.end())
           {
              return true;
           }
          mp[num]++;
      }
       return false; 
    }
};