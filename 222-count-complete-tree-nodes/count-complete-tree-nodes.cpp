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
   int countl(TreeNode* root)
   {
         TreeNode* temp=root;
         int c=0;
         while(temp!=nullptr)
         {
             temp=temp->left;
             c++;
         }
         return c;
   }
   int count(TreeNode* root)
   {
         TreeNode* temp=root;
         int c=0;
         while(temp!=nullptr)
         {
             temp=temp->right;
             c++;
         }
         return c;
   }
    int countNodes(TreeNode* root) {
        

        if(root==nullptr)
        return 0;

        int lh =countl(root);
        int rh=count(root);
        if(lh==rh)
        {

            return (pow(2,lh)-1);
        }

        return countNodes(root->left)+countNodes(root->right)+1;
    }
};