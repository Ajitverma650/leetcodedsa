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
     void  preorder ( TreeNode* root, int level , vector<int>&ans)
     {
         if(root==nullptr)
         {

            return ;
         }
         if(level>ans.size())
         {
            ans.push_back(root->val);
         }
         level++;
         preorder(root->right, level,ans);
         preorder(root->left, level,ans);

   }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans ;
       
        preorder(root,1,ans);
        return ans ;
    }
};